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
 **     class DistortionDisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &DistortionDisplayFilterBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DistortionDisplayFilterBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DistortionDisplayFilterBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DistortionDisplayFilter::_sfRows field.

inline
UInt32 &DistortionDisplayFilterBase::editRows(void)
{
    editSField(RowsFieldMask);

    return _sfRows.getValue();
}

//! Get the value of the DistortionDisplayFilter::_sfRows field.
inline
      UInt32  DistortionDisplayFilterBase::getRows(void) const
{
    return _sfRows.getValue();
}

//! Set the value of the DistortionDisplayFilter::_sfRows field.
inline
void DistortionDisplayFilterBase::setRows(const UInt32 value)
{
    editSField(RowsFieldMask);

    _sfRows.setValue(value);
}
//! Get the value of the DistortionDisplayFilter::_sfColumns field.

inline
UInt32 &DistortionDisplayFilterBase::editColumns(void)
{
    editSField(ColumnsFieldMask);

    return _sfColumns.getValue();
}

//! Get the value of the DistortionDisplayFilter::_sfColumns field.
inline
      UInt32  DistortionDisplayFilterBase::getColumns(void) const
{
    return _sfColumns.getValue();
}

//! Set the value of the DistortionDisplayFilter::_sfColumns field.
inline
void DistortionDisplayFilterBase::setColumns(const UInt32 value)
{
    editSField(ColumnsFieldMask);

    _sfColumns.setValue(value);
}

//! Get the value of the \a index element the DistortionDisplayFilter::_mfPositions field.
inline
const Vec2f &DistortionDisplayFilterBase::getPositions(const UInt32 index) const
{
    return _mfPositions[index];
}

inline
MFVec2f            ::reference DistortionDisplayFilterBase::editPositions(const UInt32 index)
{
    editMField(PositionsFieldMask, _mfPositions);

    return _mfPositions[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DistortionDisplayFilterBase::execSync (      DistortionDisplayFilterBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RowsFieldMask & whichField))
        _sfRows.syncWith(pFrom->_sfRows);

    if(FieldBits::NoField != (ColumnsFieldMask & whichField))
        _sfColumns.syncWith(pFrom->_sfColumns);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pFrom->_mfPositions,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *DistortionDisplayFilterBase::getClassname(void)
{
    return "DistortionDisplayFilter";
}
OSG_GEN_CONTAINERPTR(DistortionDisplayFilter);

OSG_END_NAMESPACE

