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
 **     class TextureBuffer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureBufferBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextureBufferBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextureBufferBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the TextureBuffer::_sfTexture field.
inline
TextureObjChunkPtrConst TextureBufferBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the TextureBuffer::_sfTexture field.
inline
void TextureBufferBase::setTexture(TextureObjChunkPtrConstArg value)
{
    editSField(TextureFieldMask);

    setRefd(_sfTexture.getValue(), value);

}
//! Get the value of the TextureBuffer::_sfTexTarget field.

inline
GLenum &TextureBufferBase::editTexTarget(void)
{
    editSField(TexTargetFieldMask);

    return _sfTexTarget.getValue();
}

//! Get the value of the TextureBuffer::_sfTexTarget field.
inline
const GLenum &TextureBufferBase::getTexTarget(void) const
{
    return _sfTexTarget.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
GLenum              &TextureBufferBase::getTexTarget      (void)
{
    return this->editTexTarget      ();
}
#endif

//! Set the value of the TextureBuffer::_sfTexTarget field.
inline
void TextureBufferBase::setTexTarget(const GLenum &value)
{
    editSField(TexTargetFieldMask);

    _sfTexTarget.setValue(value);
}
//! Get the value of the TextureBuffer::_sfLevel field.

inline
UInt32 &TextureBufferBase::editLevel(void)
{
    editSField(LevelFieldMask);

    return _sfLevel.getValue();
}

//! Get the value of the TextureBuffer::_sfLevel field.
inline
const UInt32 &TextureBufferBase::getLevel(void) const
{
    return _sfLevel.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &TextureBufferBase::getLevel          (void)
{
    return this->editLevel          ();
}
#endif

//! Set the value of the TextureBuffer::_sfLevel field.
inline
void TextureBufferBase::setLevel(const UInt32 &value)
{
    editSField(LevelFieldMask);

    _sfLevel.setValue(value);
}
//! Get the value of the TextureBuffer::_sfZoffset field.

inline
UInt32 &TextureBufferBase::editZoffset(void)
{
    editSField(ZoffsetFieldMask);

    return _sfZoffset.getValue();
}

//! Get the value of the TextureBuffer::_sfZoffset field.
inline
const UInt32 &TextureBufferBase::getZoffset(void) const
{
    return _sfZoffset.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &TextureBufferBase::getZoffset        (void)
{
    return this->editZoffset        ();
}
#endif

//! Set the value of the TextureBuffer::_sfZoffset field.
inline
void TextureBufferBase::setZoffset(const UInt32 &value)
{
    editSField(ZoffsetFieldMask);

    _sfZoffset.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureBufferBase::execSync (      TextureBufferBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pFrom->_sfTexture);

    if(FieldBits::NoField != (TexTargetFieldMask & whichField))
        _sfTexTarget.syncWith(pFrom->_sfTexTarget);

    if(FieldBits::NoField != (LevelFieldMask & whichField))
        _sfLevel.syncWith(pFrom->_sfLevel);

    if(FieldBits::NoField != (ZoffsetFieldMask & whichField))
        _sfZoffset.syncWith(pFrom->_sfZoffset);
}
#endif


inline
Char8 *TextureBufferBase::getClassname(void)
{
    return "TextureBuffer";
}
OSG_GEN_CONTAINERPTR(TextureBuffer);

OSG_END_NAMESPACE

