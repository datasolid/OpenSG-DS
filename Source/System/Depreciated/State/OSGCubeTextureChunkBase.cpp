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
 **     class CubeTextureChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECUBETEXTURECHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // PosZImage Class
#include <OSGImage.h> // PosXImage Class
#include <OSGImage.h> // NegXImage Class
#include <OSGImage.h> // PosYImage Class
#include <OSGImage.h> // NegYImage Class

#include "OSGCubeTextureChunkBase.h"
#include "OSGCubeTextureChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CubeTextureChunk
    \ingroup GrpSystemState

    See \ref PageSystemCubeTextureChunk for a description.

    The CubeTexture is defined by 6 separate texture images. As it is derived from 
    the standard texture chunk it already has an image, which is used for the 
    negative Z direction. The other 5 images are stored in variables that are named
    according to the direction they represent (OSG::CubeTextureChunk::_sfPosZImage,
    OSG::CubeTextureChunk::_sfNegYImage, OSG::CubeTextureChunk::_sfPosYImage, 
    OSG::CubeTextureChunk::_sfNegXImage, OSG::CubeTextureChunk::_sfPosXImage).

    \deprecated Use OSG::CubeTextureObjChunk instead.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        CubeTextureChunkBase::_sfPosZImage
    The image for the positive Z direction for the cube tetxure.
*/

/*! \var ImagePtr        CubeTextureChunkBase::_sfPosXImage
    The image for the positive X direction for the cube tetxure.
*/

/*! \var ImagePtr        CubeTextureChunkBase::_sfNegXImage
    The image for the negative X direction for the cube tetxure.
*/

/*! \var ImagePtr        CubeTextureChunkBase::_sfPosYImage
    The image for the positive Y direction for the cube tetxure.
*/

/*! \var ImagePtr        CubeTextureChunkBase::_sfNegYImage
    The image for the negative Y direction for the cube tetxure.
*/

/*! \var bool            CubeTextureChunkBase::_sfIsReflectionMap
    
*/


void CubeTextureChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "posZImage",
        "The image for the positive Z direction for the cube tetxure.\n",
        PosZImageFieldId, PosZImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureChunkBase::getSFPosZImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "posXImage",
        "The image for the positive X direction for the cube tetxure.\n",
        PosXImageFieldId, PosXImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureChunkBase::getSFPosXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "negXImage",
        "The image for the negative X direction for the cube tetxure.\n",
        NegXImageFieldId, NegXImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureChunkBase::getSFNegXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "posYImage",
        "The image for the positive Y direction for the cube tetxure.\n",
        PosYImageFieldId, PosYImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureChunkBase::getSFPosYImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "negYImage",
        "The image for the negative Y direction for the cube tetxure.\n",
        NegYImageFieldId, NegYImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureChunkBase::getSFNegYImage));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(CubeTextureChunkBase::*GetSFIsReflectionMapF)(void) const;

    GetSFIsReflectionMapF GetSFIsReflectionMap = &CubeTextureChunkBase::getSFIsReflectionMap;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "isReflectionMap",
        "",
        IsReflectionMapFieldId, IsReflectionMapFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&CubeTextureChunkBase::editSFIsReflectionMap),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFIsReflectionMap));
#else
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureChunkBase::getSFIsReflectionMap));
#endif

    oType.addInitialDesc(pDesc);
}


