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
 **     class Switch
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSWITCHBASE_H_
#define _OSGSWITCHBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGInt32Fields.h" // Choice type

#include "OSGSwitchFields.h"

OSG_BEGIN_NAMESPACE

class Switch;

//! \brief Switch Base Class.

class OSG_GROUP_DLLMAPPING SwitchBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              Switch>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              Switch>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              Switch>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              Switch>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              Switch>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<GroupPtr,
                              GroupConstPtr,
                              Switch>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ChoiceFieldId = Inherited::NextFieldId,
        NextFieldId = ChoiceFieldId + 1
    };

    static const OSG::BitVector ChoiceFieldMask =
        (TypeTraits<BitVector>::One << ChoiceFieldId);
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


#ifdef OSG_1_COMPAT
                  SFInt32             *getSFChoice          (void);
#endif
                  SFInt32             *editSFChoice         (void);
            const SFInt32             *getSFChoice          (void) const;


#ifdef OSG_1_COMPAT
                  Int32               &getChoice          (void);
#endif
                  Int32               &editChoice         (void);
            const Int32               &getChoice          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setChoice         (const Int32 &value);

    /*! \}                                                                 */
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

    static  SwitchPtr create     (void);
    static  SwitchPtr createEmpty(void);

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

    SFInt32           _sfChoice;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SwitchBase(void);
    SwitchBase(const SwitchBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SwitchBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      SwitchBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SwitchBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

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
    void operator =(const SwitchBase &source);
};

typedef SwitchBase *SwitchBaseP;

/** Type specific RefPtr type for Switch. */
typedef RefPtr<SwitchPtr> SwitchRefPtr;

typedef osgIF<
    SwitchBase::isNodeCore,

    CoredNodePtr<Switch>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        SwitchNodePtr;

OSG_END_NAMESPACE

#define OSGSWITCHBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGSWITCHBASE_H_ */
