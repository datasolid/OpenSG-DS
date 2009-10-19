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
 **     class SkinnedGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGSkeleton.h"                // Skeleton Class

#include "OSGSkinnedGeometryBase.h"
#include "OSGSkinnedGeometry.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SkinnedGeometry
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Skeleton *      SkinnedGeometryBase::_sfSkeleton
    
*/

/*! \var UInt16          SkinnedGeometryBase::_sfInfluencePropertyIndex
    Index of the property that stores the per vertex indices into
    the joint matrices.
*/

/*! \var UInt16          SkinnedGeometryBase::_sfWeightPropertyIndex
    Index of the property that stores the per vertex weights for
    the influence matrices.
*/

/*! \var UInt32          SkinnedGeometryBase::_sfFlags
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SkinnedGeometry *>::_type("SkinnedGeometryPtr", "GeometryPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SkinnedGeometry *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SkinnedGeometry *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SkinnedGeometry *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkinnedGeometryBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecSkeletonPtr::Description(
        SFUnrecSkeletonPtr::getClassType(),
        "skeleton",
        "",
        SkeletonFieldId, SkeletonFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkinnedGeometry::editHandleSkeleton),
        static_cast<FieldGetMethodSig >(&SkinnedGeometry::getHandleSkeleton));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "influencePropertyIndex",
        "Index of the property that stores the per vertex indices into\n"
        "the joint matrices.\n",
        InfluencePropertyIndexFieldId, InfluencePropertyIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkinnedGeometry::editHandleInfluencePropertyIndex),
        static_cast<FieldGetMethodSig >(&SkinnedGeometry::getHandleInfluencePropertyIndex));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "weightPropertyIndex",
        "Index of the property that stores the per vertex weights for\n"
        "the influence matrices.\n",
        WeightPropertyIndexFieldId, WeightPropertyIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkinnedGeometry::editHandleWeightPropertyIndex),
        static_cast<FieldGetMethodSig >(&SkinnedGeometry::getHandleWeightPropertyIndex));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "flags",
        "",
        FlagsFieldId, FlagsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkinnedGeometry::editHandleFlags),
        static_cast<FieldGetMethodSig >(&SkinnedGeometry::getHandleFlags));

    oType.addInitialDesc(pDesc);
}


SkinnedGeometryBase::TypeObject SkinnedGeometryBase::_type(
    SkinnedGeometryBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SkinnedGeometryBase::createEmptyLocal),
    SkinnedGeometry::initMethod,
    SkinnedGeometry::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SkinnedGeometry::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SkinnedGeometry\"\n"
    "   parent=\"Geometry\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"none\"\n"
    "   parentFields=\"none\"\n"
    ">\n"
    "\n"
    "  <Field\n"
    "     name=\"skeleton\"\n"
    "     type=\"Skeleton\"\n"
    "     category=\"pointer\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"influencePropertyIndex\"\n"
    "     type=\"UInt16\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"Geometry::TexCoordsIndex\"\n"
    "     >\n"
    "    Index of the property that stores the per vertex indices into\n"
    "    the joint matrices.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"weightPropertyIndex\"\n"
    "     type=\"UInt16\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"Geometry::TexCoords1Index\"\n"
    "     >\n"
    "    Index of the property that stores the per vertex weights for\n"
    "    the influence matrices.\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"flags\"\n"
    "     type=\"UInt32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkinnedGeometryBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkinnedGeometryBase::getType(void) const
{
    return _type;
}

UInt32 SkinnedGeometryBase::getContainerSize(void) const
{
    return sizeof(SkinnedGeometry);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SkinnedGeometry::_sfSkeleton field.
const SFUnrecSkeletonPtr *SkinnedGeometryBase::getSFSkeleton(void) const
{
    return &_sfSkeleton;
}

SFUnrecSkeletonPtr  *SkinnedGeometryBase::editSFSkeleton       (void)
{
    editSField(SkeletonFieldMask);

    return &_sfSkeleton;
}

SFUInt16 *SkinnedGeometryBase::editSFInfluencePropertyIndex(void)
{
    editSField(InfluencePropertyIndexFieldMask);

    return &_sfInfluencePropertyIndex;
}

const SFUInt16 *SkinnedGeometryBase::getSFInfluencePropertyIndex(void) const
{
    return &_sfInfluencePropertyIndex;
}


SFUInt16 *SkinnedGeometryBase::editSFWeightPropertyIndex(void)
{
    editSField(WeightPropertyIndexFieldMask);

    return &_sfWeightPropertyIndex;
}

const SFUInt16 *SkinnedGeometryBase::getSFWeightPropertyIndex(void) const
{
    return &_sfWeightPropertyIndex;
}


SFUInt32 *SkinnedGeometryBase::editSFFlags(void)
{
    editSField(FlagsFieldMask);

    return &_sfFlags;
}

const SFUInt32 *SkinnedGeometryBase::getSFFlags(void) const
{
    return &_sfFlags;
}






/*------------------------------ access -----------------------------------*/

UInt32 SkinnedGeometryBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        returnValue += _sfSkeleton.getBinSize();
    }
    if(FieldBits::NoField != (InfluencePropertyIndexFieldMask & whichField))
    {
        returnValue += _sfInfluencePropertyIndex.getBinSize();
    }
    if(FieldBits::NoField != (WeightPropertyIndexFieldMask & whichField))
    {
        returnValue += _sfWeightPropertyIndex.getBinSize();
    }
    if(FieldBits::NoField != (FlagsFieldMask & whichField))
    {
        returnValue += _sfFlags.getBinSize();
    }

    return returnValue;
}

void SkinnedGeometryBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InfluencePropertyIndexFieldMask & whichField))
    {
        _sfInfluencePropertyIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WeightPropertyIndexFieldMask & whichField))
    {
        _sfWeightPropertyIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FlagsFieldMask & whichField))
    {
        _sfFlags.copyToBin(pMem);
    }
}

void SkinnedGeometryBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InfluencePropertyIndexFieldMask & whichField))
    {
        _sfInfluencePropertyIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WeightPropertyIndexFieldMask & whichField))
    {
        _sfWeightPropertyIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FlagsFieldMask & whichField))
    {
        _sfFlags.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SkinnedGeometryTransitPtr SkinnedGeometryBase::createLocal(BitVector bFlags)
{
    SkinnedGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SkinnedGeometry>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkinnedGeometryTransitPtr SkinnedGeometryBase::createDependent(BitVector bFlags)
{
    SkinnedGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SkinnedGeometry>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkinnedGeometryTransitPtr SkinnedGeometryBase::create(void)
{
    SkinnedGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SkinnedGeometry>(tmpPtr);
    }

    return fc;
}

SkinnedGeometry *SkinnedGeometryBase::createEmptyLocal(BitVector bFlags)
{
    SkinnedGeometry *returnValue;

    newPtr<SkinnedGeometry>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SkinnedGeometry *SkinnedGeometryBase::createEmpty(void)
{
    SkinnedGeometry *returnValue;

    newPtr<SkinnedGeometry>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkinnedGeometryBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SkinnedGeometry *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkinnedGeometry *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkinnedGeometryBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SkinnedGeometry *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkinnedGeometry *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkinnedGeometryBase::shallowCopy(void) const
{
    SkinnedGeometry *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SkinnedGeometry *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkinnedGeometryBase::SkinnedGeometryBase(void) :
    Inherited(),
    _sfSkeleton               (NULL),
    _sfInfluencePropertyIndex (UInt16(Geometry::TexCoordsIndex)),
    _sfWeightPropertyIndex    (UInt16(Geometry::TexCoords1Index)),
    _sfFlags                  (UInt32(0))
{
}

SkinnedGeometryBase::SkinnedGeometryBase(const SkinnedGeometryBase &source) :
    Inherited(source),
    _sfSkeleton               (NULL),
    _sfInfluencePropertyIndex (source._sfInfluencePropertyIndex ),
    _sfWeightPropertyIndex    (source._sfWeightPropertyIndex    ),
    _sfFlags                  (source._sfFlags                  )
{
}


/*-------------------------- destructors ----------------------------------*/

SkinnedGeometryBase::~SkinnedGeometryBase(void)
{
}

void SkinnedGeometryBase::onCreate(const SkinnedGeometry *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SkinnedGeometry *pThis = static_cast<SkinnedGeometry *>(this);

        pThis->setSkeleton(source->getSkeleton());
    }
}

GetFieldHandlePtr SkinnedGeometryBase::getHandleSkeleton        (void) const
{
    SFUnrecSkeletonPtr::GetHandlePtr returnValue(
        new  SFUnrecSkeletonPtr::GetHandle(
             &_sfSkeleton,
             this->getType().getFieldDesc(SkeletonFieldId),
             const_cast<SkinnedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkinnedGeometryBase::editHandleSkeleton       (void)
{
    SFUnrecSkeletonPtr::EditHandlePtr returnValue(
        new  SFUnrecSkeletonPtr::EditHandle(
             &_sfSkeleton,
             this->getType().getFieldDesc(SkeletonFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&SkinnedGeometry::setSkeleton,
                    static_cast<SkinnedGeometry *>(this), _1));

    editSField(SkeletonFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkinnedGeometryBase::getHandleInfluencePropertyIndex (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfInfluencePropertyIndex,
             this->getType().getFieldDesc(InfluencePropertyIndexFieldId),
             const_cast<SkinnedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkinnedGeometryBase::editHandleInfluencePropertyIndex(void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfInfluencePropertyIndex,
             this->getType().getFieldDesc(InfluencePropertyIndexFieldId),
             this));


    editSField(InfluencePropertyIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkinnedGeometryBase::getHandleWeightPropertyIndex (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfWeightPropertyIndex,
             this->getType().getFieldDesc(WeightPropertyIndexFieldId),
             const_cast<SkinnedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkinnedGeometryBase::editHandleWeightPropertyIndex(void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfWeightPropertyIndex,
             this->getType().getFieldDesc(WeightPropertyIndexFieldId),
             this));


    editSField(WeightPropertyIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkinnedGeometryBase::getHandleFlags           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFlags,
             this->getType().getFieldDesc(FlagsFieldId),
             const_cast<SkinnedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkinnedGeometryBase::editHandleFlags          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFlags,
             this->getType().getFieldDesc(FlagsFieldId),
             this));


    editSField(FlagsFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SkinnedGeometryBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SkinnedGeometry *pThis = static_cast<SkinnedGeometry *>(this);

    pThis->execSync(static_cast<SkinnedGeometry *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkinnedGeometryBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SkinnedGeometry *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SkinnedGeometry *>(pRefAspect),
                  dynamic_cast<const SkinnedGeometry *>(this));

    return returnValue;
}
#endif

void SkinnedGeometryBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SkinnedGeometry *>(this)->setSkeleton(NULL);


}


OSG_END_NAMESPACE