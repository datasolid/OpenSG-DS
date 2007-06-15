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
 **     class PolygonChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPOLYGONCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // CullFace default header
#include <OSGGL.h>                        // FrontFace default header
#include <OSGGL.h>                        // FrontMode default header
#include <OSGGL.h>                        // BackMode default header
#include <OSGGL.h>                        // Smooth default header
#include <OSGGL.h>                        // OffsetPoint default header
#include <OSGGL.h>                        // OffsetLine default header
#include <OSGGL.h>                        // OffsetFill default header


#include "OSGPolygonChunkBase.h"
#include "OSGPolygonChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonChunk
    \ingroup GrpSystemState

    See \ref PageSystemPolygonChunk for details.

    The parameters of the following functions are wrapped here:
    <ul>
    <li>glCullFace() (OSG::PolygonChunk::_sfCullFace),</li>
    <li>glFrontFace()(OSG::PolygonChunk::_sfFrontFace),</li>
    <li>glPolygonMode() (OSG::PolygonChunk::_sfFrontMode, OSG::PolygonChunk::_sfBackMode),</li>
    <li>glEnable(GL_POLYGON_SMOOTH) (OSG::PolygonChunk::_sfSmooth),</li>
    <li>glPolygonOffset() (OSG::PolygonChunk::_sfOffsetFactor, OSG::PolygonChunk::_sfOffsetBias),</li>
    <li>glEnable(GL_POLYGON_OFFSET_POINT) (OSG::PolygonChunk::_sfOffsetPoint),</li>
    <li>glEnable(GL_POLYGON_OFFSET_LINE) (OSG::PolygonChunk::_sfOffsetLine),</li>
    <li>glEnable(GL_POLYGON_OFFSET_FILL) (OSG::PolygonChunk::_sfOffsetFill),</li>
    <li>glStipplePattern() and glEnable(GL_POLYGON_STIPPLE) (OSG::PolygonChunk::_sfStipple).</li>
    </ul>
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          PolygonChunkBase::_sfCullFace
    Defines which side of the polygon is invisible. Set to GL_NONE to not cull anything. See glCullFace.
*/

/*! \var GLenum          PolygonChunkBase::_sfFrontFace
    Defines which side of the polygon is considered the front side base on vertex ordering
    of clockwise (CW) of counter clockwise (CCW). defaults to GL_CCW.  See glFrontFace.
*/

/*! \var GLenum          PolygonChunkBase::_sfFrontMode
    Defines if polygon front sides are rendered filled (default), outlined or as points.  See glPolygonMode.
*/

/*! \var GLenum          PolygonChunkBase::_sfBackMode
    Defines if polygon front sides are rendered filled (default), outlined or as points. See glPolygonMode.
*/

/*! \var bool            PolygonChunkBase::_sfSmooth
    Defines if polygon antialiasing is used.  See GL_POLYGON_SMOOTH.
*/

/*! \var Real32          PolygonChunkBase::_sfOffsetFactor
    Defines the offset factor.  See glPolygonOffset.
*/

/*! \var Real32          PolygonChunkBase::_sfOffsetBias
    Defines the offset bias.  See glPolygonOffset.
*/

/*! \var bool            PolygonChunkBase::_sfOffsetPoint
    Enables offsetting for points.
*/

/*! \var bool            PolygonChunkBase::_sfOffsetLine
    Enables offsetting for lines.
*/

/*! \var bool            PolygonChunkBase::_sfOffsetFill
    Enables offsetting for polygons.
*/

/*! \var Int32           PolygonChunkBase::_mfStipple
    Defines the stipple pattern. Is only valid and used if it contains 
    32 elements.
*/


void PolygonChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFGLenum *(PolygonChunkBase::*GetSFCullFaceF)(void) const;

    GetSFCullFaceF GetSFCullFace = &PolygonChunkBase::getSFCullFace;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "cullFace",
        "Defines which side of the polygon is invisible. Set to GL_NONE to not cull anything. See glCullFace.\n",
        CullFaceFieldId, CullFaceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFCullFace),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCullFace));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFCullFace));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFGLenum *(PolygonChunkBase::*GetSFFrontFaceF)(void) const;

    GetSFFrontFaceF GetSFFrontFace = &PolygonChunkBase::getSFFrontFace;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "frontFace",
        "Defines which side of the polygon is considered the front side base on vertex ordering\n"
        "of clockwise (CW) of counter clockwise (CCW). defaults to GL_CCW.  See glFrontFace.\n",
        FrontFaceFieldId, FrontFaceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFFrontFace),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFrontFace));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFFrontFace));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFGLenum *(PolygonChunkBase::*GetSFFrontModeF)(void) const;

    GetSFFrontModeF GetSFFrontMode = &PolygonChunkBase::getSFFrontMode;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "frontMode",
        "Defines if polygon front sides are rendered filled (default), outlined or as points.  See glPolygonMode.\n",
        FrontModeFieldId, FrontModeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFFrontMode),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFrontMode));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFFrontMode));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFGLenum *(PolygonChunkBase::*GetSFBackModeF)(void) const;

    GetSFBackModeF GetSFBackMode = &PolygonChunkBase::getSFBackMode;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "backMode",
        "Defines if polygon front sides are rendered filled (default), outlined or as points. See glPolygonMode.\n",
        BackModeFieldId, BackModeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFBackMode),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackMode));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFBackMode));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonChunkBase::*GetSFSmoothF)(void) const;

    GetSFSmoothF GetSFSmooth = &PolygonChunkBase::getSFSmooth;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "smooth",
        "Defines if polygon antialiasing is used.  See GL_POLYGON_SMOOTH.\n",
        SmoothFieldId, SmoothFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFSmooth),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSmooth));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFSmooth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(PolygonChunkBase::*GetSFOffsetFactorF)(void) const;

    GetSFOffsetFactorF GetSFOffsetFactor = &PolygonChunkBase::getSFOffsetFactor;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "offsetFactor",
        "Defines the offset factor.  See glPolygonOffset.\n",
        OffsetFactorFieldId, OffsetFactorFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFOffsetFactor),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetFactor));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFOffsetFactor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(PolygonChunkBase::*GetSFOffsetBiasF)(void) const;

    GetSFOffsetBiasF GetSFOffsetBias = &PolygonChunkBase::getSFOffsetBias;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "offsetBias",
        "Defines the offset bias.  See glPolygonOffset.\n",
        OffsetBiasFieldId, OffsetBiasFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFOffsetBias),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetBias));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFOffsetBias));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonChunkBase::*GetSFOffsetPointF)(void) const;

    GetSFOffsetPointF GetSFOffsetPoint = &PolygonChunkBase::getSFOffsetPoint;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "offsetPoint",
        "Enables offsetting for points.\n",
        OffsetPointFieldId, OffsetPointFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFOffsetPoint),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetPoint));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFOffsetPoint));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonChunkBase::*GetSFOffsetLineF)(void) const;

    GetSFOffsetLineF GetSFOffsetLine = &PolygonChunkBase::getSFOffsetLine;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "offsetLine",
        "Enables offsetting for lines.\n",
        OffsetLineFieldId, OffsetLineFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFOffsetLine),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetLine));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFOffsetLine));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(PolygonChunkBase::*GetSFOffsetFillF)(void) const;

    GetSFOffsetFillF GetSFOffsetFill = &PolygonChunkBase::getSFOffsetFill;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "offsetFill",
        "Enables offsetting for polygons.\n",
        OffsetFillFieldId, OffsetFillFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editSFOffsetFill),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFOffsetFill));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getSFOffsetFill));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const MFInt32 *(PolygonChunkBase::*GetMFStippleF)(void) const;

    GetMFStippleF GetMFStipple = &PolygonChunkBase::getMFStipple;
