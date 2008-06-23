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
 **     class VRMLAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVRMLATTACHMENTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGVRMLAttachmentBase.h"
#include "OSGVRMLAttachment.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VRMLAttachment
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     VRMLAttachmentBase::_sfVrmlNodeTypename
    
*/


void VRMLAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "vrmlNodeTypename",
        "",
        VrmlNodeTypenameFieldId, VrmlNodeTypenameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VRMLAttachment::editHandleVrmlNodeTypename),
        static_cast<FieldGetMethodSig >(&VRMLAttachment::getHandleVrmlNodeTypename));

    oType.addInitialDesc(pDesc);
}


VRMLAttachmentBase::TypeObject VRMLAttachmentBase::_type(
    VRMLAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "VRMLAttachment",
    0,
    reinterpret_cast<PrototypeCreateF>(&VRMLAttachmentBase::createEmptyLocal),
    VRMLAttachment::initMethod,
    VRMLAttachment::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VRMLAttachmentBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"VRMLAttachment\"\n"
    "\tparent=\"Attachment\"\n"
    "\tlibrary=\"FileIO\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"vrmlNodeTypename\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VRMLAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &VRMLAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 VRMLAttachmentBase::getContainerSize(void) const
{
    return sizeof(VRMLAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFString *VRMLAttachmentBase::editSFVrmlNodeTypename(void)
{
    editSField(VrmlNodeTypenameFieldMask);

    return &_sfVrmlNodeTypename;
}

const SFString *VRMLAttachmentBase::getSFVrmlNodeTypename(void) const
{
    return &_sfVrmlNodeTypename;
}






/*------------------------------ access -----------------------------------*/

UInt32 VRMLAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VrmlNodeTypenameFieldMask & whichField))
    {
        returnValue += _sfVrmlNodeTypename.getBinSize();
    }

    return returnValue;
}

void VRMLAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VrmlNodeTypenameFieldMask & whichField))
    {
        _sfVrmlNodeTypename.copyToBin(pMem);
    }
}

void VRMLAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VrmlNodeTypenameFieldMask & whichField))
    {
        _sfVrmlNodeTypename.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VRMLAttachmentTransitPtr VRMLAttachmentBase::createLocal(BitVector bFlags)
{
    VRMLAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VRMLAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VRMLAttachmentTransitPtr VRMLAttachmentBase::create(void)
{
    VRMLAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VRMLAttachment>(tmpPtr);
    }

    return fc;
}

VRMLAttachment *VRMLAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    VRMLAttachment *returnValue;

    newPtr<VRMLAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VRMLAttachment *VRMLAttachmentBase::createEmpty(void)
{
    VRMLAttachment *returnValue;

    newPtr<VRMLAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VRMLAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VRMLAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VRMLAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VRMLAttachmentBase::shallowCopy(void) const
{
    VRMLAttachment *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VRMLAttachment *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VRMLAttachmentBase::VRMLAttachmentBase(void) :
    Inherited(),
    _sfVrmlNodeTypename       ()
{
}

VRMLAttachmentBase::VRMLAttachmentBase(const VRMLAttachmentBase &source) :
    Inherited(source),
    _sfVrmlNodeTypename       (source._sfVrmlNodeTypename       )
{
}


/*-------------------------- destructors ----------------------------------*/

VRMLAttachmentBase::~VRMLAttachmentBase(void)
{
}


GetFieldHandlePtr VRMLAttachmentBase::getHandleVrmlNodeTypename (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfVrmlNodeTypename,
             this->getType().getFieldDesc(VrmlNodeTypenameFieldId)));

    return returnValue;
}

EditFieldHandlePtr VRMLAttachmentBase::editHandleVrmlNodeTypename(void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfVrmlNodeTypename,
             this->getType().getFieldDesc(VrmlNodeTypenameFieldId)));


    editSField(VrmlNodeTypenameFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VRMLAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<VRMLAttachmentBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VRMLAttachmentBase::createAspectCopy(void) const
{
    VRMLAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VRMLAttachment *>(this));

    return returnValue;
}
#endif

void VRMLAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<VRMLAttachment *>::_type("VRMLAttachmentPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(VRMLAttachment *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VRMLAttachment *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VRMLAttachment *,
                           0);

OSG_END_NAMESPACE