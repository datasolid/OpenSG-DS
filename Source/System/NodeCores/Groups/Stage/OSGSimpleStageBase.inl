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
 **     class SimpleStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleStageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleStageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleStageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleStage::_sfLeft field.

inline
Real32 &SimpleStageBase::editLeft(void)
{
    editSField(LeftFieldMask);

    return _sfLeft.getValue();
}

//! Get the value of the SimpleStage::_sfLeft field.
inline
const Real32 &SimpleStageBase::getLeft(void) const
{
    return _sfLeft.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &SimpleStageBase::getLeft           (void)
{
    return this->editLeft           ();
}
#endif

//! Set the value of the SimpleStage::_sfLeft field.
inline
void SimpleStageBase::setLeft(const Real32 &value)
{
    editSField(LeftFieldMask);

    _sfLeft.setValue(value);
}
//! Get the value of the SimpleStage::_sfRight field.

inline
Real32 &SimpleStageBase::editRight(void)
{
    editSField(RightFieldMask);

    return _sfRight.getValue();
}

//! Get the value of the SimpleStage::_sfRight field.
inline
const Real32 &SimpleStageBase::getRight(void) const
{
    return _sfRight.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &SimpleStageBase::getRight          (void)
{
    return this->editRight          ();
}
#endif

//! Set the value of the SimpleStage::_sfRight field.
inline
void SimpleStageBase::setRight(const Real32 &value)
{
    editSField(RightFieldMask);

    _sfRight.setValue(value);
}
//! Get the value of the SimpleStage::_sfBottom field.

inline
Real32 &SimpleStageBase::editBottom(void)
{
    editSField(BottomFieldMask);

    return _sfBottom.getValue();
}

//! Get the value of the SimpleStage::_sfBottom field.
inline
const Real32 &SimpleStageBase::getBottom(void) const
{
    return _sfBottom.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &SimpleStageBase::getBottom         (void)
{
    return this->editBottom         ();
}
#endif

//! Set the value of the SimpleStage::_sfBottom field.
inline
void SimpleStageBase::setBottom(const Real32 &value)
{
    editSField(BottomFieldMask);

    _sfBottom.setValue(value);
}
//! Get the value of the SimpleStage::_sfTop field.

inline
Real32 &SimpleStageBase::editTop(void)
{
    editSField(TopFieldMask);

    return _sfTop.getValue();
}

//! Get the value of the SimpleStage::_sfTop field.
inline
const Real32 &SimpleStageBase::getTop(void) const
{
    return _sfTop.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &SimpleStageBase::getTop            (void)
{
    return this->editTop            ();
}
#endif

//! Set the value of the SimpleStage::_sfTop field.
inline
void SimpleStageBase::setTop(const Real32 &value)
{
    editSField(TopFieldMask);

    _sfTop.setValue(value);
}

//! Get the value of the SimpleStage::_sfCamera field.
inline
CameraPtrConst SimpleStageBase::getCamera(void) const
{
    return _sfCamera.getValue();
}

//! Set the value of the SimpleStage::_sfCamera field.
inline
void SimpleStageBase::setCamera(CameraPtrConstArg value)
{
    editSField(CameraFieldMask);

    setRefd(_sfCamera.getValue(), value);

}

//! Get the value of the SimpleStage::_sfBackground field.
inline
BackgroundPtrConst SimpleStageBase::getBackground(void) const
{
    return _sfBackground.getValue();
}

//! Set the value of the SimpleStage::_sfBackground field.
inline
void SimpleStageBase::setBackground(BackgroundPtrConstArg value)
{
    editSField(BackgroundFieldMask);

    setRefd(_sfBackground.getValue(), value);

}

//! Get the value of the \a index element the SimpleStage::_mfForegrounds field.
inline
ForegroundPtrConst SimpleStageBase::getForegrounds(const UInt32 index) const
{
    return _mfForegrounds[index];
}

//! Get the SimpleStage::_mfForegrounds field.
inline
const MFForegroundPtr &SimpleStageBase::getForegrounds(void) const
{
    return _mfForegrounds;
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleStageBase::execSync (      SimpleStageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
        _sfLeft.syncWith(pFrom->_sfLeft);

    if(FieldBits::NoField != (RightFieldMask & whichField))
        _sfRight.syncWith(pFrom->_sfRight);

    if(FieldBits::NoField != (BottomFieldMask & whichField))
        _sfBottom.syncWith(pFrom->_sfBottom);

    if(FieldBits::NoField != (TopFieldMask & whichField))
        _sfTop.syncWith(pFrom->_sfTop);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pFrom->_sfCamera);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pFrom->_sfBackground);

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
        _mfForegrounds.syncWith(pFrom->_mfForegrounds,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
Char8 *SimpleStageBase::getClassname(void)
{
    return "SimpleStage";
}
OSG_GEN_CONTAINERPTR(SimpleStage);

OSG_END_NAMESPACE

