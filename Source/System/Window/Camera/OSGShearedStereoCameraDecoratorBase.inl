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
 **     class ShearedStereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShearedStereoCameraDecoratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShearedStereoCameraDecoratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShearedStereoCameraDecoratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.

inline
Real32 &ShearedStereoCameraDecoratorBase::editZeroParallaxDistance(void)
{
    editSField(ZeroParallaxDistanceFieldMask);

    return _sfZeroParallaxDistance.getValue();
}

//! Get the value of the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.
inline
const Real32 &ShearedStereoCameraDecoratorBase::getZeroParallaxDistance(void) const
{
    return _sfZeroParallaxDistance.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &ShearedStereoCameraDecoratorBase::getZeroParallaxDistance(void)
{
    return this->editZeroParallaxDistance();
}
#endif

//! Set the value of the ShearedStereoCameraDecorator::_sfZeroParallaxDistance field.
inline
void ShearedStereoCameraDecoratorBase::setZeroParallaxDistance(const Real32 &value)
{
    editSField(ZeroParallaxDistanceFieldMask);

    _sfZeroParallaxDistance.setValue(value);
}
//! Get the value of the ShearedStereoCameraDecorator::_sfOverlap field.

inline
Real32 &ShearedStereoCameraDecoratorBase::editOverlap(void)
{
    editSField(OverlapFieldMask);

    return _sfOverlap.getValue();
}

//! Get the value of the ShearedStereoCameraDecorator::_sfOverlap field.
inline
const Real32 &ShearedStereoCameraDecoratorBase::getOverlap(void) const
{
    return _sfOverlap.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &ShearedStereoCameraDecoratorBase::getOverlap        (void)
{
    return this->editOverlap        ();
}
#endif

//! Set the value of the ShearedStereoCameraDecorator::_sfOverlap field.
inline
void ShearedStereoCameraDecoratorBase::setOverlap(const Real32 &value)
{
    editSField(OverlapFieldMask);

    _sfOverlap.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShearedStereoCameraDecoratorBase::execSync (      ShearedStereoCameraDecoratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
        _sfZeroParallaxDistance.syncWith(pFrom->_sfZeroParallaxDistance);

    if(FieldBits::NoField != (OverlapFieldMask & whichField))
        _sfOverlap.syncWith(pFrom->_sfOverlap);
}
#endif


inline
Char8 *ShearedStereoCameraDecoratorBase::getClassname(void)
{
    return "ShearedStereoCameraDecorator";
}
OSG_GEN_CONTAINERPTR(ShearedStereoCameraDecorator);

OSG_END_NAMESPACE

