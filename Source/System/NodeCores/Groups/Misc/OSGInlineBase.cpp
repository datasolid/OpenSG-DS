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



#include <OSGNode.h> // Root Class

#include "OSGInlineBase.h"
#include "OSGInline.h"

#include "boost/bind.hpp"

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

/*! \var Node *          InlineBase::_sfRoot
    
*/


void InlineBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFString::Description(
        MFString::getClassType(),
        "url",
        "",
        UrlFieldId, UrlFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&Inline::editHandleUrl),
        static_cast<FieldGetMethodSig >(&Inline::getHandleUrl));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "loaded",
        "",
        LoadedFieldId, LoadedFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&Inline::editHandleLoaded),
        static_cast<FieldGetMethodSig >(&Inline::getHandleLoaded));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "root",
        "",
        RootFieldId, RootFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&Inline::editHandleRoot),
        static_cast<FieldGetMethodSig >(&Inline::getHandleRoot));

    oType.addInitialDesc(pDesc);
}


InlineBase::TypeObject InlineBase::_type(
    InlineBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&InlineBase::createEmptyLocal),
    Inline::initMethod,
    Inline::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&InlineBase::classDescInserter),
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
    "\t\tvisibility=\"external\"\n"
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
    "\t<Field\n"
    "\t\tname=\"root\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"protected\"\n"
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


SFBool *InlineBase::editSFLoaded(void)
{
    editSField(LoadedFieldMask);

    return &_sfLoaded;
}

const SFBool *InlineBase::getSFLoaded(void) const
{
    return &_sfLoaded;
}


//! Get the Inline::_sfRoot field.
const SFUnrecNodePtr *InlineBase::getSFRoot(void) const
{
    return &_sfRoot;
}

SFUnrecNodePtr      *InlineBase::editSFRoot           (void)
{
    editSField(RootFieldMask);

    return &_sfRoot;
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
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
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
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
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
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
}

//! create a new instance of the class
InlineTransitPtr InlineBase::createLocal(BitVector bFlags)
{
    InlineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Inline>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
InlineTransitPtr InlineBase::create(void)
{
    InlineTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Inline>(tmpPtr);
    }

    return fc;
}

Inline *InlineBase::createEmptyLocal(BitVector bFlags)
{
    Inline *returnValue;

    newPtr<Inline>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Inline *InlineBase::createEmpty(void)
{
    Inline *returnValue;

    newPtr<Inline>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}


FieldContainerTransitPtr InlineBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Inline *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Inline *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr InlineBase::shallowCopy(void) const
{
    Inline *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const Inline *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

InlineBase::InlineBase(void) :
    Inherited(),
    _mfUrl                    (),
    _sfLoaded                 (bool(true)),
    _sfRoot                   (NULL)
{
}

InlineBase::InlineBase(const InlineBase &source) :
    Inherited(source),
    _mfUrl                    (source._mfUrl                    ),
    _sfLoaded                 (source._sfLoaded                 ),
    _sfRoot                   (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

InlineBase::~InlineBase(void)
{
}

void InlineBase::onCreate(const Inline *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Inline *pThis = static_cast<Inline *>(this);

        pThis->setRoot(source->getRoot());
    }
}

GetFieldHandlePtr InlineBase::getHandleUrl             (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfUrl, 
             this->getType().getFieldDesc(UrlFieldId)));

    return returnValue;
}

EditFieldHandlePtr InlineBase::editHandleUrl            (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfUrl, 
             this->getType().getFieldDesc(UrlFieldId)));

    editMField(UrlFieldMask, _mfUrl);

    return returnValue;
}

GetFieldHandlePtr InlineBase::getHandleLoaded          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLoaded, 
             this->getType().getFieldDesc(LoadedFieldId)));

    return returnValue;
}

EditFieldHandlePtr InlineBase::editHandleLoaded         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLoaded, 
             this->getType().getFieldDesc(LoadedFieldId)));

    editSField(LoadedFieldMask);

    return returnValue;
}

GetFieldHandlePtr InlineBase::getHandleRoot            (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfRoot, 
             this->getType().getFieldDesc(RootFieldId)));

    return returnValue;
}

EditFieldHandlePtr InlineBase::editHandleRoot           (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfRoot, 
             this->getType().getFieldDesc(RootFieldId)));

    returnValue->setSetMethod(boost::bind(&Inline::setRoot, 
                                          static_cast<Inline *>(this), _1));

    editSField(RootFieldMask);

    return returnValue;
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
FieldContainer *InlineBase::createAspectCopy(void) const
{
    Inline *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Inline *>(this));

    return returnValue;
}
#endif

void InlineBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Inline *>(this)->setRoot(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfUrl.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Inline *>::_type("InlinePtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Inline *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           Inline *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           Inline *, 
                           0);

OSG_END_NAMESPACE
