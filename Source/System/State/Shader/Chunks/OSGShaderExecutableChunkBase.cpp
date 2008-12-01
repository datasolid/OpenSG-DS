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
 **     class ShaderExecutableChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // GeometryInputType default header
#include <OSGGL.h>                        // GeometryOutputType default header

#include <OSGShaderProgram.h> // VertexShader Class
#include <OSGShaderProgram.h> // GeometryShader Class
#include <OSGShaderProgram.h> // FragmentShader Class
#include <OSGShaderProgramVariables.h> // Variables Class

#include "OSGShaderExecutableChunkBase.h"
#include "OSGShaderExecutableChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderExecutableChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ShaderProgram * ShaderExecutableChunkBase::_mfVertexShader
    fragment program object
*/

/*! \var ShaderProgram * ShaderExecutableChunkBase::_mfGeometryShader
    fragment program object
*/

/*! \var ShaderProgram * ShaderExecutableChunkBase::_mfFragmentShader
    fragment program object
*/

/*! \var ShaderProgramVariables * ShaderExecutableChunkBase::_sfVariables
    fragment program object
*/

/*! \var Int32           ShaderExecutableChunkBase::_mfVariableLocations
    fragment program object
*/

/*! \var Int32           ShaderExecutableChunkBase::_mfProceduralVariableLocations
    fragment program object
*/

/*! \var UInt32          ShaderExecutableChunkBase::_sfGeometryVerticesOut
    
*/

/*! \var GLenum          ShaderExecutableChunkBase::_sfGeometryInputType
    
*/

/*! \var GLenum          ShaderExecutableChunkBase::_sfGeometryOutputType
    
*/

/*! \var UInt32          ShaderExecutableChunkBase::_sfGLId
    
*/

/*! \var bool            ShaderExecutableChunkBase::_sfPointSize
    Flag to set whether the shader can change the point size.
*/


void ShaderExecutableChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUncountedShaderProgramPtr::Description(
        MFUncountedShaderProgramPtr::getClassType(),
        "vertexShader",
        "fragment program object\n",
        VertexShaderFieldId, VertexShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderExecutableChunk::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderExecutableChunk::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUncountedShaderProgramPtr::Description(
        MFUncountedShaderProgramPtr::getClassType(),
        "geometryShader",
        "fragment program object\n",
        GeometryShaderFieldId, GeometryShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderExecutableChunk::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderExecutableChunk::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUncountedShaderProgramPtr::Description(
        MFUncountedShaderProgramPtr::getClassType(),
        "fragmentShader",
        "fragment program object\n",
        FragmentShaderFieldId, FragmentShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderExecutableChunk::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderExecutableChunk::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChildShaderProgramVariablesPtr::Description(
        SFUnrecChildShaderProgramVariablesPtr::getClassType(),
        "variables",
        "fragment program object\n",
        VariablesFieldId, VariablesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleVariables),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleVariables));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "variableLocations",
        "fragment program object\n",
        VariableLocationsFieldId, VariableLocationsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleVariableLocations),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleVariableLocations));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "proceduralVariableLocations",
        "fragment program object\n",
        ProceduralVariableLocationsFieldId, ProceduralVariableLocationsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleProceduralVariableLocations),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleProceduralVariableLocations));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "geometryVerticesOut",
        "",
        GeometryVerticesOutFieldId, GeometryVerticesOutFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleGeometryVerticesOut),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleGeometryVerticesOut));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "geometryInputType",
        "",
        GeometryInputTypeFieldId, GeometryInputTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleGeometryInputType),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleGeometryInputType));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "geometryOutputType",
        "",
        GeometryOutputTypeFieldId, GeometryOutputTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleGeometryOutputType),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleGeometryOutputType));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandleGLId),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandleGLId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "pointSize",
        "Flag to set whether the shader can change the point size.\n",
        PointSizeFieldId, PointSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableChunk::editHandlePointSize),
        static_cast<FieldGetMethodSig >(&ShaderExecutableChunk::getHandlePointSize));

    oType.addInitialDesc(pDesc);
}


