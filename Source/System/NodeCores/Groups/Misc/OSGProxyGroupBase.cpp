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
 **     class ProxyGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPROXYGROUPINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Root Class

#include "OSGProxyGroupBase.h"
#include "OSGProxyGroup.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ProxyGroup
    This group is used for delayed loading. If enabled the child nodes are
    loaded in a second thread. Until the load is finished the child nodes
    of this group are rendered. This could be used to show a proxy object.
    If concurrentLoad is false, then loading is done during the first
    frame. This is the behaviour of a simple inline.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            ProxyGroupBase::_sfEnabled
    
*/
/*! \var std::string     ProxyGroupBase::_sfUrl
    
*/
/*! \var NodePtr         ProxyGroupBase::_sfRoot
    
*/
/*! \var UInt32          ProxyGroupBase::_sfState
    
*/
/*! \var bool            ProxyGroupBase::_sfConcurrentLoad
    
*/
/*! \var DynamicVolume   ProxyGroupBase::_sfVolume
    
*/
/*! \var UInt32          ProxyGroupBase::_sfIndices
    
*/
/*! \var UInt32          ProxyGroupBase::_sfTriangles
    
*/
/*! \var UInt32          ProxyGroupBase::_sfPositions
    
*/
/*! \var UInt32          ProxyGroupBase::_sfGeometries
    
*/
/*! \var std::string     ProxyGroupBase::_sfAbsoluteUrl
    
*/
/*! \var UInt8           ProxyGroupBase::_mfInline
    
*/

void ProxyGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFBool *(ProxyGroupBase::*GetSFEnabledF)(void) const;

    GetSFEnabledF GetSFEnabled = &ProxyGroupBase::getSFEnabled;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enabled",
        "",
        EnabledFieldId, EnabledFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFEnabled),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFEnabled));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFEnabled));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ProxyGroupBase::*GetSFUrlF)(void) const;

    GetSFUrlF GetSFUrl = &ProxyGroupBase::getSFUrl;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "url",
        "",
        UrlFieldId, UrlFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFUrl),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFUrl));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFUrl));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "root",
        "",
        RootFieldId, RootFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ProxyGroupBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFRoot));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ProxyGroupBase::*GetSFStateF)(void) const;

    GetSFStateF GetSFState = &ProxyGroupBase::getSFState;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "state",
        "",
        StateFieldId, StateFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFState),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFState));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFState));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(ProxyGroupBase::*GetSFConcurrentLoadF)(void) const;

    GetSFConcurrentLoadF GetSFConcurrentLoad = &ProxyGroupBase::getSFConcurrentLoad;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "concurrentLoad",
        "",
        ConcurrentLoadFieldId, ConcurrentLoadFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFConcurrentLoad),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFConcurrentLoad));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFConcurrentLoad));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFDynamicVolume *(ProxyGroupBase::*GetSFVolumeF)(void) const;

    GetSFVolumeF GetSFVolume = &ProxyGroupBase::getSFVolume;
#endif

    pDesc = new SFDynamicVolume::Description(
        SFDynamicVolume::getClassType(),
        "volume",
        "",
        VolumeFieldId, VolumeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFVolume),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFVolume));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFVolume));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ProxyGroupBase::*GetSFIndicesF)(void) const;

    GetSFIndicesF GetSFIndices = &ProxyGroupBase::getSFIndices;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "indices",
        "",
        IndicesFieldId, IndicesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFIndices),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFIndices));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFIndices));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ProxyGroupBase::*GetSFTrianglesF)(void) const;

    GetSFTrianglesF GetSFTriangles = &ProxyGroupBase::getSFTriangles;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "triangles",
        "",
        TrianglesFieldId, TrianglesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFTriangles),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTriangles));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFTriangles));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ProxyGroupBase::*GetSFPositionsF)(void) const;

    GetSFPositionsF GetSFPositions = &ProxyGroupBase::getSFPositions;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "positions",
        "",
        PositionsFieldId, PositionsFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFPositions),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPositions));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFPositions));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ProxyGroupBase::*GetSFGeometriesF)(void) const;

    GetSFGeometriesF GetSFGeometries = &ProxyGroupBase::getSFGeometries;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "geometries",
        "",
        GeometriesFieldId, GeometriesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFGeometries),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGeometries));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFGeometries));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ProxyGroupBase::*GetSFAbsoluteUrlF)(void) const;

    GetSFAbsoluteUrlF GetSFAbsoluteUrl = &ProxyGroupBase::getSFAbsoluteUrl;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "absoluteUrl",
        "",
        AbsoluteUrlFieldId, AbsoluteUrlFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editSFAbsoluteUrl),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAbsoluteUrl));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getSFAbsoluteUrl));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFUInt8 *(ProxyGroupBase::*GetMFInlineF)(void) const;

    GetMFInlineF GetMFInline = &ProxyGroupBase::getMFInline;