#endif

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "stipple",
        "Defines the stipple pattern. Is only valid and used if it contains \n"
        "32 elements.\n",
        StippleFieldId, StippleFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PolygonChunkBase::editMFStipple),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFStipple));
#else
        reinterpret_cast<FieldGetMethodSig >(&PolygonChunkBase::getMFStipple));
#endif

    oType.addInitialDesc(pDesc);
}


PolygonChunkBase::TypeObject PolygonChunkBase::_type(
    PolygonChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PolygonChunkBase::createEmpty,
    PolygonChunk::initMethod,
    (InitalInsertDescFunc) &PolygonChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PolygonChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "><![CDATA[\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemPolygonChunk for details.\n"
    "\n"
    "The parameters of the following functions are wrapped here:\n"
    "<ul>\n"
    "<li>glCullFace() (OSG::PolygonChunk::_sfCullFace),</li>\n"
    "<li>glFrontFace()(OSG::PolygonChunk::_sfFrontFace),</li>\n"
    "<li>glPolygonMode() (OSG::PolygonChunk::_sfFrontMode, OSG::PolygonChunk::_sfBackMode),</li>\n"
    "<li>glEnable(GL_POLYGON_SMOOTH) (OSG::PolygonChunk::_sfSmooth),</li>\n"
    "<li>glPolygonOffset() (OSG::PolygonChunk::_sfOffsetFactor, OSG::PolygonChunk::_sfOffsetBias),</li>\n"
    "<li>glEnable(GL_POLYGON_OFFSET_POINT) (OSG::PolygonChunk::_sfOffsetPoint),</li>\n"
    "<li>glEnable(GL_POLYGON_OFFSET_LINE) (OSG::PolygonChunk::_sfOffsetLine),</li>\n"
    "<li>glEnable(GL_POLYGON_OFFSET_FILL) (OSG::PolygonChunk::_sfOffsetFill),</li>\n"
    "<li>glStipplePattern() and glEnable(GL_POLYGON_STIPPLE) (OSG::PolygonChunk::_sfStipple).</li>\n"
    "</ul>]]>\n"
    "\t<Field\n"
    "\t\tname=\"cullFace\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "                potential_values=\"GL_NONE,GL_FRONT,GL_BACK,GL_FRONT_AND_BACK\"\n"
    "\t>\n"
    "\tDefines which side of the polygon is invisible. Set to GL_NONE to not cull anything. See glCullFace.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"frontFace\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_CCW\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "                potential_values=\"GL_CCW,GL_CW\"\n"
    "\t>\n"
    "\tDefines which side of the polygon is considered the front side base on vertex ordering\n"
    "        of clockwise (CW) of counter clockwise (CCW). defaults to GL_CCW.  See glFrontFace.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"frontMode\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FILL\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "                potential_values=\"GL_FILL,GL_LINE,GL_POINT\"\n"
    "\t>\n"
    "\tDefines if polygon front sides are rendered filled (default), outlined or as points.  See glPolygonMode.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backMode\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FILL\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "                potential_values=\"GL_FILL,GL_LINE,GL_POINT\"                \n"
    "\t>\n"
    "\tDefines if polygon front sides are rendered filled (default), outlined or as points. See glPolygonMode.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"smooth\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t>\n"
    "\tDefines if polygon antialiasing is used.  See GL_POLYGON_SMOOTH.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetFactor\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t>\n"
    "\tDefines the offset factor.  See glPolygonOffset.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetBias\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t>\n"
    "\tDefines the offset bias.  See glPolygonOffset.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetPoint\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t>\n"
    "\tEnables offsetting for points.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetLine\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t>\n"
    "\tEnables offsetting for lines.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"offsetFill\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_FALSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t>\n"
    "\tEnables offsetting for polygons.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"stipple\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t>\n"
    "\tDefines the stipple pattern. Is only valid and used if it contains \n"
    "        32 elements.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemPolygonChunk for details.\n"
    "\n"
    "The parameters of the following functions are wrapped here:\n"
    "<ul>\n"
    "<li>glCullFace() (OSG::PolygonChunk::_sfCullFace),</li>\n"
    "<li>glFrontFace()(OSG::PolygonChunk::_sfFrontFace),</li>\n"
    "<li>glPolygonMode() (OSG::PolygonChunk::_sfFrontMode, OSG::PolygonChunk::_sfBackMode),</li>\n"
    "<li>glEnable(GL_POLYGON_SMOOTH) (OSG::PolygonChunk::_sfSmooth),</li>\n"
    "<li>glPolygonOffset() (OSG::PolygonChunk::_sfOffsetFactor, OSG::PolygonChunk::_sfOffsetBias),</li>\n"
    "<li>glEnable(GL_POLYGON_OFFSET_POINT) (OSG::PolygonChunk::_sfOffsetPoint),</li>\n"
    "<li>glEnable(GL_POLYGON_OFFSET_LINE) (OSG::PolygonChunk::_sfOffsetLine),</li>\n"
    "<li>glEnable(GL_POLYGON_OFFSET_FILL) (OSG::PolygonChunk::_sfOffsetFill),</li>\n"
    "<li>glStipplePattern() and glEnable(GL_POLYGON_STIPPLE) (OSG::PolygonChunk::_sfStipple).</li>\n"
    "</ul>\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonChunkBase::getType(void) const
{
    return _type;
}

UInt32 PolygonChunkBase::getContainerSize(void) const
{
    return sizeof(PolygonChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *PolygonChunkBase::editSFCullFace(void)
{
    editSField(CullFaceFieldMask);

    return &_sfCullFace;
}

const SFGLenum *PolygonChunkBase::getSFCullFace(void) const
{
    return &_sfCullFace;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *PolygonChunkBase::getSFCullFace       (void)
{
    return this->editSFCullFace       ();
}
#endif

SFGLenum *PolygonChunkBase::editSFFrontFace(void)
{
    editSField(FrontFaceFieldMask);

    return &_sfFrontFace;
}

const SFGLenum *PolygonChunkBase::getSFFrontFace(void) const
{
    return &_sfFrontFace;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *PolygonChunkBase::getSFFrontFace      (void)
{
    return this->editSFFrontFace      ();
}
#endif

SFGLenum *PolygonChunkBase::editSFFrontMode(void)
{
    editSField(FrontModeFieldMask);

    return &_sfFrontMode;
}

const SFGLenum *PolygonChunkBase::getSFFrontMode(void) const
{
    return &_sfFrontMode;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *PolygonChunkBase::getSFFrontMode      (void)
{
    return this->editSFFrontMode      ();
}
#endif

SFGLenum *PolygonChunkBase::editSFBackMode(void)
{
    editSField(BackModeFieldMask);

    return &_sfBackMode;
}

const SFGLenum *PolygonChunkBase::getSFBackMode(void) const
{
    return &_sfBackMode;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *PolygonChunkBase::getSFBackMode       (void)
{
    return this->editSFBackMode       ();
}
#endif

SFBool *PolygonChunkBase::editSFSmooth(void)
{
    editSField(SmoothFieldMask);

    return &_sfSmooth;
}

const SFBool *PolygonChunkBase::getSFSmooth(void) const
{
    return &_sfSmooth;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonChunkBase::getSFSmooth         (void)
{
    return this->editSFSmooth         ();
}
#endif

SFReal32 *PolygonChunkBase::editSFOffsetFactor(void)
{
    editSField(OffsetFactorFieldMask);

    return &_sfOffsetFactor;
}

const SFReal32 *PolygonChunkBase::getSFOffsetFactor(void) const
{
    return &_sfOffsetFactor;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PolygonChunkBase::getSFOffsetFactor   (void)
{
    return this->editSFOffsetFactor   ();
}
#endif

SFReal32 *PolygonChunkBase::editSFOffsetBias(void)
{
    editSField(OffsetBiasFieldMask);

    return &_sfOffsetBias;
}

const SFReal32 *PolygonChunkBase::getSFOffsetBias(void) const
{
    return &_sfOffsetBias;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *PolygonChunkBase::getSFOffsetBias     (void)
{
    return this->editSFOffsetBias     ();
}
#endif

SFBool *PolygonChunkBase::editSFOffsetPoint(void)
{
    editSField(OffsetPointFieldMask);

    return &_sfOffsetPoint;
}

const SFBool *PolygonChunkBase::getSFOffsetPoint(void) const
{
    return &_sfOffsetPoint;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonChunkBase::getSFOffsetPoint    (void)
{
    return this->editSFOffsetPoint    ();
}
#endif

SFBool *PolygonChunkBase::editSFOffsetLine(void)
{
    editSField(OffsetLineFieldMask);

    return &_sfOffsetLine;
}

const SFBool *PolygonChunkBase::getSFOffsetLine(void) const
{
    return &_sfOffsetLine;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonChunkBase::getSFOffsetLine     (void)
{
    return this->editSFOffsetLine     ();
}
#endif

SFBool *PolygonChunkBase::editSFOffsetFill(void)
{
    editSField(OffsetFillFieldMask);

    return &_sfOffsetFill;
}

const SFBool *PolygonChunkBase::getSFOffsetFill(void) const
{
    return &_sfOffsetFill;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *PolygonChunkBase::getSFOffsetFill     (void)
{
    return this->editSFOffsetFill     ();
}
#endif

MFInt32 *PolygonChunkBase::editMFStipple(void)
{
    editMField(StippleFieldMask, _mfStipple);

    return &_mfStipple;
}

const MFInt32 *PolygonChunkBase::getMFStipple(void) const
{
    return &_mfStipple;
}

#ifdef OSG_1_GET_COMPAT
MFInt32             *PolygonChunkBase::getMFStipple        (void)
{
    return this->editMFStipple        ();
}
#endif



/*********************************** Non-ptr code ********************************/
void PolygonChunkBase::pushToStipple(const Int32& value)
{
    editMField(StippleFieldMask, _mfStipple);
    _mfStipple.push_back(value);
}

void PolygonChunkBase::insertIntoStipple(UInt32                uiIndex,
                                                   const Int32& value   )
{
    editMField(StippleFieldMask, _mfStipple);

    MFInt32::iterator fieldIt = _mfStipple.begin();

    fieldIt += uiIndex;

    _mfStipple.insert(fieldIt, value);
}

void PolygonChunkBase::replaceInStipple(UInt32                uiIndex,
                                                       const Int32& value   )
{
    if(uiIndex >= _mfStipple.size())
        return;

    editMField(StippleFieldMask, _mfStipple);

    _mfStipple[uiIndex] = value;
}

void PolygonChunkBase::replaceInStipple(const Int32& pOldElem,
                                                        const Int32& pNewElem)
{
    Int32  elemIdx = _mfStipple.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(StippleFieldMask, _mfStipple);

        MFInt32::iterator fieldIt = _mfStipple.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void PolygonChunkBase::removeFromStipple(UInt32 uiIndex)
{
    if(uiIndex < _mfStipple.size())
    {
        editMField(StippleFieldMask, _mfStipple);

        MFInt32::iterator fieldIt = _mfStipple.begin();

        fieldIt += uiIndex;
        _mfStipple.erase(fieldIt);
    }
}

void PolygonChunkBase::removeFromStipple(const Int32& value)
{
    Int32 iElemIdx = _mfStipple.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(StippleFieldMask, _mfStipple);

        MFInt32::iterator fieldIt = _mfStipple.begin();

        fieldIt += iElemIdx;

        _mfStipple.erase(fieldIt);
    }
}

void PolygonChunkBase::clearStipple(void)
{
    editMField(StippleFieldMask, _mfStipple);

    _mfStipple.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 PolygonChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
    {
        returnValue += _sfCullFace.getBinSize();
    }
    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
    {
        returnValue += _sfFrontFace.getBinSize();
    }
    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
    {
        returnValue += _sfFrontMode.getBinSize();
    }
    if(FieldBits::NoField != (BackModeFieldMask & whichField))
    {
        returnValue += _sfBackMode.getBinSize();
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        returnValue += _sfSmooth.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        returnValue += _sfOffsetFactor.getBinSize();
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        returnValue += _sfOffsetBias.getBinSize();
    }
    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
    {
        returnValue += _sfOffsetPoint.getBinSize();
    }
    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
    {
        returnValue += _sfOffsetLine.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
    {
        returnValue += _sfOffsetFill.getBinSize();
    }
    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        returnValue += _mfStipple.getBinSize();
    }

    return returnValue;
}

void PolygonChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
    {
        _sfCullFace.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
    {
        _sfFrontFace.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
    {
        _sfFrontMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackModeFieldMask & whichField))
    {
        _sfBackMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
    {
        _sfOffsetPoint.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
    {
        _sfOffsetLine.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
    {
        _sfOffsetFill.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        _mfStipple.copyToBin(pMem);
    }
}

void PolygonChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
    {
        _sfCullFace.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
    {
        _sfFrontFace.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
    {
        _sfFrontMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackModeFieldMask & whichField))
    {
        _sfBackMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SmoothFieldMask & whichField))
    {
        _sfSmooth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
    {
        _sfOffsetFactor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
    {
        _sfOffsetBias.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
    {
        _sfOffsetPoint.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
    {
        _sfOffsetLine.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
    {
        _sfOffsetFill.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        _mfStipple.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PolygonChunkPtr PolygonChunkBase::create(void)
{
    PolygonChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<PolygonChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
PolygonChunkPtr PolygonChunkBase::createEmpty(void)
{
    PolygonChunkPtr returnValue;

    newPtr<PolygonChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr PolygonChunkBase::shallowCopy(void) const
{
    PolygonChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PolygonChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PolygonChunkBase::PolygonChunkBase(void) :
    Inherited(),
    _sfCullFace               (GLenum(GL_NONE)),
    _sfFrontFace              (GLenum(GL_CCW)),
    _sfFrontMode              (GLenum(GL_FILL)),
    _sfBackMode               (GLenum(GL_FILL)),
    _sfSmooth                 (bool(GL_FALSE)),
    _sfOffsetFactor           (Real32(0)),
    _sfOffsetBias             (Real32(0)),
    _sfOffsetPoint            (bool(GL_FALSE)),
    _sfOffsetLine             (bool(GL_FALSE)),
    _sfOffsetFill             (bool(GL_FALSE)),
    _mfStipple                ()
{
}

PolygonChunkBase::PolygonChunkBase(const PolygonChunkBase &source) :
    Inherited(source),
    _sfCullFace               (source._sfCullFace               ),
    _sfFrontFace              (source._sfFrontFace              ),
    _sfFrontMode              (source._sfFrontMode              ),
    _sfBackMode               (source._sfBackMode               ),
    _sfSmooth                 (source._sfSmooth                 ),
    _sfOffsetFactor           (source._sfOffsetFactor           ),
    _sfOffsetBias             (source._sfOffsetBias             ),
    _sfOffsetPoint            (source._sfOffsetPoint            ),
    _sfOffsetLine             (source._sfOffsetLine             ),
    _sfOffsetFill             (source._sfOffsetFill             ),
    _mfStipple                (source._mfStipple                )
{
}

/*-------------------------- destructors ----------------------------------*/

PolygonChunkBase::~PolygonChunkBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void PolygonChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PolygonChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PolygonChunkBase::createAspectCopy(void) const
{
    PolygonChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonChunk *>(this));

    return returnValue;
}
#endif

void PolygonChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfStipple.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PolygonChunkPtr>::_type("PolygonChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PolygonChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, PolygonChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, PolygonChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
