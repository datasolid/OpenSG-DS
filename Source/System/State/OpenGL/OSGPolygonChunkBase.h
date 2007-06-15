/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class PolygonChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPOLYGONCHUNKBASE_H_
#define _OSGPOLYGONCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGGLenumFields.h" // CullFace type
#include "OSGGLenumFields.h" // FrontFace type
#include "OSGGLenumFields.h" // FrontMode type
#include "OSGGLenumFields.h" // BackMode type
#include "OSGBoolFields.h" // Smooth type
#include "OSGReal32Fields.h" // OffsetFactor type
#include "OSGReal32Fields.h" // OffsetBias type
#include "OSGBoolFields.h" // OffsetPoint type
#include "OSGBoolFields.h" // OffsetLine type
#include "OSGBoolFields.h" // OffsetFill type
#include "OSGInt32Fields.h" // Stipple type

#include "OSGPolygonChunkFields.h"

OSG_BEGIN_NAMESPACE

class PolygonChunk;

//! \brief PolygonChunk Base Class.

class OSG_STATE_DLLMAPPING PolygonChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PolygonChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CullFaceFieldId = Inherited::NextFieldId,
        FrontFaceFieldId = CullFaceFieldId + 1,
        FrontModeFieldId = FrontFaceFieldId + 1,
        BackModeFieldId = FrontModeFieldId + 1,
        SmoothFieldId = BackModeFieldId + 1,
        OffsetFactorFieldId = SmoothFieldId + 1,
        OffsetBiasFieldId = OffsetFactorFieldId + 1,
        OffsetPointFieldId = OffsetBiasFieldId + 1,
        OffsetLineFieldId = OffsetPointFieldId + 1,
        OffsetFillFieldId = OffsetLineFieldId + 1,
        StippleFieldId = OffsetFillFieldId + 1,
        NextFieldId = StippleFieldId + 1
    };

    static const OSG::BitVector CullFaceFieldMask =
        (TypeTraits<BitVector>::One << CullFaceFieldId);
    static const OSG::BitVector FrontFaceFieldMask =
        (TypeTraits<BitVector>::One << FrontFaceFieldId);
    static const OSG::BitVector FrontModeFieldMask =
        (TypeTraits<BitVector>::One << FrontModeFieldId);
    static const OSG::BitVector BackModeFieldMask =
        (TypeTraits<BitVector>::One << BackModeFieldId);
    static const OSG::BitVector SmoothFieldMask =
        (TypeTraits<BitVector>::One << SmoothFieldId);
    static const OSG::BitVector OffsetFactorFieldMask =
        (TypeTraits<BitVector>::One << OffsetFactorFieldId);
    static const OSG::BitVector OffsetBiasFieldMask =
        (TypeTraits<BitVector>::One << OffsetBiasFieldId);
    static const OSG::BitVector OffsetPointFieldMask =
        (TypeTraits<BitVector>::One << OffsetPointFieldId);
    static const OSG::BitVector OffsetLineFieldMask =
        (TypeTraits<BitVector>::One << OffsetLineFieldId);
    static const OSG::BitVector OffsetFillFieldMask =
        (TypeTraits<BitVector>::One << OffsetFillFieldId);
    static const OSG::BitVector StippleFieldMask =
        (TypeTraits<BitVector>::One << StippleFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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


#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFCullFace        (void);
#endif
                  SFGLenum            *editSFCullFace       (void);
            const SFGLenum            *getSFCullFace        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFFrontFace       (void);
#endif
                  SFGLenum            *editSFFrontFace      (void);
            const SFGLenum            *getSFFrontFace       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFFrontMode       (void);
#endif
                  SFGLenum            *editSFFrontMode      (void);
            const SFGLenum            *getSFFrontMode       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFBackMode        (void);
#endif
                  SFGLenum            *editSFBackMode       (void);
            const SFGLenum            *getSFBackMode        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFSmooth          (void);
#endif
                  SFBool              *editSFSmooth         (void);
            const SFBool              *getSFSmooth          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOffsetFactor    (void);
#endif
                  SFReal32            *editSFOffsetFactor   (void);
            const SFReal32            *getSFOffsetFactor    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOffsetBias      (void);
#endif
                  SFReal32            *editSFOffsetBias     (void);
            const SFReal32            *getSFOffsetBias      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFOffsetPoint     (void);
#endif
                  SFBool              *editSFOffsetPoint    (void);
            const SFBool              *getSFOffsetPoint     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFOffsetLine      (void);
#endif
                  SFBool              *editSFOffsetLine     (void);
            const SFBool              *getSFOffsetLine      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFOffsetFill      (void);
#endif
                  SFBool              *editSFOffsetFill     (void);
            const SFBool              *getSFOffsetFill      (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFInt32             *getMFStipple         (void);
#endif
                  MFInt32             *editMFStipple        (void);
            const MFInt32             *getMFStipple         (void) const;


#ifdef OSG_1_GET_COMPAT
                  GLenum              &getCullFace        (void);
#endif
                  GLenum              &editCullFace       (void);
            const GLenum              &getCullFace        (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getFrontFace       (void);
#endif
                  GLenum              &editFrontFace      (void);
            const GLenum              &getFrontFace       (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getFrontMode       (void);
#endif
                  GLenum              &editFrontMode      (void);
            const GLenum              &getFrontMode       (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getBackMode        (void);
#endif
                  GLenum              &editBackMode       (void);
            const GLenum              &getBackMode        (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getSmooth          (void);
#endif
                  bool                &editSmooth         (void);
            const bool                &getSmooth          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOffsetFactor    (void);
#endif
                  Real32              &editOffsetFactor   (void);
            const Real32              &getOffsetFactor    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOffsetBias      (void);
#endif
                  Real32              &editOffsetBias     (void);
            const Real32              &getOffsetBias      (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getOffsetPoint     (void);
#endif
                  bool                &editOffsetPoint    (void);
            const bool                &getOffsetPoint     (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getOffsetLine      (void);
#endif
                  bool                &editOffsetLine     (void);
            const bool                &getOffsetLine      (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getOffsetFill      (void);
#endif
                  bool                &editOffsetFill     (void);
            const bool                &getOffsetFill      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getStipple         (const UInt32 index);
                  MFInt32             &getStipple        (void);
#endif
                  Int32               &editStipple        (const UInt32 index);
            const Int32               &getStipple         (const UInt32 index) const;
                  MFInt32             &editStipple        (void);
            const MFInt32             &getStipple        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCullFace       (const GLenum &value);
            void setFrontFace      (const GLenum &value);
            void setFrontMode      (const GLenum &value);
            void setBackMode       (const GLenum &value);
            void setSmooth         (const bool &value);
            void setOffsetFactor   (const Real32 &value);
            void setOffsetBias     (const Real32 &value);
            void setOffsetPoint    (const bool &value);
            void setOffsetLine     (const bool &value);
            void setOffsetFill     (const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToStipple                     (const Int32     &value   );
    void insertIntoStipple                 (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInStipple                  (      UInt32     uiIndex,
                                            const Int32     &value   );
    void replaceInStipple                  (const Int32     &pOldElem,
                                            const Int32     &pNewElem);
    void removeFromStipple                 (      UInt32     uiIndex );
    void removeFromStipple                 (const Int32     &value   );
    void clearStipple                      (      void               );


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  PolygonChunkPtr create     (void);
    static  PolygonChunkPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFGLenum          _sfCullFace;
    SFGLenum          _sfFrontFace;
    SFGLenum          _sfFrontMode;
    SFGLenum          _sfBackMode;
    SFBool            _sfSmooth;
    SFReal32          _sfOffsetFactor;
    SFReal32          _sfOffsetBias;
    SFBool            _sfOffsetPoint;
    SFBool            _sfOffsetLine;
    SFBool            _sfOffsetFill;
    MFInt32           _mfStipple;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PolygonChunkBase(void);
    PolygonChunkBase(const PolygonChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PolygonChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
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

            void execSync (      PolygonChunkBase *pFrom,
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

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PolygonChunkBase &source);
};

typedef PolygonChunkBase *PolygonChunkBaseP;

/** Type specific RefPtr type for PolygonChunk. */
typedef RefPtr<PolygonChunkPtr> PolygonChunkRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<PolygonChunkBase::isNodeCore>,
    CoredNodePtr<PolygonChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        PolygonChunkNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGPOLYGONCHUNKBASE_H_ */
