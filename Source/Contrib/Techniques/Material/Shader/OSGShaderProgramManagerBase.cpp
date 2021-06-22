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
 **     class ShaderProgramManager!
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



#include "OSGHashKeyToFieldContainerMap.h" // ProgramMap Class

#include "OSGShaderProgramManagerBase.h"
#include "OSGShaderProgramManager.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderProgramManager
    The ShaderProgramManager is responsible for providing the
    actual ShaderProgram instance for each ShaderDesc entry from
    the ShaderDescStore object provided from a ShaderCodeGenerator.
    It maps the SHA1 hash of the program text to the ShaderProgram
    in order to allow sharing of them.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var HashKeyToFieldContainerMap * ShaderProgramManagerBase::_sfProgramMap
    The map of  key hash values to the ShaderProgram objects.
    The hash values are calculated from the shader program text.
*/

/*! \var ShaderProgramFunctorCallback ShaderProgramManagerBase::_sfInitCallback
    A callback that is called after creation of a new ShaderProgram
    instance. This callback responsibility is to perform additional
    initializations of the ShaderProgram. Typically, some uniforms
    are added to the ShaderProgram here.
*/

/*! \var ShaderProgramFunctorCallback ShaderProgramManagerBase::_sfUpdateCallback
    An update callback that is called e.g. at the beginning of a render
    task. Typically, the uniforms are updated here.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderProgramManager *, nsOSG>::_type(
    "ShaderProgramManagerPtr", 
    "FieldContainerPtr", 
    ShaderProgramManager::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderProgramManager *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderProgramManager *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderProgramManager *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderProgramManagerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecHashKeyToFieldContainerMapPtr::Description(
        SFUnrecHashKeyToFieldContainerMapPtr::getClassType(),
        "programMap",
        "The map of  key hash values to the ShaderProgram objects.\n"
        "The hash values are calculated from the shader program text.\n",
        ProgramMapFieldId, ProgramMapFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramManager::editHandleProgramMap),
        static_cast<FieldGetMethodSig >(&ShaderProgramManager::getHandleProgramMap));

    oType.addInitialDesc(pDesc);

    pDesc = new SFShaderProgramFunctorCallback::Description(
        SFShaderProgramFunctorCallback::getClassType(),
        "initCallback",
        "A callback that is called after creation of a new ShaderProgram\n"
        "instance. This callback responsibility is to perform additional\n"
        "initializations of the ShaderProgram. Typically, some uniforms\n"
        "are added to the ShaderProgram here.\n",
        InitCallbackFieldId, InitCallbackFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderProgramManager::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderProgramManager::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFShaderProgramFunctorCallback::Description(
        SFShaderProgramFunctorCallback::getClassType(),
        "updateCallback",
        "An update callback that is called e.g. at the beginning of a render\n"
        "task. Typically, the uniforms are updated here.\n",
        UpdateCallbackFieldId, UpdateCallbackFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderProgramManager::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderProgramManager::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ShaderProgramManagerBase::TypeObject ShaderProgramManagerBase::_type(
    ShaderProgramManagerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderProgramManagerBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ShaderProgramManager::initMethod),
    reinterpret_cast<ExitContainerF>(&ShaderProgramManager::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&ShaderProgramManager::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ShaderProgramManager\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribTechniques\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    >\n"
    "    The ShaderProgramManager is responsible for providing the\n"
    "    actual ShaderProgram instance for each ShaderDesc entry from\n"
    "    the ShaderDescStore object provided from a ShaderCodeGenerator.\n"
    "    It maps the SHA1 hash of the program text to the ShaderProgram\n"
    "    in order to allow sharing of them.\n"
    "    <Field\n"
    "        name=\"programMap\"\n"
    "        type=\"HashKeyToFieldContainerMap\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        category=\"pointer\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "        The map of  key hash values to the ShaderProgram objects.\n"
    "        The hash values are calculated from the shader program text.\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"initCallback\"\n"
    "        type=\"ShaderProgramFunctorCallback\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"none\"\n"
    "        >\n"
    "        A callback that is called after creation of a new ShaderProgram\n"
    "        instance. This callback responsibility is to perform additional\n"
    "        initializations of the ShaderProgram. Typically, some uniforms\n"
    "        are added to the ShaderProgram here.\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name=\"updateCallback\"\n"
    "        type=\"ShaderProgramFunctorCallback\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"none\"\n"
    "        >\n"
    "        An update callback that is called e.g. at the beginning of a render\n"
    "        task. Typically, the uniforms are updated here.\n"
    "    </Field>\n"
    "\n"
    "</FieldContainer>\n",
    "The ShaderProgramManager is responsible for providing the\n"
    "actual ShaderProgram instance for each ShaderDesc entry from\n"
    "the ShaderDescStore object provided from a ShaderCodeGenerator.\n"
    "It maps the SHA1 hash of the program text to the ShaderProgram\n"
    "in order to allow sharing of them.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderProgramManagerBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderProgramManagerBase::getType(void) const
{
    return _type;
}

UInt32 ShaderProgramManagerBase::getContainerSize(void) const
{
    return sizeof(ShaderProgramManager);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShaderProgramManager::_sfProgramMap field.
const SFUnrecHashKeyToFieldContainerMapPtr *ShaderProgramManagerBase::getSFProgramMap(void) const
{
    return &_sfProgramMap;
}

SFUnrecHashKeyToFieldContainerMapPtr *ShaderProgramManagerBase::editSFProgramMap     (void)
{
    editSField(ProgramMapFieldMask);

    return &_sfProgramMap;
}

//! Get the value of the ShaderProgramManager::_sfProgramMap field.
HashKeyToFieldContainerMap * ShaderProgramManagerBase::getProgramMap(void) const
{
    return _sfProgramMap.getValue();
}

//! Set the value of the ShaderProgramManager::_sfProgramMap field.
void ShaderProgramManagerBase::setProgramMap(HashKeyToFieldContainerMap * const value)
{
    editSField(ProgramMapFieldMask);

    _sfProgramMap.setValue(value);
}








/*------------------------------ access -----------------------------------*/

