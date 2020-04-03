
#include "OSGConfig.h"
#include "OSGGL.h"

#include <iostream>

#ifdef OSG_WITH_QT5
#include <QtWidgets/QApplication>
#else
#include <QtGui/qapplication.h>
#endif

#include <QtGui/QMouseEvent>
#include <QtGui/QKeyEvent>
#include <QtOpenGL/QGLContext>

#include "OSGSimpleSceneManager.h"
#include "OSGSimpleGeometry.h"

#include "OSGQT4Window.h"

const int nwindows = 2;

class MyOSGQGLWidget : public OSG::OSGQGLWidget
{
  public:

    MyOSGQGLWidget(      QWidget                      *pParent      = 0,
                   const char                         *szName       = 0);
    MyOSGQGLWidget(      OSG::OSGQGLWidget::GLContext *pContext,
                         QWidget                      *pParent      = 0,
                   const QGLWidget                    *pShareWidget = 0,
                         Qt::WindowFlags               f            = 0);
    
    virtual ~MyOSGQGLWidget(void);
    
    OSG::SimpleSceneManagerRefPtr m_manager;
    
  protected:

    virtual void paintGL          (void          );
    virtual void resizeGL         (int w, 
                                   int          h);

    virtual void mousePressEvent  (QMouseEvent * );
    virtual void mouseReleaseEvent(QMouseEvent * );
    virtual void mouseMoveEvent   (QMouseEvent * );
    virtual void keyPressEvent    (QKeyEvent   * );
};

MyOSGQGLWidget    *glWidgets[nwindows];
QApplication      *a;

MyOSGQGLWidget::MyOSGQGLWidget(      QWidget *pParent, 
                               const char    *szName ) :
    OSGQGLWidget(pParent, szName),
    m_manager   (nullptr        )
{
    m_manager = OSG::SimpleSceneManager::create();

    m_manager->setUseTraversalAction(true);
}

MyOSGQGLWidget::MyOSGQGLWidget(      OSGQGLWidget::GLContext *pContext,
                                     QWidget                 *pParent,
                               const QGLWidget               *pShareWidget,
                                     Qt::WindowFlags          f           ) :
    OSGQGLWidget(pContext, pParent, pShareWidget, f),
    m_manager   (nullptr                           )
{
    m_manager = OSG::SimpleSceneManager::create();
    m_manager->setUseTraversalAction(true);
}

MyOSGQGLWidget::~MyOSGQGLWidget(void)
{
    m_manager = NULL;
}

#if 0
void MyOSGQGLWidget::initializeGL ( void )
{
    m_manager->getWindow()->init();       // create the context
//    m_manager->getWindow()->activate();   // and activate it
}
#endif

void MyOSGQGLWidget::paintGL(void)
{
    m_manager->idle  ();
    m_manager->redraw();

    OSG::Thread::getCurrentChangeList()->clear();
}

void MyOSGQGLWidget::resizeGL(int w, int h)
{
    m_manager->resize(w, h);
    repaint();
}

void MyOSGQGLWidget::mousePressEvent(QMouseEvent *me)
{
    OSG::UInt16 but;

    switch(me->button()) 
    {
        case Qt::LeftButton:    
            but = OSG::SimpleSceneManager::MouseLeft;   
            break;

        case Qt::MidButton:     
            but = OSG::SimpleSceneManager::MouseMiddle; 
            break;

        case Qt::RightButton:   
            but = OSG::SimpleSceneManager::MouseRight;  
            break;

        default: 
            break;
    }

    m_manager->mouseButtonPress(but, me->pos().x(), me->pos().y());

    repaint();
}

void MyOSGQGLWidget::mouseReleaseEvent(QMouseEvent *me)
{
    OSG::UInt16 but = OSG::SimpleSceneManager::NoButton;

    switch(me->button()) 
    {
        case Qt::LeftButton:    
            but = OSG::SimpleSceneManager::MouseLeft;   
            break;

        case Qt::MidButton:     
            but = OSG::SimpleSceneManager::MouseMiddle; 
            break;

        case Qt::RightButton:   
            but = OSG::SimpleSceneManager::MouseRight;  
            break;

        default:                                                 
            break;
    }

    m_manager->mouseButtonRelease(but, me->pos().x(), me->pos().y());
    repaint();
}

void MyOSGQGLWidget::mouseMoveEvent(QMouseEvent *me)
{
    m_manager->mouseMove(me->pos().x(), me->pos().y());

    repaint();
}


void MyOSGQGLWidget::keyPressEvent(QKeyEvent *ke)
{
    if(ke->key() == Qt::Key_Escape)
    {
        a->quit();
    }
    else
    {
        repaint();
    }
}


int main(int argc, char **argv)
{
    // OSG init

    OSG::osgInit(argc, argv);
    
    // QT init

    QApplication::setColorSpec(QApplication::CustomColor);

    a = new QApplication( argc, argv );

    if(!QGLFormat::hasOpenGL())
    {
        qWarning( "This system has no OpenGL support. Exiting." );
        return -1;
    }

    // Create Windows

    QGLFormat::setDefaultFormat(QGLFormat(QGL::DirectRendering | 
                                          QGL::DoubleBuffer    |  
                                          QGL::DepthBuffer     |
                                          QGL::Rgba            ));
    
    
    for(int i = 0; i < nwindows; ++i)
    {
        glWidgets[i] = new MyOSGQGLWidget(
            new OSG::OSGQGLWidget::GLContext(QGLFormat::defaultFormat()), 
            0, 
            0, 
            0);;

        OSG::QT4WindowRecPtr win = OSG::QT4Window::create();

        win->setGlWidget(glWidgets[i]);

        // note: you can't share the scene between the windows, as the SSM
        // adds it to his lightsource, and that can only be done for one
        // node (single parent paradigm).
        // If you want to do that, you have to manage the scene yourself
        // without the SSM.
        OSG::NodeUnrecPtr scene = OSG::makeTorus( .5, 2, 16, 16 );

        OSG::commitChanges();
 
        glWidgets[i]->m_manager->setWindow( win );
        glWidgets[i]->m_manager->setRoot( scene );
        glWidgets[i]->m_manager->showAll();

        win->init();

        a->processEvents();

        glWidgets[i]->show();

        a->processEvents();
    }

    a->exec(); // execute QT main loop

    for(int i = 0; i < nwindows; ++i)
    {
        delete glWidgets[i];
        glWidgets[i] = NULL;
    }

    delete a;

    OSG::osgExit();

    return (0);
}

//#include "testWindowQTSSM_qt_moc.cpp"
