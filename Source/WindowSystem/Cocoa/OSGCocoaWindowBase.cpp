/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class CocoaWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGCocoaWindowBase.h"
#include "OSGCocoaWindow.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CocoaWindow
    The class for MacOS X Cocoa windows.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var NSOpenGLContextP CocoaWindowBase::_sfContext
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CocoaWindow *, nsOSG>::_type(
    "CocoaWindowPtr", 
    "WindowPtr", 
    CocoaWindow::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CocoaWindow *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CocoaWindow *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CocoaWindow *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CocoaWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFNSOpenGLContextP::Description(
        SFNSOpenGLContextP::getClassType(),
        "context",
        "",
        ContextFieldId, ContextFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CocoaWindow::editHandleContext),
        static_cast<FieldGetMethodSig >(&CocoaWindow::getHandleContext));

    oType.addInitialDesc(pDesc);
}


CocoaWindowBase::TypeObject CocoaWindowBase::_type(
    CocoaWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CocoaWindowBase::createEmptyLocal),
    CocoaWindow::initMethod,
    CocoaWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CocoaWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"CocoaWindow\"\n"
    "   parent=\"Window\"\n"
    "   library=\"WindowCocoa\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpWindowCocao\"\n"
    "   >\n"
    "  The class for MacOS X Cocoa windows.\n"
    "  <Field\n"
    "\t name=\"context\"\n"
    "\t type=\"NSOpenGLContextP\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t defaultValue=\"0\"\n"
    "\t fieldHeader=\"OSGCocoaWindowDataFields.h\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "The class for MacOS X Cocoa windows.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CocoaWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &CocoaWindowBase::getType(void) const
{
    return _type;
}

UInt32 CocoaWindowBase::getContainerSize(void) const
{
    return sizeof(CocoaWindow);
}

/*------------------------- decorator get ------------------------------*/


SFNSOpenGLContextP *CocoaWindowBase::editSFContext(void)
{
    editSField(ContextFieldMask);

    return &_sfContext;
}

const SFNSOpenGLContextP *CocoaWindowBase::getSFContext(void) const
{
    return &_sfContext;
}






/*------------------------------ access -----------------------------------*/

SizeT CocoaWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        returnValue += _sfContext.getBinSize();
    }

    return returnValue;
}

void CocoaWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyToBin(pMem);
    }
}

void CocoaWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        editSField(ContextFieldMask);
        _sfContext.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CocoaWindowTransitPtr CocoaWindowBase::createLocal(BitVector bFlags)
{
    CocoaWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CocoaWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CocoaWindowTransitPtr CocoaWindowBase::createDependent(BitVector bFlags)
{
    CocoaWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CocoaWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CocoaWindowTransitPtr CocoaWindowBase::create(void)
{
    CocoaWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CocoaWindow>(tmpPtr);
    }

    return fc;
}

CocoaWindow *CocoaWindowBase::createEmptyLocal(BitVector bFlags)
{
    CocoaWindow *returnValue;

    newPtr<CocoaWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CocoaWindow *CocoaWindowBase::createEmpty(void)
{
    CocoaWindow *returnValue;

    newPtr<CocoaWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CocoaWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CocoaWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CocoaWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CocoaWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CocoaWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CocoaWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CocoaWindowBase::shallowCopy(void) const
{
    CocoaWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CocoaWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CocoaWindowBase::CocoaWindowBase(void) :
    Inherited(),
    _sfContext                (NSOpenGLContextP(0))
{
}

CocoaWindowBase::CocoaWindowBase(const CocoaWindowBase &source) :
    Inherited(source),
    _sfContext                (source._sfContext                )
{
}


/*-------------------------- destructors ----------------------------------*/

CocoaWindowBase::~CocoaWindowBase(void)
{
}


GetFieldHandlePtr CocoaWindowBase::getHandleContext         (void) const
{
    SFNSOpenGLContextP::GetHandlePtr returnValue(
        new  SFNSOpenGLContextP::GetHandle(
             &_sfContext,
             this->getType().getFieldDesc(ContextFieldId),
             const_cast<CocoaWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CocoaWindowBase::editHandleContext        (void)
{
    SFNSOpenGLContextP::EditHandlePtr returnValue(
        new  SFNSOpenGLContextP::EditHandle(
             &_sfContext,
             this->getType().getFieldDesc(ContextFieldId),
             this));


    editSField(ContextFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CocoaWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CocoaWindow *pThis = static_cast<CocoaWindow *>(this);

    pThis->execSync(static_cast<CocoaWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CocoaWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CocoaWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CocoaWindow *>(pRefAspect),
                  dynamic_cast<const CocoaWindow *>(this));

    return returnValue;
}
#endif

void CocoaWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
