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
 **     class Inline!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEINLINEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGInlineBase.h"
#include "OSGInline.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Inline
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     InlineBase::_mfUrl
    
*/

/*! \var bool            InlineBase::_sfLoaded
    
*/


void InlineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const MFString *(InlineBase::*GetMFUrlF)(void) const;

    GetMFUrlF GetMFUrl = &InlineBase::getMFUrl;
#endif

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "url",
        "",
        UrlFieldId, UrlFieldMask,
        true,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&InlineBase::editMFUrl),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFUrl));
#else
        reinterpret_cast<FieldGetMethodSig >(&InlineBase::getMFUrl));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(InlineBase::*GetSFLoadedF)(void) const;

    GetSFLoadedF GetSFLoaded = &InlineBase::getSFLoaded;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "loaded",
        "",
        LoadedFieldId, LoadedFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&InlineBase::editSFLoaded),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLoaded));
#else
        reinterpret_cast<FieldGetMethodSig >(&InlineBase::getSFLoaded));
#endif

    oType.addInitialDesc(pDesc);
}


InlineBase::TypeObject InlineBase::_type(
    InlineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &InlineBase::createEmpty,
    Inline::initMethod,
    (InitalInsertDescFunc) &InlineBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Inline\"\n"
    "\tparent=\"NodeCore\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"url\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"loaded\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &InlineBase::getType(void)
{
    return _type;
}

const FieldContainerType &InlineBase::getType(void) const
{
    return _type;
}

UInt32 InlineBase::getContainerSize(void) const
{
    return sizeof(Inline);
}

/*------------------------- decorator get ------------------------------*/


MFString *InlineBase::editMFUrl(void)
{
    editMField(UrlFieldMask, _mfUrl);

    return &_mfUrl;
}

const MFString *InlineBase::getMFUrl(void) const
{
    return &_mfUrl;
}

#ifdef OSG_1_GET_COMPAT
MFString            *InlineBase::getMFUrl            (void)
{
    return this->editMFUrl            ();
}
#endif

SFBool *InlineBase::editSFLoaded(void)
{
    editSField(LoadedFieldMask);

    return &_sfLoaded;
}

const SFBool *InlineBase::getSFLoaded(void) const
{
    return &_sfLoaded;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *InlineBase::getSFLoaded         (void)
{
    return this->editSFLoaded         ();
}
#endif



/*********************************** Non-ptr code ********************************/
void InlineBase::pushToUrl(const std::string& value)
{
    editMField(UrlFieldMask, _mfUrl);
    _mfUrl.push_back(value);
}

void InlineBase::insertIntoUrl(UInt32                uiIndex,
                                                   const std::string& value   )
{
    editMField(UrlFieldMask, _mfUrl);

    MFString::iterator fieldIt = _mfUrl.begin();

    fieldIt += uiIndex;

    _mfUrl.insert(fieldIt, value);
}

void InlineBase::replaceInUrl(UInt32                uiIndex,
                                                       const std::string& value   )
{
    if(uiIndex >= _mfUrl.size())
        return;

    editMField(UrlFieldMask, _mfUrl);

    _mfUrl[uiIndex] = value;
}

void InlineBase::replaceInUrl(const std::string& pOldElem,
                                                        const std::string& pNewElem)
{
    Int32  elemIdx = _mfUrl.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(UrlFieldMask, _mfUrl);

        MFString::iterator fieldIt = _mfUrl.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void InlineBase::removeFromUrl(UInt32 uiIndex)
{
    if(uiIndex < _mfUrl.size())
    {
        editMField(UrlFieldMask, _mfUrl);

        MFString::iterator fieldIt = _mfUrl.begin();

        fieldIt += uiIndex;
        _mfUrl.erase(fieldIt);
    }
}

void InlineBase::removeFromUrl(const std::string& value)
{
    Int32 iElemIdx = _mfUrl.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(UrlFieldMask, _mfUrl);

        MFString::iterator fieldIt = _mfUrl.begin();

        fieldIt += iElemIdx;

        _mfUrl.erase(fieldIt);
    }
}

void InlineBase::clearUrl(void)
{
    editMField(UrlFieldMask, _mfUrl);

    _mfUrl.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 InlineBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        returnValue += _mfUrl.getBinSize();
    }
    if(FieldBits::NoField != (LoadedFieldMask & whichField))
    {
        returnValue += _sfLoaded.getBinSize();
    }

    return returnValue;
}

void InlineBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _mfUrl.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LoadedFieldMask & whichField))
    {
        _sfLoaded.copyToBin(pMem);
    }
}

void InlineBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _mfUrl.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LoadedFieldMask & whichField))
    {
        _sfLoaded.copyFromBin(pMem);
    }
}

//! create a new instance of the class
InlinePtr InlineBase::create(void)
{
    InlinePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<Inline::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
InlinePtr InlineBase::createEmpty(void)
{
    InlinePtr returnValue;

    newPtr<Inline>(returnValue);

    return returnValue;
}

FieldContainerPtr InlineBase::shallowCopy(void) const
{
    InlinePtr returnValue;

    newPtr(returnValue, dynamic_cast<const Inline *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

InlineBase::InlineBase(void) :
    Inherited(),
    _mfUrl                    (),
    _sfLoaded                 (bool(true))
{
}

InlineBase::InlineBase(const InlineBase &source) :
    Inherited(source),
    _mfUrl                    (source._mfUrl                    ),
    _sfLoaded                 (source._sfLoaded                 )
{
}

/*-------------------------- destructors ----------------------------------*/

InlineBase::~InlineBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void InlineBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<InlineBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr InlineBase::createAspectCopy(void) const
{
    InlinePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Inline *>(this));

    return returnValue;
}
#endif

void InlineBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfUrl.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<InlinePtr>::_type("InlinePtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(InlinePtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, InlinePtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, InlinePtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
