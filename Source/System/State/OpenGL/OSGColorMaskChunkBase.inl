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
 **     class ColorMaskChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ColorMaskChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ColorMaskChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ColorMaskChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ColorMaskChunk::_sfMaskR field.

inline
bool &ColorMaskChunkBase::editMaskR(void)
{
    editSField(MaskRFieldMask);

    return _sfMaskR.getValue();
}

//! Get the value of the ColorMaskChunk::_sfMaskR field.
inline
const bool &ColorMaskChunkBase::getMaskR(void) const
{
    return _sfMaskR.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorMaskChunkBase::getMaskR          (void)
{
    return this->editMaskR          ();
}
#endif

//! Set the value of the ColorMaskChunk::_sfMaskR field.
inline
void ColorMaskChunkBase::setMaskR(const bool &value)
{
    editSField(MaskRFieldMask);

    _sfMaskR.setValue(value);
}
//! Get the value of the ColorMaskChunk::_sfMaskG field.

inline
bool &ColorMaskChunkBase::editMaskG(void)
{
    editSField(MaskGFieldMask);

    return _sfMaskG.getValue();
}

//! Get the value of the ColorMaskChunk::_sfMaskG field.
inline
const bool &ColorMaskChunkBase::getMaskG(void) const
{
    return _sfMaskG.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorMaskChunkBase::getMaskG          (void)
{
    return this->editMaskG          ();
}
#endif

//! Set the value of the ColorMaskChunk::_sfMaskG field.
inline
void ColorMaskChunkBase::setMaskG(const bool &value)
{
    editSField(MaskGFieldMask);

    _sfMaskG.setValue(value);
}
//! Get the value of the ColorMaskChunk::_sfMaskB field.

inline
bool &ColorMaskChunkBase::editMaskB(void)
{
    editSField(MaskBFieldMask);

    return _sfMaskB.getValue();
}

//! Get the value of the ColorMaskChunk::_sfMaskB field.
inline
const bool &ColorMaskChunkBase::getMaskB(void) const
{
    return _sfMaskB.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorMaskChunkBase::getMaskB          (void)
{
    return this->editMaskB          ();
}
#endif

//! Set the value of the ColorMaskChunk::_sfMaskB field.
inline
void ColorMaskChunkBase::setMaskB(const bool &value)
{
    editSField(MaskBFieldMask);

    _sfMaskB.setValue(value);
}
//! Get the value of the ColorMaskChunk::_sfMaskA field.

inline
bool &ColorMaskChunkBase::editMaskA(void)
{
    editSField(MaskAFieldMask);

    return _sfMaskA.getValue();
}

//! Get the value of the ColorMaskChunk::_sfMaskA field.
inline
const bool &ColorMaskChunkBase::getMaskA(void) const
{
    return _sfMaskA.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorMaskChunkBase::getMaskA          (void)
{
    return this->editMaskA          ();
}
#endif

//! Set the value of the ColorMaskChunk::_sfMaskA field.
inline
void ColorMaskChunkBase::setMaskA(const bool &value)
{
    editSField(MaskAFieldMask);

    _sfMaskA.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ColorMaskChunkBase::execSync (      ColorMaskChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MaskRFieldMask & whichField))
        _sfMaskR.syncWith(pFrom->_sfMaskR);

    if(FieldBits::NoField != (MaskGFieldMask & whichField))
        _sfMaskG.syncWith(pFrom->_sfMaskG);

    if(FieldBits::NoField != (MaskBFieldMask & whichField))
        _sfMaskB.syncWith(pFrom->_sfMaskB);

    if(FieldBits::NoField != (MaskAFieldMask & whichField))
        _sfMaskA.syncWith(pFrom->_sfMaskA);
}
#endif


inline
Char8 *ColorMaskChunkBase::getClassname(void)
{
    return "ColorMaskChunk";
}
OSG_GEN_CONTAINERPTR(ColorMaskChunk);

OSG_END_NAMESPACE

