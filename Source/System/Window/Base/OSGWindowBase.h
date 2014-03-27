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
 **     class Window
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGWINDOWBASE_H_
#define _OSGWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGHardwareContext.h" // Parent

#include "OSGSysFields.h"               // Width type
#include "OSGViewportFields.h"          // Port type
#include "OSGRenderOptionsFields.h"     // RenderOptions type
#include "OSGBaseFields.h"              // RendererInfo type
#include "OSGDrawTask.h"                // DrawTasks type

#include "OSGWindowFields.h"

OSG_BEGIN_NAMESPACE


class Window;

//! \brief Window Base Class.

class OSG_SYSTEM_DLLMAPPING WindowBase : public HardwareContext
{
  public:

    typedef HardwareContext Inherited;
    typedef HardwareContext ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Window);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        WidthFieldId = Inherited::NextFieldId,
        HeightFieldId = WidthFieldId + 1,
        PortFieldId = HeightFieldId + 1,
        GlObjectEventCounterFieldId = PortFieldId + 1,
        GlObjectLastRefreshFieldId = GlObjectEventCounterFieldId + 1,
        GlObjectLastReinitializeFieldId = GlObjectLastRefreshFieldId + 1,
        DrawerIdFieldId = GlObjectLastReinitializeFieldId + 1,
        RequestMajorFieldId = DrawerIdFieldId + 1,
        RequestMinorFieldId = RequestMajorFieldId + 1,
        ContextFlagsFieldId = RequestMinorFieldId + 1,
        RenderOptionsFieldId = ContextFlagsFieldId + 1,
        IgnoreAllExtensionsFieldId = RenderOptionsFieldId + 1,
        DrawModeFieldId = IgnoreAllExtensionsFieldId + 1,
        RendererInfoFieldId = DrawModeFieldId + 1,
        DrawTasksFieldId = RendererInfoFieldId + 1,
        NextFieldId = DrawTasksFieldId + 1
    };

    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector PortFieldMask =
        (TypeTraits<BitVector>::One << PortFieldId);
    static const OSG::BitVector GlObjectEventCounterFieldMask =
        (TypeTraits<BitVector>::One << GlObjectEventCounterFieldId);
    static const OSG::BitVector GlObjectLastRefreshFieldMask =
        (TypeTraits<BitVector>::One << GlObjectLastRefreshFieldId);
    static const OSG::BitVector GlObjectLastReinitializeFieldMask =
        (TypeTraits<BitVector>::One << GlObjectLastReinitializeFieldId);
    static const OSG::BitVector DrawerIdFieldMask =
        (TypeTraits<BitVector>::One << DrawerIdFieldId);
    static const OSG::BitVector RequestMajorFieldMask =
        (TypeTraits<BitVector>::One << RequestMajorFieldId);
    static const OSG::BitVector RequestMinorFieldMask =
        (TypeTraits<BitVector>::One << RequestMinorFieldId);
    static const OSG::BitVector ContextFlagsFieldMask =
        (TypeTraits<BitVector>::One << ContextFlagsFieldId);
    static const OSG::BitVector RenderOptionsFieldMask =
        (TypeTraits<BitVector>::One << RenderOptionsFieldId);
    static const OSG::BitVector IgnoreAllExtensionsFieldMask =
        (TypeTraits<BitVector>::One << IgnoreAllExtensionsFieldId);
    static const OSG::BitVector DrawModeFieldMask =
        (TypeTraits<BitVector>::One << DrawModeFieldId);
    static const OSG::BitVector RendererInfoFieldMask =
        (TypeTraits<BitVector>::One << RendererInfoFieldId);
    static const OSG::BitVector DrawTasksFieldMask =
        (TypeTraits<BitVector>::One << DrawTasksFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt16          SFWidthType;
    typedef SFUInt16          SFHeightType;
    typedef MFUnrecChildViewportPtr MFPortType;
    typedef SFUInt32          SFGlObjectEventCounterType;
    typedef MFUInt32          MFGlObjectLastRefreshType;
    typedef MFUInt32          MFGlObjectLastReinitializeType;
    typedef SFInt32           SFDrawerIdType;
    typedef SFInt32           SFRequestMajorType;
    typedef SFInt32           SFRequestMinorType;
    typedef SFInt32           SFContextFlagsType;
    typedef SFUnrecRenderOptionsPtr SFRenderOptionsType;
    typedef SFBool            SFIgnoreAllExtensionsType;
    typedef SFUInt32          SFDrawModeType;
    typedef SFString          SFRendererInfoType;
    typedef MFDrawTask        MFDrawTasksType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt16            *editSFWidth          (void);
            const SFUInt16            *getSFWidth           (void) const;

                  SFUInt16            *editSFHeight         (void);
            const SFUInt16            *getSFHeight          (void) const;
            const MFUnrecChildViewportPtr *getMFPort           (void) const;

                  SFInt32             *editSFDrawerId       (void);
            const SFInt32             *getSFDrawerId        (void) const;

                  SFInt32             *editSFRequestMajor   (void);
            const SFInt32             *getSFRequestMajor    (void) const;

                  SFInt32             *editSFRequestMinor   (void);
            const SFInt32             *getSFRequestMinor    (void) const;

                  SFInt32             *editSFContextFlags   (void);
            const SFInt32             *getSFContextFlags    (void) const;
            const SFUnrecRenderOptionsPtr *getSFRenderOptions  (void) const;
                  SFUnrecRenderOptionsPtr *editSFRenderOptions  (void);

                  SFBool              *editSFIgnoreAllExtensions(void);
            const SFBool              *getSFIgnoreAllExtensions (void) const;

                  SFUInt32            *editSFDrawMode       (void);
            const SFUInt32            *getSFDrawMode        (void) const;

                  SFString            *editSFRendererInfo   (void);
            const SFString            *getSFRendererInfo    (void) const;


                  UInt16              &editWidth          (void);
                  UInt16               getWidth           (void) const;

                  UInt16              &editHeight         (void);
                  UInt16               getHeight          (void) const;

                  Viewport * getPort           (const UInt32 index) const;

                  Int32               &editDrawerId       (void);
                  Int32                getDrawerId        (void) const;

                  Int32               &editRequestMajor   (void);
                  Int32                getRequestMajor    (void) const;

                  Int32               &editRequestMinor   (void);
                  Int32                getRequestMinor    (void) const;

                  Int32               &editContextFlags   (void);
                  Int32                getContextFlags    (void) const;

                  RenderOptions * getRenderOptions  (void) const;

                  bool                &editIgnoreAllExtensions(void);
                  bool                 getIgnoreAllExtensions (void) const;

                  UInt32              &editDrawMode       (void);
                  UInt32               getDrawMode        (void) const;

                  std::string         &editRendererInfo   (void);
            const std::string         &getRendererInfo    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setWidth          (const UInt16 value);
            void setHeight         (const UInt16 value);
            void setDrawerId       (const Int32 value);
            void setRequestMajor   (const Int32 value);
            void setRequestMinor   (const Int32 value);
            void setContextFlags   (const Int32 value);
            void setRenderOptions  (RenderOptions * const value);
            void setIgnoreAllExtensions(const bool value);
            void setDrawMode       (const UInt32 value);
            void setRendererInfo   (const std::string &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void addPort                   (Viewport * const value   );
    void assignPort               (const MFUnrecChildViewportPtr &value);
    void clearPorts                 (void                         );
    void insertPort           (UInt32               uiIndex,
                                             Viewport * const value   );
    void replacePort      (      UInt32         uiIndex,
                                             Viewport * const value   );
    void replacePortByObj (Viewport * const pOldElem,
                                             Viewport * const pNewElem);
    void subPort         (UInt32               uiIndex );
    void subPortByObj   (Viewport * const value   );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt16          _sfWidth;
    SFUInt16          _sfHeight;
    MFUnrecChildViewportPtr _mfPort;
    SFUInt32          _sfGlObjectEventCounter;
    MFUInt32          _mfGlObjectLastRefresh;
    MFUInt32          _mfGlObjectLastReinitialize;
    SFInt32           _sfDrawerId;
    SFInt32           _sfRequestMajor;
    SFInt32           _sfRequestMinor;
    SFInt32           _sfContextFlags;
    SFUnrecRenderOptionsPtr _sfRenderOptions;
    SFBool            _sfIgnoreAllExtensions;
    SFUInt32          _sfDrawMode;
    SFString          _sfRendererInfo;
    MFDrawTask        _mfDrawTasks;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    WindowBase(void);
    WindowBase(const WindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Window *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleWidth           (void) const;
     EditFieldHandlePtr editHandleWidth          (void);
     GetFieldHandlePtr  getHandleHeight          (void) const;
     EditFieldHandlePtr editHandleHeight         (void);
     GetFieldHandlePtr  getHandlePort            (void) const;
     EditFieldHandlePtr editHandlePort           (void);
     GetFieldHandlePtr  getHandleGlObjectEventCounter (void) const;
     EditFieldHandlePtr editHandleGlObjectEventCounter(void);
     GetFieldHandlePtr  getHandleGlObjectLastRefresh (void) const;
     EditFieldHandlePtr editHandleGlObjectLastRefresh(void);
     GetFieldHandlePtr  getHandleGlObjectLastReinitialize (void) const;
     EditFieldHandlePtr editHandleGlObjectLastReinitialize(void);
     GetFieldHandlePtr  getHandleDrawerId        (void) const;
     EditFieldHandlePtr editHandleDrawerId       (void);
     GetFieldHandlePtr  getHandleRequestMajor    (void) const;
     EditFieldHandlePtr editHandleRequestMajor   (void);
     GetFieldHandlePtr  getHandleRequestMinor    (void) const;
     EditFieldHandlePtr editHandleRequestMinor   (void);
     GetFieldHandlePtr  getHandleContextFlags    (void) const;
     EditFieldHandlePtr editHandleContextFlags   (void);
     GetFieldHandlePtr  getHandleRenderOptions   (void) const;
     EditFieldHandlePtr editHandleRenderOptions  (void);
     GetFieldHandlePtr  getHandleIgnoreAllExtensions (void) const;
     EditFieldHandlePtr editHandleIgnoreAllExtensions(void);
     GetFieldHandlePtr  getHandleDrawMode        (void) const;
     EditFieldHandlePtr editHandleDrawMode       (void);
     GetFieldHandlePtr  getHandleRendererInfo    (void) const;
     EditFieldHandlePtr editHandleRendererInfo   (void);
     GetFieldHandlePtr  getHandleDrawTasks       (void) const;
     EditFieldHandlePtr editHandleDrawTasks      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFGlObjectEventCounter(void);
            const SFUInt32            *getSFGlObjectEventCounter (void) const;

                  MFUInt32            *editMFGlObjectLastRefresh(void);
            const MFUInt32            *getMFGlObjectLastRefresh (void) const;

                  MFUInt32            *editMFGlObjectLastReinitialize(void);
            const MFUInt32            *getMFGlObjectLastReinitialize (void) const;
            const MFDrawTask          *getMFDrawTasks       (void) const;


                  UInt32              &editGlObjectEventCounter(void);
                  UInt32               getGlObjectEventCounter (void) const;

                  MFUInt32           ::reference editGlObjectLastRefresh(const UInt32 index);
                  UInt32               getGlObjectLastRefresh (const UInt32 index) const;

                  MFUInt32           ::reference editGlObjectLastReinitialize(const UInt32 index);
                  UInt32               getGlObjectLastReinitialize (const UInt32 index) const;

                  DrawTask * getDrawTasks      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGlObjectEventCounter(const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      WindowBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const WindowBase &source);
};

typedef WindowBase *WindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGWINDOWBASE_H_ */