SizeT ShaderProgramManagerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProgramMapFieldMask & whichField))
    {
        returnValue += _sfProgramMap.getBinSize();
    }
    if(FieldBits::NoField != (InitCallbackFieldMask & whichField))
    {
        returnValue += _sfInitCallback.getBinSize();
    }
    if(FieldBits::NoField != (UpdateCallbackFieldMask & whichField))
    {
        returnValue += _sfUpdateCallback.getBinSize();
    }

    return returnValue;
}

void ShaderProgramManagerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramMapFieldMask & whichField))
    {
        _sfProgramMap.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InitCallbackFieldMask & whichField))
    {
        _sfInitCallback.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UpdateCallbackFieldMask & whichField))
    {
        _sfUpdateCallback.copyToBin(pMem);
    }
}

void ShaderProgramManagerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramMapFieldMask & whichField))
    {
        editSField(ProgramMapFieldMask);
        _sfProgramMap.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InitCallbackFieldMask & whichField))
    {
        editSField(InitCallbackFieldMask);
        _sfInitCallback.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UpdateCallbackFieldMask & whichField))
    {
        editSField(UpdateCallbackFieldMask);
        _sfUpdateCallback.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderProgramManagerTransitPtr ShaderProgramManagerBase::createLocal(BitVector bFlags)
{
    ShaderProgramManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderProgramManagerTransitPtr ShaderProgramManagerBase::createDependent(BitVector bFlags)
{
    ShaderProgramManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderProgramManagerTransitPtr ShaderProgramManagerBase::create(void)
{
    ShaderProgramManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderProgramManager>(tmpPtr);
    }

    return fc;
}

ShaderProgramManager *ShaderProgramManagerBase::createEmptyLocal(BitVector bFlags)
{
    ShaderProgramManager *returnValue;

    newPtr<ShaderProgramManager>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderProgramManager *ShaderProgramManagerBase::createEmpty(void)
{
    ShaderProgramManager *returnValue;

    newPtr<ShaderProgramManager>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderProgramManagerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderProgramManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramManager *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramManagerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderProgramManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramManager *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramManagerBase::shallowCopy(void) const
{
    ShaderProgramManager *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderProgramManager *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderProgramManagerBase::ShaderProgramManagerBase(void) :
    Inherited(),
    _sfProgramMap             (NULL),
    _sfInitCallback           (),
    _sfUpdateCallback         ()
{
}

ShaderProgramManagerBase::ShaderProgramManagerBase(const ShaderProgramManagerBase &source) :
    Inherited(source),
    _sfProgramMap             (NULL),
    _sfInitCallback           (source._sfInitCallback           ),
    _sfUpdateCallback         (source._sfUpdateCallback         )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderProgramManagerBase::~ShaderProgramManagerBase(void)
{
}

void ShaderProgramManagerBase::onCreate(const ShaderProgramManager *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderProgramManager *pThis = static_cast<ShaderProgramManager *>(this);

        pThis->setProgramMap(source->getProgramMap());
    }
}

GetFieldHandlePtr ShaderProgramManagerBase::getHandleProgramMap      (void) const
{
    SFUnrecHashKeyToFieldContainerMapPtr::GetHandlePtr returnValue(
        new  SFUnrecHashKeyToFieldContainerMapPtr::GetHandle(
             &_sfProgramMap,
             this->getType().getFieldDesc(ProgramMapFieldId),
             const_cast<ShaderProgramManagerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramManagerBase::editHandleProgramMap     (void)
{
    SFUnrecHashKeyToFieldContainerMapPtr::EditHandlePtr returnValue(
        new  SFUnrecHashKeyToFieldContainerMapPtr::EditHandle(
             &_sfProgramMap,
             this->getType().getFieldDesc(ProgramMapFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ShaderProgramManager::setProgramMap,
                    static_cast<ShaderProgramManager *>(this), _1));

    editSField(ProgramMapFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramManagerBase::getHandleInitCallback    (void) const
{
    SFShaderProgramFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderProgramManagerBase::editHandleInitCallback   (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderProgramManagerBase::getHandleUpdateCallback  (void) const
{
    SFShaderProgramFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderProgramManagerBase::editHandleUpdateCallback (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderProgramManagerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderProgramManager *pThis = static_cast<ShaderProgramManager *>(this);

    pThis->execSync(static_cast<ShaderProgramManager *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderProgramManagerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderProgramManager *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderProgramManager *>(pRefAspect),
                  dynamic_cast<const ShaderProgramManager *>(this));

    return returnValue;
}
#endif

void ShaderProgramManagerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderProgramManager *>(this)->setProgramMap(NULL);


}


OSG_END_NAMESPACE