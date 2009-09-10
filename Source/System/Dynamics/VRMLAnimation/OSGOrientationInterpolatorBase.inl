/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class OrientationInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &OrientationInterpolatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 OrientationInterpolatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 OrientationInterpolatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the OrientationInterpolator::_sfFraction field.

inline
Real32 &OrientationInterpolatorBase::editFraction(void)
{
    editSField(FractionFieldMask);

    return _sfFraction.getValue();
}

//! Get the value of the OrientationInterpolator::_sfFraction field.
inline
      Real32  OrientationInterpolatorBase::getFraction(void) const
{
    return _sfFraction.getValue();
}

//! Set the value of the OrientationInterpolator::_sfFraction field.
inline
void OrientationInterpolatorBase::setFraction(const Real32 value)
{
    editSField(FractionFieldMask);

    _sfFraction.setValue(value);
}
//! Get the value of the OrientationInterpolator::_sfValue field.

inline
Quaternion &OrientationInterpolatorBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the OrientationInterpolator::_sfValue field.
inline
const Quaternion &OrientationInterpolatorBase::getValue(void) const
{
    return _sfValue.getValue();
}

//! Set the value of the OrientationInterpolator::_sfValue field.
inline
void OrientationInterpolatorBase::setValue(const Quaternion &value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}

//! Get the value of the \a index element the OrientationInterpolator::_mfKey field.
inline
      Real32  OrientationInterpolatorBase::getKey(const UInt32 index) const
{
    return _mfKey[index];
}

inline
Real32 &OrientationInterpolatorBase::editKey(const UInt32 index)
{
    editMField(KeyFieldMask, _mfKey);

    return _mfKey[index];
}


//! Get the value of the \a index element the OrientationInterpolator::_mfKeyValue field.
inline
const Quaternion &OrientationInterpolatorBase::getKeyValue(const UInt32 index) const
{
    return _mfKeyValue[index];
}

inline
Quaternion &OrientationInterpolatorBase::editKeyValue(const UInt32 index)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return _mfKeyValue[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void OrientationInterpolatorBase::execSync (      OrientationInterpolatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
        _sfFraction.syncWith(pFrom->_sfFraction);

    if(FieldBits::NoField != (KeyFieldMask & whichField))
        _mfKey.syncWith(pFrom->_mfKey,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
        _mfKeyValue.syncWith(pFrom->_mfKeyValue,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pFrom->_sfValue);
}
#endif


inline
const Char8 *OrientationInterpolatorBase::getClassname(void)
{
    return "OrientationInterpolator";
}
OSG_GEN_CONTAINERPTR(OrientationInterpolator);

OSG_END_NAMESPACE
