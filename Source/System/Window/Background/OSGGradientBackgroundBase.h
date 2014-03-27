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
 **     class GradientBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGRADIENTBACKGROUNDBASE_H_
#define _OSGGRADIENTBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

//#include "OSGBaseTypes.h"

#include "OSGTileableBackground.h" // Parent

#include "OSGBaseFields.h"              // Color type
#include "OSGSysFields.h"               // Position type

#include "OSGGradientBackgroundFields.h"

OSG_BEGIN_NAMESPACE


class GradientBackground;

//! \brief GradientBackground Base Class.

class OSG_WINDOW_DLLMAPPING GradientBackgroundBase : public TileableBackground
{
  public:

    typedef TileableBackground Inherited;
    typedef TileableBackground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GradientBackground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ColorFieldId = Inherited::NextFieldId,
        PositionFieldId = ColorFieldId + 1,
        NormPositionFieldId = PositionFieldId + 1,
        StyleFieldId = NormPositionFieldId + 1,
        NextFieldId = StyleFieldId + 1
    };

    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector NormPositionFieldMask =
        (TypeTraits<BitVector>::One << NormPositionFieldId);
    static const OSG::BitVector StyleFieldMask =
        (TypeTraits<BitVector>::One << StyleFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFColor3f         MFColorType;
    typedef MFReal32          MFPositionType;
    typedef SFBool            SFNormPositionType;
    typedef SFUInt32          SFStyleType;

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


                  SFUInt32            *editSFStyle          (void);
            const SFUInt32            *getSFStyle           (void) const;


                  UInt32              &editStyle          (void);
                  UInt32               getStyle           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setStyle          (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  GradientBackgroundTransitPtr  create          (void);
    static  GradientBackground           *createEmpty     (void);

    static  GradientBackgroundTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  GradientBackground            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GradientBackgroundTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFColor3f         _mfColor;
    MFReal32          _mfPosition;
    SFBool            _sfNormPosition;
    SFUInt32          _sfStyle;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GradientBackgroundBase(void);
    GradientBackgroundBase(const GradientBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GradientBackgroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleColor           (void) const;
     EditFieldHandlePtr editHandleColor          (void);
     GetFieldHandlePtr  getHandlePosition        (void) const;
     EditFieldHandlePtr editHandlePosition       (void);
     GetFieldHandlePtr  getHandleNormPosition    (void) const;
     EditFieldHandlePtr editHandleNormPosition   (void);
     GetFieldHandlePtr  getHandleStyle           (void) const;
     EditFieldHandlePtr editHandleStyle          (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  MFColor3f           *editMFColor          (void);
            const MFColor3f           *getMFColor           (void) const;

                  MFReal32            *editMFPosition       (void);
            const MFReal32            *getMFPosition        (void) const;

                  SFBool              *editSFNormPosition   (void);
            const SFBool              *getSFNormPosition    (void) const;


                  MFColor3f          ::reference editColor          (const UInt32 index);
            const Color3f             &getColor           (const UInt32 index) const;

                  MFReal32           ::reference editPosition       (const UInt32 index);
                  Real32               getPosition        (const UInt32 index) const;

                  bool                &editNormPosition   (void);
                  bool                 getNormPosition    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setNormPosition   (const bool value);

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

            void execSync (      GradientBackgroundBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const GradientBackgroundBase &source);
};

typedef GradientBackgroundBase *GradientBackgroundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGRADIENTBACKGROUNDBASE_H_ */
