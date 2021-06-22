/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class CapabilitiesDesc!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#ifdef WIN32 
#pragma warning(disable: 4355) // turn off 'this' : used in base member initializer list warning
#pragma warning(disable: 4290) // disable exception specification warning
#endif

#include "OSGConfig.h"




#include "OSGCapabilitiesDescBase.h"
#include "OSGCapabilitiesDesc.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CapabilitiesDesc
    This class stores platform, requested and runtime capabilties.
    The class does not determine these capabilities. Its is merely
    a storage for these values.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          CapabilitiesDescBase::_sfPlatformCapabilities
    The encoded platform capabilities of the current platform.
*/

/*! \var UInt32          CapabilitiesDescBase::_sfRequestedCapabilities
    The encoded requested capabilities of the current platform.
*/

/*! \var UInt32          CapabilitiesDescBase::_sfRuntimeCapabilities
    The encoded runtime capabilities of the current platform.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CapabilitiesDesc *, nsOSG>::_type(
    "CapabilitiesDescPtr", 
    "FieldContainerPtr", 
    CapabilitiesDesc::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CapabilitiesDesc *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CapabilitiesDesc *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CapabilitiesDesc *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CapabilitiesDescBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "platformCapabilities",
        "The encoded platform capabilities of the current platform.\n",
        PlatformCapabilitiesFieldId, PlatformCapabilitiesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CapabilitiesDesc::editHandlePlatformCapabilities),
        static_cast<FieldGetMethodSig >(&CapabilitiesDesc::getHandlePlatformCapabilities));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "requestedCapabilities",
        "The encoded requested capabilities of the current platform.\n",
        RequestedCapabilitiesFieldId, RequestedCapabilitiesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CapabilitiesDesc::editHandleRequestedCapabilities),
        static_cast<FieldGetMethodSig >(&CapabilitiesDesc::getHandleRequestedCapabilities));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "runtimeCapabilities",
        "The encoded runtime capabilities of the current platform.\n",
        RuntimeCapabilitiesFieldId, RuntimeCapabilitiesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CapabilitiesDesc::editHandleRuntimeCapabilities),
        static_cast<FieldGetMethodSig >(&CapabilitiesDesc::getHandleRuntimeCapabilities));

    oType.addInitialDesc(pDesc);
}


CapabilitiesDescBase::TypeObject CapabilitiesDescBase::_type(
    CapabilitiesDescBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CapabilitiesDescBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&CapabilitiesDesc::initMethod),
    reinterpret_cast<ExitContainerF>(&CapabilitiesDesc::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&CapabilitiesDesc::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CapabilitiesDesc\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribTechniques\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    >\n"
    "    This class stores platform, requested and runtime capabilties.\n"
    "    The class does not determine these capabilities. Its is merely\n"
    "    a storage for these values.\n"
    "\n"
    "    <Field\n"
    "        name=\"platformCapabilities\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"-1\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "        The encoded platform capabilities of the current platform.\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"requestedCapabilities\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"-1\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "        The encoded requested capabilities of the current platform.\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"runtimeCapabilities\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"0\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "        The encoded runtime capabilities of the current platform.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "This class stores platform, requested and runtime capabilties.\n"
    "The class does not determine these capabilities. Its is merely\n"
    "a storage for these values.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CapabilitiesDescBase::getType(void)
{
    return _type;
}

const FieldContainerType &CapabilitiesDescBase::getType(void) const
{
    return _type;
}

UInt32 CapabilitiesDescBase::getContainerSize(void) const
{
    return sizeof(CapabilitiesDesc);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *CapabilitiesDescBase::editSFPlatformCapabilities(void)
{
    editSField(PlatformCapabilitiesFieldMask);

    return &_sfPlatformCapabilities;
}

const SFUInt32 *CapabilitiesDescBase::getSFPlatformCapabilities(void) const
{
    return &_sfPlatformCapabilities;
}


SFUInt32 *CapabilitiesDescBase::editSFRequestedCapabilities(void)
{
    editSField(RequestedCapabilitiesFieldMask);

    return &_sfRequestedCapabilities;
}

const SFUInt32 *CapabilitiesDescBase::getSFRequestedCapabilities(void) const
{
    return &_sfRequestedCapabilities;
}


SFUInt32 *CapabilitiesDescBase::editSFRuntimeCapabilities(void)
{
    editSField(RuntimeCapabilitiesFieldMask);

    return &_sfRuntimeCapabilities;
}

const SFUInt32 *CapabilitiesDescBase::getSFRuntimeCapabilities(void) const
{
    return &_sfRuntimeCapabilities;
}






/*------------------------------ access -----------------------------------*/

SizeT CapabilitiesDescBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PlatformCapabilitiesFieldMask & whichField))
    {
        returnValue += _sfPlatformCapabilities.getBinSize();
    }
    if(FieldBits::NoField != (RequestedCapabilitiesFieldMask & whichField))
    {
        returnValue += _sfRequestedCapabilities.getBinSize();
    }
    if(FieldBits::NoField != (RuntimeCapabilitiesFieldMask & whichField))
    {
        returnValue += _sfRuntimeCapabilities.getBinSize();
    }

    return returnValue;
}

void CapabilitiesDescBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PlatformCapabilitiesFieldMask & whichField))
    {
        _sfPlatformCapabilities.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RequestedCapabilitiesFieldMask & whichField))
    {
        _sfRequestedCapabilities.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RuntimeCapabilitiesFieldMask & whichField))
    {
        _sfRuntimeCapabilities.copyToBin(pMem);
    }
}

void CapabilitiesDescBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PlatformCapabilitiesFieldMask & whichField))
    {
        editSField(PlatformCapabilitiesFieldMask);
        _sfPlatformCapabilities.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RequestedCapabilitiesFieldMask & whichField))
    {
        editSField(RequestedCapabilitiesFieldMask);
        _sfRequestedCapabilities.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RuntimeCapabilitiesFieldMask & whichField))
    {
        editSField(RuntimeCapabilitiesFieldMask);
        _sfRuntimeCapabilities.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CapabilitiesDescTransitPtr CapabilitiesDescBase::createLocal(BitVector bFlags)
{
    CapabilitiesDescTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CapabilitiesDesc>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CapabilitiesDescTransitPtr CapabilitiesDescBase::createDependent(BitVector bFlags)
{
    CapabilitiesDescTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CapabilitiesDesc>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CapabilitiesDescTransitPtr CapabilitiesDescBase::create(void)
{
    CapabilitiesDescTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CapabilitiesDesc>(tmpPtr);
    }

    return fc;
}

CapabilitiesDesc *CapabilitiesDescBase::createEmptyLocal(BitVector bFlags)
{
    CapabilitiesDesc *returnValue;

    newPtr<CapabilitiesDesc>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CapabilitiesDesc *CapabilitiesDescBase::createEmpty(void)
{
    CapabilitiesDesc *returnValue;

    newPtr<CapabilitiesDesc>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CapabilitiesDescBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CapabilitiesDesc *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CapabilitiesDesc *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CapabilitiesDescBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CapabilitiesDesc *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CapabilitiesDesc *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CapabilitiesDescBase::shallowCopy(void) const
{
    CapabilitiesDesc *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CapabilitiesDesc *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CapabilitiesDescBase::CapabilitiesDescBase(void) :
    Inherited(),
    _sfPlatformCapabilities   (UInt32(-1)),
    _sfRequestedCapabilities  (UInt32(-1)),
    _sfRuntimeCapabilities    (UInt32(0))
{
}

CapabilitiesDescBase::CapabilitiesDescBase(const CapabilitiesDescBase &source) :
    Inherited(source),
    _sfPlatformCapabilities   (source._sfPlatformCapabilities   ),
    _sfRequestedCapabilities  (source._sfRequestedCapabilities  ),
    _sfRuntimeCapabilities    (source._sfRuntimeCapabilities    )
{
}


/*-------------------------- destructors ----------------------------------*/

CapabilitiesDescBase::~CapabilitiesDescBase(void)
{
}


GetFieldHandlePtr CapabilitiesDescBase::getHandlePlatformCapabilities (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfPlatformCapabilities,
             this->getType().getFieldDesc(PlatformCapabilitiesFieldId),
             const_cast<CapabilitiesDescBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CapabilitiesDescBase::editHandlePlatformCapabilities(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfPlatformCapabilities,
             this->getType().getFieldDesc(PlatformCapabilitiesFieldId),
             this));


    editSField(PlatformCapabilitiesFieldMask);

    return returnValue;
}

GetFieldHandlePtr CapabilitiesDescBase::getHandleRequestedCapabilities (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfRequestedCapabilities,
             this->getType().getFieldDesc(RequestedCapabilitiesFieldId),
             const_cast<CapabilitiesDescBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CapabilitiesDescBase::editHandleRequestedCapabilities(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfRequestedCapabilities,
             this->getType().getFieldDesc(RequestedCapabilitiesFieldId),
             this));


    editSField(RequestedCapabilitiesFieldMask);

    return returnValue;
}

GetFieldHandlePtr CapabilitiesDescBase::getHandleRuntimeCapabilities (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfRuntimeCapabilities,
             this->getType().getFieldDesc(RuntimeCapabilitiesFieldId),
             const_cast<CapabilitiesDescBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CapabilitiesDescBase::editHandleRuntimeCapabilities(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfRuntimeCapabilities,
             this->getType().getFieldDesc(RuntimeCapabilitiesFieldId),
             this));


    editSField(RuntimeCapabilitiesFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CapabilitiesDescBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CapabilitiesDesc *pThis = static_cast<CapabilitiesDesc *>(this);

    pThis->execSync(static_cast<CapabilitiesDesc *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CapabilitiesDescBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CapabilitiesDesc *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CapabilitiesDesc *>(pRefAspect),
                  dynamic_cast<const CapabilitiesDesc *>(this));

    return returnValue;
}
#endif

void CapabilitiesDescBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE