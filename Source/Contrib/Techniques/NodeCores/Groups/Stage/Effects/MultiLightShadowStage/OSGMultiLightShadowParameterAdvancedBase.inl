/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class MultiLightShadowParameterAdvanced!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &MultiLightShadowParameterAdvancedBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MultiLightShadowParameterAdvancedBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MultiLightShadowParameterAdvancedBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MultiLightShadowParameterAdvanced::_sfNumberOfSplits field.

inline
Int32 &MultiLightShadowParameterAdvancedBase::editNumberOfSplits(void)
{
    editSField(NumberOfSplitsFieldMask);

    return _sfNumberOfSplits.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfNumberOfSplits field.
inline
      Int32  MultiLightShadowParameterAdvancedBase::getNumberOfSplits(void) const
{
    return _sfNumberOfSplits.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfNumberOfSplits field.
inline
void MultiLightShadowParameterAdvancedBase::setNumberOfSplits(const Int32 value)
{
    editSField(NumberOfSplitsFieldMask);

    _sfNumberOfSplits.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseLiSP field.

inline
bool &MultiLightShadowParameterAdvancedBase::editUseLiSP(void)
{
    editSField(UseLiSPFieldMask);

    return _sfUseLiSP.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseLiSP field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getUseLiSP(void) const
{
    return _sfUseLiSP.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfUseLiSP field.
inline
void MultiLightShadowParameterAdvancedBase::setUseLiSP(const bool value)
{
    editSField(UseLiSPFieldMask);

    _sfUseLiSP.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseGeometryShader field.

inline
bool &MultiLightShadowParameterAdvancedBase::editUseGeometryShader(void)
{
    editSField(UseGeometryShaderFieldMask);

    return _sfUseGeometryShader.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseGeometryShader field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getUseGeometryShader(void) const
{
    return _sfUseGeometryShader.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfUseGeometryShader field.
inline
void MultiLightShadowParameterAdvancedBase::setUseGeometryShader(const bool value)
{
    editSField(UseGeometryShaderFieldMask);

    _sfUseGeometryShader.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfLiSPMode field.

inline
Int32 &MultiLightShadowParameterAdvancedBase::editLiSPMode(void)
{
    editSField(LiSPModeFieldMask);

    return _sfLiSPMode.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfLiSPMode field.
inline
      Int32  MultiLightShadowParameterAdvancedBase::getLiSPMode(void) const
{
    return _sfLiSPMode.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfLiSPMode field.
inline
void MultiLightShadowParameterAdvancedBase::setLiSPMode(const Int32 value)
{
    editSField(LiSPModeFieldMask);

    _sfLiSPMode.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfFocusing field.

inline
bool &MultiLightShadowParameterAdvancedBase::editFocusing(void)
{
    editSField(FocusingFieldMask);

    return _sfFocusing.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfFocusing field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getFocusing(void) const
{
    return _sfFocusing.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfFocusing field.
inline
void MultiLightShadowParameterAdvancedBase::setFocusing(const bool value)
{
    editSField(FocusingFieldMask);

    _sfFocusing.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfReduceSwimming field.

inline
bool &MultiLightShadowParameterAdvancedBase::editReduceSwimming(void)
{
    editSField(ReduceSwimmingFieldMask);

    return _sfReduceSwimming.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfReduceSwimming field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getReduceSwimming(void) const
{
    return _sfReduceSwimming.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfReduceSwimming field.
inline
void MultiLightShadowParameterAdvancedBase::setReduceSwimming(const bool value)
{
    editSField(ReduceSwimmingFieldMask);

    _sfReduceSwimming.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfLightSpaceAlignment field.

inline
bool &MultiLightShadowParameterAdvancedBase::editLightSpaceAlignment(void)
{
    editSField(LightSpaceAlignmentFieldMask);

    return _sfLightSpaceAlignment.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfLightSpaceAlignment field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getLightSpaceAlignment(void) const
{
    return _sfLightSpaceAlignment.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfLightSpaceAlignment field.
inline
void MultiLightShadowParameterAdvancedBase::setLightSpaceAlignment(const bool value)
{
    editSField(LightSpaceAlignmentFieldMask);

    _sfLightSpaceAlignment.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseMinDepth field.

inline
bool &MultiLightShadowParameterAdvancedBase::editUseMinDepth(void)
{
    editSField(UseMinDepthFieldMask);

    return _sfUseMinDepth.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseMinDepth field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getUseMinDepth(void) const
{
    return _sfUseMinDepth.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfUseMinDepth field.
inline
void MultiLightShadowParameterAdvancedBase::setUseMinDepth(const bool value)
{
    editSField(UseMinDepthFieldMask);

    _sfUseMinDepth.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseBestResSelection field.

inline
bool &MultiLightShadowParameterAdvancedBase::editUseBestResSelection(void)
{
    editSField(UseBestResSelectionFieldMask);

    return _sfUseBestResSelection.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfUseBestResSelection field.
inline
      bool  MultiLightShadowParameterAdvancedBase::getUseBestResSelection(void) const
{
    return _sfUseBestResSelection.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfUseBestResSelection field.
inline
void MultiLightShadowParameterAdvancedBase::setUseBestResSelection(const bool value)
{
    editSField(UseBestResSelectionFieldMask);

    _sfUseBestResSelection.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfWarpingParameter field.

inline
Real32 &MultiLightShadowParameterAdvancedBase::editWarpingParameter(void)
{
    editSField(WarpingParameterFieldMask);

    return _sfWarpingParameter.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfWarpingParameter field.
inline
      Real32  MultiLightShadowParameterAdvancedBase::getWarpingParameter(void) const
{
    return _sfWarpingParameter.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfWarpingParameter field.
inline
void MultiLightShadowParameterAdvancedBase::setWarpingParameter(const Real32 value)
{
    editSField(WarpingParameterFieldMask);

    _sfWarpingParameter.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfSplitParamterLambda field.

inline
Real32 &MultiLightShadowParameterAdvancedBase::editSplitParamterLambda(void)
{
    editSField(SplitParamterLambdaFieldMask);

    return _sfSplitParamterLambda.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfSplitParamterLambda field.
inline
      Real32  MultiLightShadowParameterAdvancedBase::getSplitParamterLambda(void) const
{
    return _sfSplitParamterLambda.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfSplitParamterLambda field.
inline
void MultiLightShadowParameterAdvancedBase::setSplitParamterLambda(const Real32 value)
{
    editSField(SplitParamterLambdaFieldMask);

    _sfSplitParamterLambda.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfZNear field.

inline
Real32 &MultiLightShadowParameterAdvancedBase::editZNear(void)
{
    editSField(ZNearFieldMask);

    return _sfZNear.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfZNear field.
inline
      Real32  MultiLightShadowParameterAdvancedBase::getZNear(void) const
{
    return _sfZNear.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfZNear field.
inline
void MultiLightShadowParameterAdvancedBase::setZNear(const Real32 value)
{
    editSField(ZNearFieldMask);

    _sfZNear.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfPseudoNear field.

inline
Real32 &MultiLightShadowParameterAdvancedBase::editPseudoNear(void)
{
    editSField(PseudoNearFieldMask);

    return _sfPseudoNear.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfPseudoNear field.
inline
      Real32  MultiLightShadowParameterAdvancedBase::getPseudoNear(void) const
{
    return _sfPseudoNear.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfPseudoNear field.
inline
void MultiLightShadowParameterAdvancedBase::setPseudoNear(const Real32 value)
{
    editSField(PseudoNearFieldMask);

    _sfPseudoNear.setValue(value);
}
//! Get the value of the MultiLightShadowParameterAdvanced::_sfPseudoFar field.

inline
Real32 &MultiLightShadowParameterAdvancedBase::editPseudoFar(void)
{
    editSField(PseudoFarFieldMask);

    return _sfPseudoFar.getValue();
}

//! Get the value of the MultiLightShadowParameterAdvanced::_sfPseudoFar field.
inline
      Real32  MultiLightShadowParameterAdvancedBase::getPseudoFar(void) const
{
    return _sfPseudoFar.getValue();
}

//! Set the value of the MultiLightShadowParameterAdvanced::_sfPseudoFar field.
inline
void MultiLightShadowParameterAdvancedBase::setPseudoFar(const Real32 value)
{
    editSField(PseudoFarFieldMask);

    _sfPseudoFar.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MultiLightShadowParameterAdvancedBase::execSync (      MultiLightShadowParameterAdvancedBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (NumberOfSplitsFieldMask & whichField))
        _sfNumberOfSplits.syncWith(pFrom->_sfNumberOfSplits);

    if(FieldBits::NoField != (UseLiSPFieldMask & whichField))
        _sfUseLiSP.syncWith(pFrom->_sfUseLiSP);

    if(FieldBits::NoField != (UseGeometryShaderFieldMask & whichField))
        _sfUseGeometryShader.syncWith(pFrom->_sfUseGeometryShader);

    if(FieldBits::NoField != (LiSPModeFieldMask & whichField))
        _sfLiSPMode.syncWith(pFrom->_sfLiSPMode);

    if(FieldBits::NoField != (FocusingFieldMask & whichField))
        _sfFocusing.syncWith(pFrom->_sfFocusing);

    if(FieldBits::NoField != (ReduceSwimmingFieldMask & whichField))
        _sfReduceSwimming.syncWith(pFrom->_sfReduceSwimming);

    if(FieldBits::NoField != (LightSpaceAlignmentFieldMask & whichField))
        _sfLightSpaceAlignment.syncWith(pFrom->_sfLightSpaceAlignment);

    if(FieldBits::NoField != (UseMinDepthFieldMask & whichField))
        _sfUseMinDepth.syncWith(pFrom->_sfUseMinDepth);

    if(FieldBits::NoField != (UseBestResSelectionFieldMask & whichField))
        _sfUseBestResSelection.syncWith(pFrom->_sfUseBestResSelection);

    if(FieldBits::NoField != (WarpingParameterFieldMask & whichField))
        _sfWarpingParameter.syncWith(pFrom->_sfWarpingParameter);

    if(FieldBits::NoField != (SplitParamterLambdaFieldMask & whichField))
        _sfSplitParamterLambda.syncWith(pFrom->_sfSplitParamterLambda);

    if(FieldBits::NoField != (ZNearFieldMask & whichField))
        _sfZNear.syncWith(pFrom->_sfZNear);

    if(FieldBits::NoField != (PseudoNearFieldMask & whichField))
        _sfPseudoNear.syncWith(pFrom->_sfPseudoNear);

    if(FieldBits::NoField != (PseudoFarFieldMask & whichField))
        _sfPseudoFar.syncWith(pFrom->_sfPseudoFar);
}
#endif


inline
const Char8 *MultiLightShadowParameterAdvancedBase::getClassname(void)
{
    return "MultiLightShadowParameterAdvanced";
}
OSG_GEN_CONTAINERPTR(MultiLightShadowParameterAdvanced);

OSG_END_NAMESPACE

