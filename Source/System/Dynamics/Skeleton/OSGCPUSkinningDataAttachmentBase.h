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
 **     class CPUSkinningDataAttachment
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCPUSKINNINGDATAATTACHMENTBASE_H_
#define _OSGCPUSKINNINGDATAATTACHMENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachment.h" // Parent

#include "OSGGeoVectorPropertyFields.h" // Properties type
#include "OSGMathFields.h"              // JointMatrices type
#include "OSGSysFields.h"               // DataValid type

#include "OSGCPUSkinningDataAttachmentFields.h"

OSG_BEGIN_NAMESPACE

class CPUSkinningDataAttachment;

//! \brief CPUSkinningDataAttachment Base Class.

class OSG_DYNAMICS_DLLMAPPING CPUSkinningDataAttachmentBase : public Attachment
{
  public:

    typedef Attachment Inherited;
    typedef Attachment ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CPUSkinningDataAttachment);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PropertiesFieldId = Inherited::NextFieldId,
        JointMatricesFieldId = PropertiesFieldId + 1,
        JointNormalMatricesFieldId = JointMatricesFieldId + 1,
        DataValidFieldId = JointNormalMatricesFieldId + 1,
        NextFieldId = DataValidFieldId + 1
    };

    static const OSG::BitVector PropertiesFieldMask =
        (TypeTraits<BitVector>::One << PropertiesFieldId);
    static const OSG::BitVector JointMatricesFieldMask =
        (TypeTraits<BitVector>::One << JointMatricesFieldId);
    static const OSG::BitVector JointNormalMatricesFieldMask =
        (TypeTraits<BitVector>::One << JointNormalMatricesFieldId);
    static const OSG::BitVector DataValidFieldMask =
        (TypeTraits<BitVector>::One << DataValidFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecChildGeoVectorPropertyPtr MFPropertiesType;
    typedef MFMatrix          MFJointMatricesType;
    typedef MFMatrix          MFJointNormalMatricesType;
    typedef SFBool            SFDataValidType;

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

            const MFUnrecChildGeoVectorPropertyPtr *getMFProperties     (void) const;
                  MFUnrecChildGeoVectorPropertyPtr *editMFProperties     (void);

                  MFMatrix            *editMFJointMatrices  (void);
            const MFMatrix            *getMFJointMatrices   (void) const;

                  MFMatrix            *editMFJointNormalMatrices(void);
            const MFMatrix            *getMFJointNormalMatrices (void) const;

                  SFBool              *editSFDataValid      (void);
            const SFBool              *getSFDataValid       (void) const;


                  GeoVectorProperty * getProperties     (const UInt32 index) const;

                  Matrix              &editJointMatrices  (const UInt32 index);
            const Matrix              &getJointMatrices   (const UInt32 index) const;

                  Matrix              &editJointNormalMatrices(const UInt32 index);
            const Matrix              &getJointNormalMatrices (const UInt32 index) const;

                  bool                &editDataValid      (void);
                  bool                 getDataValid       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDataValid      (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToProperties           (GeoVectorProperty * const value   );
    void assignProperties          (const MFUnrecChildGeoVectorPropertyPtr &value);
    void removeFromProperties (UInt32               uiIndex );
    void removeObjFromProperties(GeoVectorProperty * const value   );
    void clearProperties            (void                         );

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

    static  CPUSkinningDataAttachmentTransitPtr  create          (void);
    static  CPUSkinningDataAttachment           *createEmpty     (void);

    static  CPUSkinningDataAttachmentTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CPUSkinningDataAttachment            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CPUSkinningDataAttachmentTransitPtr  createDependent  (BitVector bFlags);

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

    MFUnrecChildGeoVectorPropertyPtr _mfProperties;
    MFMatrix          _mfJointMatrices;
    MFMatrix          _mfJointNormalMatrices;
    SFBool            _sfDataValid;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CPUSkinningDataAttachmentBase(void);
    CPUSkinningDataAttachmentBase(const CPUSkinningDataAttachmentBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CPUSkinningDataAttachmentBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CPUSkinningDataAttachment *source = NULL);

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

    GetFieldHandlePtr  getHandleProperties      (void) const;
    EditFieldHandlePtr editHandleProperties     (void);
    GetFieldHandlePtr  getHandleJointMatrices   (void) const;
    EditFieldHandlePtr editHandleJointMatrices  (void);
    GetFieldHandlePtr  getHandleJointNormalMatrices (void) const;
    EditFieldHandlePtr editHandleJointNormalMatrices(void);
    GetFieldHandlePtr  getHandleDataValid       (void) const;
    EditFieldHandlePtr editHandleDataValid      (void);

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

            void execSync (      CPUSkinningDataAttachmentBase *pFrom,
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
    void operator =(const CPUSkinningDataAttachmentBase &source);
};

typedef CPUSkinningDataAttachmentBase *CPUSkinningDataAttachmentBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCPUSKINNINGDATAATTACHMENTBASE_H_ */