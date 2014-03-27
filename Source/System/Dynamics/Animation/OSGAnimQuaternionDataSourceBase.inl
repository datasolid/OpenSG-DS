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
 **     class AnimQuaternionDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &AnimQuaternionDataSourceBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AnimQuaternionDataSourceBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AnimQuaternionDataSourceBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the AnimQuaternionDataSource::_mfValues field.
inline
const Quaternion &AnimQuaternionDataSourceBase::getValues(const UInt32 index) const
{
    return _mfValues[index];
}

inline
MFQuaternion       ::reference AnimQuaternionDataSourceBase::editValues(const UInt32 index)
{
    editMField(ValuesFieldMask, _mfValues);

    return _mfValues[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfInTangentsX field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getInTangentsX(const UInt32 index) const
{
    return _mfInTangentsX[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editInTangentsX(const UInt32 index)
{
    editMField(InTangentsXFieldMask, _mfInTangentsX);

    return _mfInTangentsX[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfInTangentsY field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getInTangentsY(const UInt32 index) const
{
    return _mfInTangentsY[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editInTangentsY(const UInt32 index)
{
    editMField(InTangentsYFieldMask, _mfInTangentsY);

    return _mfInTangentsY[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfInTangentsZ field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getInTangentsZ(const UInt32 index) const
{
    return _mfInTangentsZ[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editInTangentsZ(const UInt32 index)
{
    editMField(InTangentsZFieldMask, _mfInTangentsZ);

    return _mfInTangentsZ[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfInTangentsW field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getInTangentsW(const UInt32 index) const
{
    return _mfInTangentsW[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editInTangentsW(const UInt32 index)
{
    editMField(InTangentsWFieldMask, _mfInTangentsW);

    return _mfInTangentsW[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfOutTangentsX field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getOutTangentsX(const UInt32 index) const
{
    return _mfOutTangentsX[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editOutTangentsX(const UInt32 index)
{
    editMField(OutTangentsXFieldMask, _mfOutTangentsX);

    return _mfOutTangentsX[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfOutTangentsY field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getOutTangentsY(const UInt32 index) const
{
    return _mfOutTangentsY[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editOutTangentsY(const UInt32 index)
{
    editMField(OutTangentsYFieldMask, _mfOutTangentsY);

    return _mfOutTangentsY[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfOutTangentsZ field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getOutTangentsZ(const UInt32 index) const
{
    return _mfOutTangentsZ[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editOutTangentsZ(const UInt32 index)
{
    editMField(OutTangentsZFieldMask, _mfOutTangentsZ);

    return _mfOutTangentsZ[index];
}

//! Get the value of the \a index element the AnimQuaternionDataSource::_mfOutTangentsW field.
inline
const Vec2f &AnimQuaternionDataSourceBase::getOutTangentsW(const UInt32 index) const
{
    return _mfOutTangentsW[index];
}

inline
MFVec2f            ::reference AnimQuaternionDataSourceBase::editOutTangentsW(const UInt32 index)
{
    editMField(OutTangentsWFieldMask, _mfOutTangentsW);

    return _mfOutTangentsW[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AnimQuaternionDataSourceBase::execSync (      AnimQuaternionDataSourceBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValuesFieldMask & whichField))
        _mfValues.syncWith(pFrom->_mfValues,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (InTangentsXFieldMask & whichField))
        _mfInTangentsX.syncWith(pFrom->_mfInTangentsX,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (InTangentsYFieldMask & whichField))
        _mfInTangentsY.syncWith(pFrom->_mfInTangentsY,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (InTangentsZFieldMask & whichField))
        _mfInTangentsZ.syncWith(pFrom->_mfInTangentsZ,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (InTangentsWFieldMask & whichField))
        _mfInTangentsW.syncWith(pFrom->_mfInTangentsW,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutTangentsXFieldMask & whichField))
        _mfOutTangentsX.syncWith(pFrom->_mfOutTangentsX,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutTangentsYFieldMask & whichField))
        _mfOutTangentsY.syncWith(pFrom->_mfOutTangentsY,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutTangentsZFieldMask & whichField))
        _mfOutTangentsZ.syncWith(pFrom->_mfOutTangentsZ,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutTangentsWFieldMask & whichField))
        _mfOutTangentsW.syncWith(pFrom->_mfOutTangentsW,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *AnimQuaternionDataSourceBase::getClassname(void)
{
    return "AnimQuaternionDataSource";
}
OSG_GEN_CONTAINERPTR(AnimQuaternionDataSource);

OSG_END_NAMESPACE

