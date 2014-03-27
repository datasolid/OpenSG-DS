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
 **     class ShaderProgram
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERPROGRAMBASE_H_
#define _OSGSHADERPROGRAMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGBaseFields.h"              // ShaderType type
#include "OSGSysFields.h"               // GLId type
#include "OSGShaderProgramVariablesFields.h" // Variables type
#include "OSGShaderParameterFields.h"   // Parameter type
#include "OSGShaderAttributeFields.h"   // Attributes type
#include "OSGFieldContainerFields.h"    // Parents type
#include "OSGChangedFunctorCallbackFields.h" // DestroyedFunctors type

#include "OSGShaderProgramFields.h"

OSG_BEGIN_NAMESPACE


class ShaderProgram;

//! \brief ShaderProgram Base Class.

class OSG_SYSTEM_DLLMAPPING ShaderProgramBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShaderProgram);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ShaderTypeFieldId = Inherited::NextFieldId,
        ProgramFieldId = ShaderTypeFieldId + 1,
        DefinesFieldId = ProgramFieldId + 1,
        GLIdFieldId = DefinesFieldId + 1,
        VariablesFieldId = GLIdFieldId + 1,
        FeedbackVaryingsFieldId = VariablesFieldId + 1,
        ParameterFieldId = FeedbackVaryingsFieldId + 1,
        AttributesFieldId = ParameterFieldId + 1,
        CgFrontEndFieldId = AttributesFieldId + 1,
        PointSizeFieldId = CgFrontEndFieldId + 1,
        ParentsFieldId = PointSizeFieldId + 1,
        DestroyedFunctorsFieldId = ParentsFieldId + 1,
        NextFieldId = DestroyedFunctorsFieldId + 1
    };

    static const OSG::BitVector ShaderTypeFieldMask =
        (TypeTraits<BitVector>::One << ShaderTypeFieldId);
    static const OSG::BitVector ProgramFieldMask =
        (TypeTraits<BitVector>::One << ProgramFieldId);
    static const OSG::BitVector DefinesFieldMask =
        (TypeTraits<BitVector>::One << DefinesFieldId);
    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector VariablesFieldMask =
        (TypeTraits<BitVector>::One << VariablesFieldId);
    static const OSG::BitVector FeedbackVaryingsFieldMask =
        (TypeTraits<BitVector>::One << FeedbackVaryingsFieldId);
    static const OSG::BitVector ParameterFieldMask =
        (TypeTraits<BitVector>::One << ParameterFieldId);
    static const OSG::BitVector AttributesFieldMask =
        (TypeTraits<BitVector>::One << AttributesFieldId);
    static const OSG::BitVector CgFrontEndFieldMask =
        (TypeTraits<BitVector>::One << CgFrontEndFieldId);
    static const OSG::BitVector PointSizeFieldMask =
        (TypeTraits<BitVector>::One << PointSizeFieldId);
    static const OSG::BitVector ParentsFieldMask =
        (TypeTraits<BitVector>::One << ParentsFieldId);
    static const OSG::BitVector DestroyedFunctorsFieldMask =
        (TypeTraits<BitVector>::One << DestroyedFunctorsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFGLenum          SFShaderTypeType;
    typedef SFString          SFProgramType;
    typedef SFString          SFDefinesType;
    typedef SFUInt32          SFGLIdType;
    typedef SFUnrecChildShaderProgramVariablesPtr SFVariablesType;
    typedef MFString          MFFeedbackVaryingsType;
    typedef MFShaderParameter MFParameterType;
    typedef MFShaderAttribute MFAttributesType;
    typedef SFBool            SFCgFrontEndType;
    typedef SFBool            SFPointSizeType;
    typedef MFParentFieldContainerPtr MFParentsType;
    typedef MFChangedFunctorCallback MFDestroyedFunctorsType;

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


                  SFGLenum            *editSFShaderType     (void);
            const SFGLenum            *getSFShaderType      (void) const;

                  SFString            *editSFProgram        (void);
            const SFString            *getSFProgram         (void) const;

                  SFString            *editSFDefines        (void);
            const SFString            *getSFDefines         (void) const;

                  SFUInt32            *editSFGLId           (void);
            const SFUInt32            *getSFGLId            (void) const;
            const SFUnrecChildShaderProgramVariablesPtr *getSFVariables      (void) const;
                  SFUnrecChildShaderProgramVariablesPtr *editSFVariables      (void);

                  MFString            *editMFFeedbackVaryings(void);
            const MFString            *getMFFeedbackVaryings (void) const;

                  MFShaderParameter   *editMFParameter      (void);
            const MFShaderParameter   *getMFParameter       (void) const;

                  MFShaderAttribute   *editMFAttributes     (void);
            const MFShaderAttribute   *getMFAttributes      (void) const;

                  SFBool              *editSFCgFrontEnd     (void);
            const SFBool              *getSFCgFrontEnd      (void) const;

                  SFBool              *editSFPointSize      (void);
            const SFBool              *getSFPointSize       (void) const;


                  GLenum              &editShaderType     (void);
            const GLenum              &getShaderType      (void) const;

                  std::string         &editProgram        (void);
            const std::string         &getProgram         (void) const;

                  std::string         &editDefines        (void);
            const std::string         &getDefines         (void) const;

                  UInt32              &editGLId           (void);
                  UInt32               getGLId            (void) const;

                  ShaderProgramVariables * getVariables      (void) const;

            MFString           ::reference       editFeedbackVaryings(const UInt32 index);
            const std::string         &getFeedbackVaryings (const UInt32 index) const;

            MFShaderParameter  ::reference       editParameter      (const UInt32 index);
            const ShaderParameter     &getParameter       (const UInt32 index) const;

            MFShaderAttribute  ::reference       editAttributes     (const UInt32 index);
            const ShaderAttribute     &getAttributes      (const UInt32 index) const;

                  bool                &editCgFrontEnd     (void);
                  bool                 getCgFrontEnd      (void) const;

                  bool                &editPointSize      (void);
                  bool                 getPointSize       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShaderType     (const GLenum &value);
            void setProgram        (const std::string &value);
            void setDefines        (const std::string &value);
            void setGLId           (const UInt32 value);
            void setVariables      (ShaderProgramVariables * const value);
            void setCgFrontEnd     (const bool value);
            void setPointSize      (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  ShaderProgramTransitPtr  create          (void);
    static  ShaderProgram           *createEmpty     (void);

    static  ShaderProgramTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ShaderProgram            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ShaderProgramTransitPtr  createDependent  (BitVector bFlags);

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

    SFGLenum          _sfShaderType;
    SFString          _sfProgram;
    SFString          _sfDefines;
    SFUInt32          _sfGLId;
    SFUnrecChildShaderProgramVariablesPtr _sfVariables;
    MFString          _mfFeedbackVaryings;
    MFShaderParameter _mfParameter;
    MFShaderAttribute _mfAttributes;
    SFBool            _sfCgFrontEnd;
    SFBool            _sfPointSize;
    MFParentFieldContainerPtr _mfParents;
    MFChangedFunctorCallback _mfDestroyedFunctors;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShaderProgramBase(void);
    ShaderProgramBase(const ShaderProgramBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderProgramBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShaderProgram *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

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

     GetFieldHandlePtr  getHandleShaderType      (void) const;
     EditFieldHandlePtr editHandleShaderType     (void);
     GetFieldHandlePtr  getHandleProgram         (void) const;
     EditFieldHandlePtr editHandleProgram        (void);
     GetFieldHandlePtr  getHandleDefines         (void) const;
     EditFieldHandlePtr editHandleDefines        (void);
     GetFieldHandlePtr  getHandleGLId            (void) const;
     EditFieldHandlePtr editHandleGLId           (void);
     GetFieldHandlePtr  getHandleVariables       (void) const;
     EditFieldHandlePtr editHandleVariables      (void);
     GetFieldHandlePtr  getHandleFeedbackVaryings (void) const;
     EditFieldHandlePtr editHandleFeedbackVaryings(void);
     GetFieldHandlePtr  getHandleParameter       (void) const;
     EditFieldHandlePtr editHandleParameter      (void);
     GetFieldHandlePtr  getHandleAttributes      (void) const;
     EditFieldHandlePtr editHandleAttributes     (void);
     GetFieldHandlePtr  getHandleCgFrontEnd      (void) const;
     EditFieldHandlePtr editHandleCgFrontEnd     (void);
     GetFieldHandlePtr  getHandlePointSize       (void) const;
     EditFieldHandlePtr editHandlePointSize      (void);
     GetFieldHandlePtr  getHandleParents         (void) const;
     EditFieldHandlePtr editHandleParents        (void);
     GetFieldHandlePtr  getHandleDestroyedFunctors (void) const;
     EditFieldHandlePtr editHandleDestroyedFunctors(void);

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

            void execSync (      ShaderProgramBase *pFrom,
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
    void operator =(const ShaderProgramBase &source);
};

typedef ShaderProgramBase *ShaderProgramBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADERPROGRAMBASE_H_ */