ShaderExecutableChunkBase::TypeObject ShaderExecutableChunkBase::_type(
    ShaderExecutableChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderExecutableChunkBase::createEmptyLocal),
    ShaderExecutableChunk::initMethod,
    ShaderExecutableChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderExecutableChunkBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderExecutableChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    " \n"
    "  <Field\n"
    "\t name=\"vertexShader\"\n"
    "\t type=\"ShaderProgram\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"none\"\n"
    "     category=\"uncountedpointer\"\n"
    "     >\n"
    "<!---     \n"
    "     pushToFieldAs=\"addVertexShader\"\n"
    "     removeFromMFieldIndexAs=\"subVertexShader\"\n"
    "     clearFieldAs=\"clearVertexShaders\" -->\n"
    "\t \n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"geometryShader\"\n"
    "\t type=\"ShaderProgram\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"none\"\n"
    "     category=\"uncountedpointer\"\n"
    "\t >\n"
    "\n"
    "<!--     \n"
    "     pushToFieldAs=\"addGeometryShader\"\n"
    "     removeFromMFieldIndexAs=\"subGeometryShader\"\n"
    "     clearFieldAs=\"clearGeometryShaders\" -->\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"fragmentShader\"\n"
    "\t type=\"ShaderProgram\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"none\"\n"
    "     category=\"uncountedpointer\"\n"
    "\t >\n"
    "\n"
    "<!--     \n"
    "     pushToFieldAs=\"addFragmentShader\"\n"
    "     removeFromMFieldIndexAs=\"subFragmentShader\"\n"
    "     clearFieldAs=\"clearFragmentShaders\" -->\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"variables\"\n"
    "\t type=\"ShaderProgramVariables\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"childpointer\"\n"
    "     childParentType=\"FieldContainer\"\n"
    "     linkParentField=\"Parents\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"variableLocations\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"protected\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"proceduralVariableLocations\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"protected\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  \n"
    "  <Field\n"
    "\t name=\"geometryVerticesOut\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"geometryInputType\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRIANGLES\"\n"
    "\t defaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"geometryOutputType\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRIANGLE_STRIP\"\n"
    "\t defaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"GLId\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"public\"\n"
    "\t defaultValue=\"0\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"pointSize\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tFlag to set whether the shader can change the point size.\n"
    "  </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderExecutableChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderExecutableChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderExecutableChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderExecutableChunk);
}

/*------------------------- decorator get ------------------------------*/





//! Get the ShaderExecutableChunk::_sfVariables field.
const SFUnrecChildShaderProgramVariablesPtr *ShaderExecutableChunkBase::getSFVariables(void) const
{
    return &_sfVariables;
}

SFUnrecChildShaderProgramVariablesPtr *ShaderExecutableChunkBase::editSFVariables      (void)
{
    editSField(VariablesFieldMask);

    return &_sfVariables;
}

MFInt32 *ShaderExecutableChunkBase::editMFVariableLocations(void)
{
    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return &_mfVariableLocations;
}

const MFInt32 *ShaderExecutableChunkBase::getMFVariableLocations(void) const
{
    return &_mfVariableLocations;
}


MFInt32 *ShaderExecutableChunkBase::editMFProceduralVariableLocations(void)
{
    editMField(ProceduralVariableLocationsFieldMask, _mfProceduralVariableLocations);

    return &_mfProceduralVariableLocations;
}

const MFInt32 *ShaderExecutableChunkBase::getMFProceduralVariableLocations(void) const
{
    return &_mfProceduralVariableLocations;
}


SFUInt32 *ShaderExecutableChunkBase::editSFGeometryVerticesOut(void)
{
    editSField(GeometryVerticesOutFieldMask);

    return &_sfGeometryVerticesOut;
}

const SFUInt32 *ShaderExecutableChunkBase::getSFGeometryVerticesOut(void) const
{
    return &_sfGeometryVerticesOut;
}


SFGLenum *ShaderExecutableChunkBase::editSFGeometryInputType(void)
{
    editSField(GeometryInputTypeFieldMask);

    return &_sfGeometryInputType;
}

const SFGLenum *ShaderExecutableChunkBase::getSFGeometryInputType(void) const
{
    return &_sfGeometryInputType;
}


SFGLenum *ShaderExecutableChunkBase::editSFGeometryOutputType(void)
{
    editSField(GeometryOutputTypeFieldMask);

    return &_sfGeometryOutputType;
}

const SFGLenum *ShaderExecutableChunkBase::getSFGeometryOutputType(void) const
{
    return &_sfGeometryOutputType;
}


SFUInt32 *ShaderExecutableChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *ShaderExecutableChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}


SFBool *ShaderExecutableChunkBase::editSFPointSize(void)
{
    editSField(PointSizeFieldMask);

    return &_sfPointSize;
}