CubeTextureChunkBase::TypeObject CubeTextureChunkBase::_type(
    CubeTextureChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &CubeTextureChunkBase::createEmpty,
    CubeTextureChunk::initMethod,
    (InitalInsertDescFunc) &CubeTextureChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CubeTextureChunk\"\n"
    "\tparent=\"TextureChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (OSG::CubeTextureChunk::_sfPosZImage,\n"
    "OSG::CubeTextureChunk::_sfNegYImage, OSG::CubeTextureChunk::_sfPosYImage, \n"
    "OSG::CubeTextureChunk::_sfNegXImage, OSG::CubeTextureChunk::_sfPosXImage).\n"
    "\n"
    "\\deprecated Use OSG::CubeTextureObjChunk instead.\n"
    "\t<Field\n"
    "\t\tname=\"posZImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Z direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive X direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative X direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Y direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative Y direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"isReflectionMap\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (OSG::CubeTextureChunk::_sfPosZImage,\n"
    "OSG::CubeTextureChunk::_sfNegYImage, OSG::CubeTextureChunk::_sfPosYImage, \n"
    "OSG::CubeTextureChunk::_sfNegXImage, OSG::CubeTextureChunk::_sfPosXImage).\n"
    "\n"
    "\\deprecated Use OSG::CubeTextureObjChunk instead.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CubeTextureChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &CubeTextureChunkBase::getType(void) const
{
    return _type;
}

UInt32 CubeTextureChunkBase::getContainerSize(void) const
{
    return sizeof(CubeTextureChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CubeTextureChunk::_sfPosZImage field.
const SFImagePtr *CubeTextureChunkBase::getSFPosZImage(void) const
{
    return &_sfPosZImage;
}

//! Get the CubeTextureChunk::_sfPosXImage field.
const SFImagePtr *CubeTextureChunkBase::getSFPosXImage(void) const
{
    return &_sfPosXImage;
}

//! Get the CubeTextureChunk::_sfNegXImage field.
const SFImagePtr *CubeTextureChunkBase::getSFNegXImage(void) const
{
    return &_sfNegXImage;
}

//! Get the CubeTextureChunk::_sfPosYImage field.
const SFImagePtr *CubeTextureChunkBase::getSFPosYImage(void) const
{
    return &_sfPosYImage;
}

//! Get the CubeTextureChunk::_sfNegYImage field.
const SFImagePtr *CubeTextureChunkBase::getSFNegYImage(void) const
{
    return &_sfNegYImage;
}

SFBool *CubeTextureChunkBase::editSFIsReflectionMap(void)
{
    editSField(IsReflectionMapFieldMask);

    return &_sfIsReflectionMap;
}

const SFBool *CubeTextureChunkBase::getSFIsReflectionMap(void) const
{
    return &_sfIsReflectionMap;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *CubeTextureChunkBase::getSFIsReflectionMap(void)
{
    return this->editSFIsReflectionMap();
}
#endif


void CubeTextureChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == PosZImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setPosZImage(
            dynamic_cast<ImagePtr>(pNewElement));
    }
    if(uiFieldId == PosXImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setPosXImage(
            dynamic_cast<ImagePtr>(pNewElement));
    }
    if(uiFieldId == NegXImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setNegXImage(
            dynamic_cast<ImagePtr>(pNewElement));
    }
    if(uiFieldId == PosYImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setPosYImage(
            dynamic_cast<ImagePtr>(pNewElement));
    }
    if(uiFieldId == NegYImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setNegYImage(
            dynamic_cast<ImagePtr>(pNewElement));
    }
}

void CubeTextureChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void CubeTextureChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void CubeTextureChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void CubeTextureChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void CubeTextureChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void CubeTextureChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == PosZImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setPosZImage(NullFC);
    }
    if(uiFieldId == PosXImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setPosXImage(NullFC);
    }
    if(uiFieldId == NegXImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setNegXImage(NullFC);
    }
    if(uiFieldId == PosYImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setPosYImage(NullFC);
    }
    if(uiFieldId == NegYImageFieldId)
    {
        static_cast<CubeTextureChunk *>(this)->setNegYImage(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 CubeTextureChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        returnValue += _sfPosZImage.getBinSize();
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        returnValue += _sfPosXImage.getBinSize();
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        returnValue += _sfNegXImage.getBinSize();
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        returnValue += _sfPosYImage.getBinSize();
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        returnValue += _sfNegYImage.getBinSize();
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        returnValue += _sfIsReflectionMap.getBinSize();
    }

    return returnValue;
}

void CubeTextureChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        _sfIsReflectionMap.copyToBin(pMem);
    }
}

void CubeTextureChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        _sfIsReflectionMap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CubeTextureChunkPtr CubeTextureChunkBase::create(void)
{
    CubeTextureChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<CubeTextureChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
CubeTextureChunkPtr CubeTextureChunkBase::createEmpty(void)
{
    CubeTextureChunkPtr returnValue;

    newPtr<CubeTextureChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr CubeTextureChunkBase::shallowCopy(void) const
{
    CubeTextureChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const CubeTextureChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CubeTextureChunkBase::CubeTextureChunkBase(void) :
    Inherited(),
    _sfPosZImage              (),
    _sfPosXImage              (),
    _sfNegXImage              (),
    _sfPosYImage              (),
    _sfNegYImage              (),
    _sfIsReflectionMap        (bool(true))
{
}

CubeTextureChunkBase::CubeTextureChunkBase(const CubeTextureChunkBase &source) :
    Inherited(source),
    _sfPosZImage              (),
    _sfPosXImage              (),
    _sfNegXImage              (),
    _sfPosYImage              (),
    _sfNegYImage              (),
    _sfIsReflectionMap        (source._sfIsReflectionMap        )
{
}

/*-------------------------- destructors ----------------------------------*/

CubeTextureChunkBase::~CubeTextureChunkBase(void)
{
}

void CubeTextureChunkBase::onCreate(const CubeTextureChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setPosZImage(source->getPosZImage());

        this->setPosXImage(source->getPosXImage());

        this->setNegXImage(source->getNegXImage());

        this->setPosYImage(source->getPosYImage());

        this->setNegYImage(source->getNegYImage());
    }
}

#ifdef OSG_MT_CPTR_ASPECT
void CubeTextureChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CubeTextureChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr CubeTextureChunkBase::createAspectCopy(void) const
{
    CubeTextureChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CubeTextureChunk *>(this));

    return returnValue;
}
#endif

void CubeTextureChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CubeTextureChunk *>(this)->setPosZImage(NullFC);

    static_cast<CubeTextureChunk *>(this)->setPosXImage(NullFC);

    static_cast<CubeTextureChunk *>(this)->setNegXImage(NullFC);

    static_cast<CubeTextureChunk *>(this)->setPosYImage(NullFC);

    static_cast<CubeTextureChunk *>(this)->setNegYImage(NullFC);


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CubeTextureChunkPtr>::_type("CubeTextureChunkPtr", "TextureChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CubeTextureChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, CubeTextureChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, CubeTextureChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
