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
 **     class VRMLPositionInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &VRMLPositionInterpolatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 VRMLPositionInterpolatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 VRMLPositionInterpolatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the VRMLPositionInterpolator::_sfOutValue field.

inline
Vec3f &VRMLPositionInterpolatorBase::editOutValue(void)
{
    editSField(OutValueFieldMask);

    return _sfOutValue.getValue();
}

//! Get the value of the VRMLPositionInterpolator::_sfOutValue field.
inline
const Vec3f &VRMLPositionInterpolatorBase::getOutValue(void) const
{
    return _sfOutValue.getValue();
}

//! Set the value of the VRMLPositionInterpolator::_sfOutValue field.
inline
void VRMLPositionInterpolatorBase::setOutValue(const Vec3f &value)
{
    editSField(OutValueFieldMask);

    _sfOutValue.setValue(value);
}

//! Get the value of the \a index element the VRMLPositionInterpolator::_mfKeyValue field.
inline
const Vec3f &VRMLPositionInterpolatorBase::getKeyValue(const UInt32 index) const
{
    return _mfKeyValue[index];
}

inline
MFVec3f            ::reference VRMLPositionInterpolatorBase::editKeyValue(const UInt32 index)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return _mfKeyValue[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void VRMLPositionInterpolatorBase::execSync (      VRMLPositionInterpolatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
        _mfKeyValue.syncWith(pFrom->_mfKeyValue,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutValueFieldMask & whichField))
        _sfOutValue.syncWith(pFrom->_sfOutValue);
}
#endif


inline
const Char8 *VRMLPositionInterpolatorBase::getClassname(void)
{
    return "VRMLPositionInterpolator";
}
OSG_GEN_CONTAINERPTR(VRMLPositionInterpolator);

OSG_END_NAMESPACE