const SFBool *ShaderExecutableChunkBase::getSFPointSize(void) const
{
    return &_sfPointSize;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderExecutableChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VertexShaderFieldMask & whichField))
    {
        returnValue += _mfVertexShader.getBinSize();
    }
    if(FieldBits::NoField != (GeometryShaderFieldMask & whichField))
    {
        returnValue += _mfGeometryShader.getBinSize();
    }
    if(FieldBits::NoField != (FragmentShaderFieldMask & whichField))
    {
        returnValue += _mfFragmentShader.getBinSize();
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        returnValue += _sfVariables.getBinSize();
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        returnValue += _mfVariableLocations.getBinSize();
    }
    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
    {
        returnValue += _mfProceduralVariableLocations.getBinSize();
    }
    if(FieldBits::NoField != (GeometryVerticesOutFieldMask & whichField))
    {
        returnValue += _sfGeometryVerticesOut.getBinSize();
    }
    if(FieldBits::NoField != (GeometryInputTypeFieldMask & whichField))
    {
        returnValue += _sfGeometryInputType.getBinSize();
    }
    if(FieldBits::NoField != (GeometryOutputTypeFieldMask & whichField))
    {
        returnValue += _sfGeometryOutputType.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        returnValue += _sfPointSize.getBinSize();
    }

    return returnValue;
}

void ShaderExecutableChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VertexShaderFieldMask & whichField))
    {
        _mfVertexShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryShaderFieldMask & whichField))
    {
        _mfGeometryShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FragmentShaderFieldMask & whichField))
    {
        _mfFragmentShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        _mfVariableLocations.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
    {
        _mfProceduralVariableLocations.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryVerticesOutFieldMask & whichField))
    {
        _sfGeometryVerticesOut.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryInputTypeFieldMask & whichField))
    {
        _sfGeometryInputType.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryOutputTypeFieldMask & whichField))
    {
        _sfGeometryOutputType.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyToBin(pMem);
    }
}

void ShaderExecutableChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VertexShaderFieldMask & whichField))
    {
        _mfVertexShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryShaderFieldMask & whichField))
    {
        _mfGeometryShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FragmentShaderFieldMask & whichField))
    {
        _mfFragmentShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        _mfVariableLocations.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProceduralVariableLocationsFieldMask & whichField))
    {
        _mfProceduralVariableLocations.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryVerticesOutFieldMask & whichField))
    {
        _sfGeometryVerticesOut.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryInputTypeFieldMask & whichField))
    {
        _sfGeometryInputType.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryOutputTypeFieldMask & whichField))
    {
        _sfGeometryOutputType.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderExecutableChunkTransitPtr ShaderExecutableChunkBase::createLocal(BitVector bFlags)
{
    ShaderExecutableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderExecutableChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderExecutableChunkTransitPtr ShaderExecutableChunkBase::createDependent(BitVector bFlags)
{
    ShaderExecutableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderExecutableChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderExecutableChunkTransitPtr ShaderExecutableChunkBase::create(void)
{
    ShaderExecutableChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderExecutableChunk>(tmpPtr);
    }

    return fc;
}

ShaderExecutableChunk *ShaderExecutableChunkBase::createEmptyLocal(BitVector bFlags)
{
    ShaderExecutableChunk *returnValue;

    newPtr<ShaderExecutableChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderExecutableChunk *ShaderExecutableChunkBase::createEmpty(void)
{
    ShaderExecutableChunk *returnValue;

    newPtr<ShaderExecutableChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderExecutableChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderExecutableChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderExecutableChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderExecutableChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderExecutableChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderExecutableChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderExecutableChunkBase::shallowCopy(void) const
{
    ShaderExecutableChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderExecutableChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderExecutableChunkBase::ShaderExecutableChunkBase(void) :
    Inherited(),
    _mfVertexShader           (),
    _mfGeometryShader         (),
    _mfFragmentShader         (),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      (),
    _mfProceduralVariableLocations(),
    _sfGeometryVerticesOut    (UInt32(0)),
    _sfGeometryInputType      (GLenum(GL_TRIANGLES)),
    _sfGeometryOutputType     (GLenum(GL_TRIANGLE_STRIP)),
    _sfGLId                   (UInt32(0)),
    _sfPointSize              (bool(false))
{
}

ShaderExecutableChunkBase::ShaderExecutableChunkBase(const ShaderExecutableChunkBase &source) :
    Inherited(source),
    _mfVertexShader           (),
    _mfGeometryShader         (),
    _mfFragmentShader         (),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      (source._mfVariableLocations      ),
    _mfProceduralVariableLocations(source._mfProceduralVariableLocations),
    _sfGeometryVerticesOut    (source._sfGeometryVerticesOut    ),
    _sfGeometryInputType      (source._sfGeometryInputType      ),
    _sfGeometryOutputType     (source._sfGeometryOutputType     ),
    _sfGLId                   (source._sfGLId                   ),
    _sfPointSize              (source._sfPointSize              )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderExecutableChunkBase::~ShaderExecutableChunkBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool ShaderExecutableChunkBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == VariablesFieldId)
    {
        ShaderProgramVariables * pTypedChild =
            dynamic_cast<ShaderProgramVariables *>(pChild);

        if(pTypedChild != NULL)
        {
            if(pTypedChild == _sfVariables.getValue())
            {
                editSField(VariablesFieldMask);

                _sfVariables.setValue(NULL);

                return true;
            }

            FWARNING(("ShaderExecutableChunkBase::unlinkParent: Child <-> "
                      "Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void ShaderExecutableChunkBase::onCreate(const ShaderExecutableChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderExecutableChunk *pThis = static_cast<ShaderExecutableChunk *>(this);

        pThis->setVariables(source->getVariables());
    }
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleVertexShader    (void) const
{
    MFUncountedShaderProgramPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleVertexShader   (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleGeometryShader  (void) const
{
    MFUncountedShaderProgramPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleGeometryShader (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleFragmentShader  (void) const
{
    MFUncountedShaderProgramPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleFragmentShader (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleVariables       (void) const
{
    SFUnrecChildShaderProgramVariablesPtr::GetHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::GetHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleVariables      (void)
{
    SFUnrecChildShaderProgramVariablesPtr::EditHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::EditHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId)));

    returnValue->setSetMethod(
        boost::bind(&ShaderExecutableChunk::setVariables,
                    static_cast<ShaderExecutableChunk *>(this), _1));

    editSField(VariablesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleVariableLocations (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleVariableLocations(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId)));


    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleProceduralVariableLocations (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfProceduralVariableLocations,
             this->getType().getFieldDesc(ProceduralVariableLocationsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleProceduralVariableLocations(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfProceduralVariableLocations,
             this->getType().getFieldDesc(ProceduralVariableLocationsFieldId)));


    editMField(ProceduralVariableLocationsFieldMask, _mfProceduralVariableLocations);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleGeometryVerticesOut (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGeometryVerticesOut,
             this->getType().getFieldDesc(GeometryVerticesOutFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleGeometryVerticesOut(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGeometryVerticesOut,
             this->getType().getFieldDesc(GeometryVerticesOutFieldId)));


    editSField(GeometryVerticesOutFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleGeometryInputType (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGeometryInputType,
             this->getType().getFieldDesc(GeometryInputTypeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleGeometryInputType(void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGeometryInputType,
             this->getType().getFieldDesc(GeometryInputTypeFieldId)));


    editSField(GeometryInputTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleGeometryOutputType (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGeometryOutputType,
             this->getType().getFieldDesc(GeometryOutputTypeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleGeometryOutputType(void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGeometryOutputType,
             this->getType().getFieldDesc(GeometryOutputTypeFieldId)));


    editSField(GeometryOutputTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId)));


    editSField(GLIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableChunkBase::getHandlePointSize       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPointSize,
             this->getType().getFieldDesc(PointSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableChunkBase::editHandlePointSize      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPointSize,
             this->getType().getFieldDesc(PointSizeFieldId)));


    editSField(PointSizeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderExecutableChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderExecutableChunk *pThis = static_cast<ShaderExecutableChunk *>(this);

    pThis->execSync(static_cast<ShaderExecutableChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderExecutableChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderExecutableChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderExecutableChunk *>(pRefAspect),
                  dynamic_cast<const ShaderExecutableChunk *>(this));

    return returnValue;
}
#endif

void ShaderExecutableChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderExecutableChunk *>(this)->setVariables(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVariableLocations.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfProceduralVariableLocations.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderExecutableChunk *>::_type("ShaderExecutableChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderExecutableChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderExecutableChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderExecutableChunk *,
                           0);

OSG_END_NAMESPACE