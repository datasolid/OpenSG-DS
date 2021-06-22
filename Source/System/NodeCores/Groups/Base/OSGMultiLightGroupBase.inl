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
 **     class MultiLightGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &MultiLightGroupBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MultiLightGroupBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MultiLightGroupBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MultiLightGroup::_sfActivate field.

inline
bool &MultiLightGroupBase::editActivate(void)
{
    editSField(ActivateFieldMask);

    return _sfActivate.getValue();
}

//! Get the value of the MultiLightGroup::_sfActivate field.
inline
      bool  MultiLightGroupBase::getActivate(void) const
{
    return _sfActivate.getValue();
}

//! Set the value of the MultiLightGroup::_sfActivate field.
inline
void MultiLightGroupBase::setActivate(const bool value)
{
    editSField(ActivateFieldMask);

    _sfActivate.setValue(value);
}
//! Get the value of the MultiLightGroup::_sfLightBindingPnt field.

inline
UInt32 &MultiLightGroupBase::editLightBindingPnt(void)
{
    editSField(LightBindingPntFieldMask);

    return _sfLightBindingPnt.getValue();
}

//! Get the value of the MultiLightGroup::_sfLightBindingPnt field.
inline
      UInt32  MultiLightGroupBase::getLightBindingPnt(void) const
{
    return _sfLightBindingPnt.getValue();
}

//! Set the value of the MultiLightGroup::_sfLightBindingPnt field.
inline
void MultiLightGroupBase::setLightBindingPnt(const UInt32 value)
{
    editSField(LightBindingPntFieldMask);

    _sfLightBindingPnt.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MultiLightGroupBase::execSync (      MultiLightGroupBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ActivateFieldMask & whichField))
        _sfActivate.syncWith(pFrom->_sfActivate);

    if(FieldBits::NoField != (MultiLightChunkFieldMask & whichField))
        _sfMultiLightChunk.syncWith(pFrom->_sfMultiLightChunk);

    if(FieldBits::NoField != (LightBindingPntFieldMask & whichField))
        _sfLightBindingPnt.syncWith(pFrom->_sfLightBindingPnt);
}
#endif


inline
const Char8 *MultiLightGroupBase::getClassname(void)
{
    return "MultiLightGroup";
}
OSG_GEN_CONTAINERPTR(MultiLightGroup);

OSG_END_NAMESPACE
