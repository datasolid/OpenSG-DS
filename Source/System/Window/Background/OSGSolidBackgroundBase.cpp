/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class SolidBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESOLIDBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSolidBackgroundBase.h"
#include "OSGSolidBackground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SolidBackground
    \ingroup GrpSystemWindowBackgrounds

    A single colored background, see \ref PageSystemWindowBackgroundSolid for a
    description.

    The color of the background is given by the _sfColor field.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color3r         SolidBackgroundBase::_sfColor
    The background color.
*/

/*! \var Real32          SolidBackgroundBase::_sfAlpha
    Alpha value (to allow transparent clears).
*/


void SolidBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFColor3r *(SolidBackgroundBase::*GetSFColorF)(void) const;

    GetSFColorF GetSFColor = &SolidBackgroundBase::getSFColor;
#endif

    pDesc = new SFColor3r::Description(
        SFColor3r::getClassType(),
        "color",
        "The background color.\n",
        ColorFieldId, ColorFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SolidBackgroundBase::editSFColor),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFColor));
#else
        reinterpret_cast<FieldGetMethodSig >(&SolidBackgroundBase::getSFColor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(SolidBackgroundBase::*GetSFAlphaF)(void) const;

    GetSFAlphaF GetSFAlpha = &SolidBackgroundBase::getSFAlpha;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "alpha",
        "Alpha value (to allow transparent clears).\n",
        AlphaFieldId, AlphaFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SolidBackgroundBase::editSFAlpha),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAlpha));
#else
        reinterpret_cast<FieldGetMethodSig >(&SolidBackgroundBase::getSFAlpha));
#endif

    oType.addInitialDesc(pDesc);
}


SolidBackgroundBase::TypeObject SolidBackgroundBase::_type(
    SolidBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SolidBackgroundBase::createEmpty,
    SolidBackground::initMethod,
    (InitalInsertDescFunc) &SolidBackgroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SolidBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A single colored background, see \\ref PageSystemWindowBackgroundSolid for a\n"
    "description.\n"
    "\n"
    "The color of the background is given by the _sfColor field.\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe background color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alpha\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tAlpha value (to allow transparent clears).\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A single colored background, see \\ref PageSystemWindowBackgroundSolid for a\n"
    "description.\n"
    "\n"
    "The color of the background is given by the _sfColor field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SolidBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &SolidBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 SolidBackgroundBase::getContainerSize(void) const
{
    return sizeof(SolidBackground);
}

/*------------------------- decorator get ------------------------------*/


SFColor3r *SolidBackgroundBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor3r *SolidBackgroundBase::getSFColor(void) const
{
    return &_sfColor;
}

#ifdef OSG_1_GET_COMPAT
SFColor3r           *SolidBackgroundBase::getSFColor          (void)
{
    return this->editSFColor          ();
}
#endif

SFReal32 *SolidBackgroundBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFReal32 *SolidBackgroundBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *SolidBackgroundBase::getSFAlpha          (void)
{
    return this->editSFAlpha          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 SolidBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }

    return returnValue;
}

void SolidBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
}

void SolidBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SolidBackgroundPtr SolidBackgroundBase::create(void)
{
    SolidBackgroundPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<SolidBackground::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
SolidBackgroundPtr SolidBackgroundBase::createEmpty(void)
{
    SolidBackgroundPtr returnValue;

    newPtr<SolidBackground>(returnValue);

    return returnValue;
}

FieldContainerPtr SolidBackgroundBase::shallowCopy(void) const
{
    SolidBackgroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SolidBackground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SolidBackgroundBase::SolidBackgroundBase(void) :
    Inherited(),
    _sfColor                  (),
    _sfAlpha                  (Real32(1.f))
{
}

SolidBackgroundBase::SolidBackgroundBase(const SolidBackgroundBase &source) :
    Inherited(source),
    _sfColor                  (source._sfColor                  ),
    _sfAlpha                  (source._sfAlpha                  )
{
}

/*-------------------------- destructors ----------------------------------*/

SolidBackgroundBase::~SolidBackgroundBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void SolidBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SolidBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SolidBackgroundBase::createAspectCopy(void) const
{
    SolidBackgroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SolidBackground *>(this));

    return returnValue;
}
#endif

void SolidBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SolidBackgroundPtr>::_type("SolidBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SolidBackgroundPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, SolidBackgroundPtr, SFFieldContainerPtr);

OSG_END_NAMESPACE