#endif

    pDesc = new MFUInt8::Description(
        MFUInt8::getClassType(),
        "inline",
        "",
        InlineFieldId, InlineFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ProxyGroupBase::editMFInline),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFInline));
#else
        reinterpret_cast<FieldGetMethodSig >(&ProxyGroupBase::getMFInline));
#endif

    oType.addInitialDesc(pDesc);
}


ProxyGroupBase::TypeObject ProxyGroupBase::_type(true,
    ProxyGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ProxyGroupBase::createEmpty,
    ProxyGroup::initMethod,
    (InitalInsertDescFunc) &ProxyGroupBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ProxyGroup\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "This group is used for delayed loading. If enabled the child\n"
    "nodes are loaded in a second thread. Until the load is finished\n"
    "the child nodes of this group are rendered. This could be used\n"
    "to show a proxy object. If concurrentLoad is false, then loading\n"
    "is done during the first frame. This is the behaviour of a simple\n"
    "inline.\n"
    "\t<Field\n"
    "\t\tname=\"enabled\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"url\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"root\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"state\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"concurrentLoad\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"volume\"\n"
    "\t\ttype=\"DynamicVolume\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"indices\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"triangles\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"geometries\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"absoluteUrl\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"inline\"\n"
    "\t\ttype=\"UInt8\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "This group is used for delayed loading. If enabled the child\n"
    "nodes are loaded in a second thread. Until the load is finished\n"
    "the child nodes of this group are rendered. This could be used\n"
    "to show a proxy object. If concurrentLoad is false, then loading\n"
    "is done during the first frame. This is the behaviour of a simple\n"
    "inline.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ProxyGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &ProxyGroupBase::getType(void) const
{
    return _type;
}

UInt32 ProxyGroupBase::getContainerSize(void) const
{
    return sizeof(ProxyGroup);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ProxyGroupBase::editSFEnabled(void)
{
    editSField(EnabledFieldMask);

    return &_sfEnabled;
}

const SFBool *ProxyGroupBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}

#ifdef OSG_1_COMPAT
SFBool              *ProxyGroupBase::getSFEnabled        (void)
{
    return this->editSFEnabled        ();
}
#endif

SFString *ProxyGroupBase::editSFUrl(void)
{
    editSField(UrlFieldMask);

    return &_sfUrl;
}

const SFString *ProxyGroupBase::getSFUrl(void) const
{
    return &_sfUrl;
}

#ifdef OSG_1_COMPAT
SFString            *ProxyGroupBase::getSFUrl            (void)
{
    return this->editSFUrl            ();
}
#endif

//! Get the ProxyGroup::_sfRoot field.
const SFNodePtr *ProxyGroupBase::getSFRoot(void) const
{
    return &_sfRoot;
}

SFUInt32 *ProxyGroupBase::editSFState(void)
{
    editSField(StateFieldMask);

    return &_sfState;
}

const SFUInt32 *ProxyGroupBase::getSFState(void) const
{
    return &_sfState;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ProxyGroupBase::getSFState          (void)
{
    return this->editSFState          ();
}
#endif

SFBool *ProxyGroupBase::editSFConcurrentLoad(void)
{
    editSField(ConcurrentLoadFieldMask);

    return &_sfConcurrentLoad;
}

const SFBool *ProxyGroupBase::getSFConcurrentLoad(void) const
{
    return &_sfConcurrentLoad;
}

#ifdef OSG_1_COMPAT
SFBool              *ProxyGroupBase::getSFConcurrentLoad (void)
{
    return this->editSFConcurrentLoad ();
}
#endif

SFDynamicVolume *ProxyGroupBase::editSFVolume(void)
{
    editSField(VolumeFieldMask);

    return &_sfVolume;
}

const SFDynamicVolume *ProxyGroupBase::getSFVolume(void) const
{
    return &_sfVolume;
}

#ifdef OSG_1_COMPAT
SFDynamicVolume     *ProxyGroupBase::getSFVolume         (void)
{
    return this->editSFVolume         ();
}
#endif

SFUInt32 *ProxyGroupBase::editSFIndices(void)
{
    editSField(IndicesFieldMask);

    return &_sfIndices;
}

const SFUInt32 *ProxyGroupBase::getSFIndices(void) const
{
    return &_sfIndices;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ProxyGroupBase::getSFIndices        (void)
{
    return this->editSFIndices        ();
}
#endif

SFUInt32 *ProxyGroupBase::editSFTriangles(void)
{
    editSField(TrianglesFieldMask);

    return &_sfTriangles;
}

const SFUInt32 *ProxyGroupBase::getSFTriangles(void) const
{
    return &_sfTriangles;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ProxyGroupBase::getSFTriangles      (void)
{
    return this->editSFTriangles      ();
}
#endif

SFUInt32 *ProxyGroupBase::editSFPositions(void)
{
    editSField(PositionsFieldMask);

    return &_sfPositions;
}

const SFUInt32 *ProxyGroupBase::getSFPositions(void) const
{
    return &_sfPositions;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ProxyGroupBase::getSFPositions      (void)
{
    return this->editSFPositions      ();
}
#endif

SFUInt32 *ProxyGroupBase::editSFGeometries(void)
{
    editSField(GeometriesFieldMask);

    return &_sfGeometries;
}

const SFUInt32 *ProxyGroupBase::getSFGeometries(void) const
{
    return &_sfGeometries;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ProxyGroupBase::getSFGeometries     (void)
{
    return this->editSFGeometries     ();
}
#endif

SFString *ProxyGroupBase::editSFAbsoluteUrl(void)
{
    editSField(AbsoluteUrlFieldMask);

    return &_sfAbsoluteUrl;
}

const SFString *ProxyGroupBase::getSFAbsoluteUrl(void) const
{
    return &_sfAbsoluteUrl;
}

#ifdef OSG_1_COMPAT
SFString            *ProxyGroupBase::getSFAbsoluteUrl    (void)
{
    return this->editSFAbsoluteUrl    ();
}
#endif

MFUInt8 *ProxyGroupBase::editMFInline(void)
{
    editMField(InlineFieldMask, _mfInline);

    return &_mfInline;
}

const MFUInt8 *ProxyGroupBase::getMFInline(void) const
{
    return &_mfInline;
}

#ifdef OSG_1_COMPAT
MFUInt8             *ProxyGroupBase::getMFInline         (void)
{
    return this->editMFInline         ();
}
#endif


void ProxyGroupBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == RootFieldId)
    {
        static_cast<ProxyGroup *>(this)->setRoot(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void ProxyGroupBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void ProxyGroupBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void ProxyGroupBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void ProxyGroupBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void ProxyGroupBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void ProxyGroupBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == RootFieldId)
    {
        static_cast<ProxyGroup *>(this)->setRoot(NullFC);
    }
}

/*********************************** Non-ptr code ********************************/
void ProxyGroupBase::pushToInline(const UInt8& value)
{
    editMField(InlineFieldMask, _mfInline);
    _mfInline.push_back(value);
}

void ProxyGroupBase::insertIntoInline(UInt32                uiIndex,
                                                   const UInt8& value   )
{
    editMField(InlineFieldMask, _mfInline);

    MFUInt8::iterator fieldIt = _mfInline.begin();

    fieldIt += uiIndex;

    _mfInline.insert(fieldIt, value);
}

void ProxyGroupBase::replaceInInline(UInt32                uiIndex,
                                                       const UInt8& value   )
{
    if(uiIndex >= _mfInline.size())
        return;

    editMField(InlineFieldMask, _mfInline);

    _mfInline[uiIndex] = value;
}

void ProxyGroupBase::replaceInInline(const UInt8& pOldElem,
                                                        const UInt8& pNewElem)
{
    Int32  elemIdx = _mfInline.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(InlineFieldMask, _mfInline);

        MFUInt8::iterator fieldIt = _mfInline.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ProxyGroupBase::removeFromInline(UInt32 uiIndex)
{
    if(uiIndex < _mfInline.size())
    {
        editMField(InlineFieldMask, _mfInline);

        MFUInt8::iterator fieldIt = _mfInline.begin();

        fieldIt += uiIndex;
        _mfInline.erase(fieldIt);
    }
}

void ProxyGroupBase::removeFromInline(const UInt8& value)
{
    Int32 iElemIdx = _mfInline.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(InlineFieldMask, _mfInline);

        MFUInt8::iterator fieldIt = _mfInline.begin();

        fieldIt += iElemIdx;

        _mfInline.erase(fieldIt);
    }
}

void ProxyGroupBase::clearInline(void)
{
    editMField(InlineFieldMask, _mfInline);

    _mfInline.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ProxyGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        returnValue += _sfUrl.getBinSize();
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        returnValue += _sfState.getBinSize();
    }
    if(FieldBits::NoField != (ConcurrentLoadFieldMask & whichField))
    {
        returnValue += _sfConcurrentLoad.getBinSize();
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        returnValue += _sfVolume.getBinSize();
    }
    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        returnValue += _sfIndices.getBinSize();
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        returnValue += _sfTriangles.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _sfPositions.getBinSize();
    }
    if(FieldBits::NoField != (GeometriesFieldMask & whichField))
    {
        returnValue += _sfGeometries.getBinSize();
    }
    if(FieldBits::NoField != (AbsoluteUrlFieldMask & whichField))
    {
        returnValue += _sfAbsoluteUrl.getBinSize();
    }
    if(FieldBits::NoField != (InlineFieldMask & whichField))
    {
        returnValue += _mfInline.getBinSize();
    }

    return returnValue;
}

void ProxyGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        _sfState.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConcurrentLoadFieldMask & whichField))
    {
        _sfConcurrentLoad.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _sfIndices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometriesFieldMask & whichField))
    {
        _sfGeometries.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AbsoluteUrlFieldMask & whichField))
    {
        _sfAbsoluteUrl.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InlineFieldMask & whichField))
    {
        _mfInline.copyToBin(pMem);
    }
}

void ProxyGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        _sfState.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConcurrentLoadFieldMask & whichField))
    {
        _sfConcurrentLoad.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _sfIndices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometriesFieldMask & whichField))
    {
        _sfGeometries.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AbsoluteUrlFieldMask & whichField))
    {
        _sfAbsoluteUrl.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InlineFieldMask & whichField))
    {
        _mfInline.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ProxyGroupPtr ProxyGroupBase::createEmpty(void)
{
    ProxyGroupPtr returnValue;

    newPtr<ProxyGroup>(returnValue);

    return returnValue;
}

FieldContainerPtr ProxyGroupBase::shallowCopy(void) const
{
    ProxyGroupPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ProxyGroup *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ProxyGroupBase::ProxyGroupBase(void) :
    Inherited(),
    _sfEnabled                (bool(true)),
    _sfUrl                    (),
    _sfRoot                   (NodePtr(NullFC)),
    _sfState                  (UInt32(0)),
    _sfConcurrentLoad         (bool(true)),
    _sfVolume                 (),
    _sfIndices                (UInt32(0)),
    _sfTriangles              (UInt32(0)),
    _sfPositions              (),
    _sfGeometries             (),
    _sfAbsoluteUrl            (),
    _mfInline                 ()
{
}

ProxyGroupBase::ProxyGroupBase(const ProxyGroupBase &source) :
    Inherited(source),
    _sfEnabled                (source._sfEnabled                ),
    _sfUrl                    (source._sfUrl                    ),
    _sfRoot                   (),
    _sfState                  (source._sfState                  ),
    _sfConcurrentLoad         (source._sfConcurrentLoad         ),
    _sfVolume                 (source._sfVolume                 ),
    _sfIndices                (source._sfIndices                ),
    _sfTriangles              (source._sfTriangles              ),
    _sfPositions              (source._sfPositions              ),
    _sfGeometries             (source._sfGeometries             ),
    _sfAbsoluteUrl            (source._sfAbsoluteUrl            ),
    _mfInline                 (source._mfInline                 )
{
}

/*-------------------------- destructors ----------------------------------*/

ProxyGroupBase::~ProxyGroupBase(void)
{
}

void ProxyGroupBase::onCreate(const ProxyGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setRoot(source->getRoot());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ProxyGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ProxyGroupBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ProxyGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ProxyGroupBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ProxyGroupBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ProxyGroupBase::createAspectCopy(void) const
{
    ProxyGroupPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ProxyGroup *>(this));

    return returnValue;
}
#endif

void ProxyGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ProxyGroup *>(this)->setRoot(NullFC);
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ProxyGroupPtr>::_type("ProxyGroupPtr", "GroupPtr");
#endif



/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGPROXYGROUPBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPROXYGROUPBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPROXYGROUPFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
