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
 **     class VTKPolyDataMapper
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVTKPOLYDATAMAPPERBASE_H_
#define _OSGVTKPOLYDATAMAPPERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribVTKDef.h"

#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGNodeFields.h" // Root type
#include "OSGNodeFields.h" // GeoRoots type
#include "OSGGeometryFields.h" // Geometries type
#include "OSGChunkMaterialFields.h" // Materials type
#include "OSGMaterialChunkFields.h" // MaterialChunks type
#include "OSGGeoPnt3fPropertyFields.h" // Positions type
#include "OSGGeoUInt32PropertyFields.h" // Length type
#include "OSGGeoUInt8PropertyFields.h" // Types type
#include "OSGGeoColor4fPropertyFields.h" // Colors type
#include "OSGGeoVec3fPropertyFields.h" // Normals type

#include "OSGVTKPolyDataMapperFields.h"

OSG_BEGIN_NAMESPACE

class VTKPolyDataMapper;

//! \brief VTKPolyDataMapper Base Class.

class OSG_CONTRIBVTK_DLLMAPPING VTKPolyDataMapperBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(VTKPolyDataMapper);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        GeoRootsFieldId = RootFieldId + 1,
        GeometriesFieldId = GeoRootsFieldId + 1,
        MaterialsFieldId = GeometriesFieldId + 1,
        MaterialChunksFieldId = MaterialsFieldId + 1,
        PositionsFieldId = MaterialChunksFieldId + 1,
        LengthFieldId = PositionsFieldId + 1,
        TypesFieldId = LengthFieldId + 1,
        ColorsFieldId = TypesFieldId + 1,
        NormalsFieldId = ColorsFieldId + 1,
        NextFieldId = NormalsFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector GeoRootsFieldMask =
        (TypeTraits<BitVector>::One << GeoRootsFieldId);
    static const OSG::BitVector GeometriesFieldMask =
        (TypeTraits<BitVector>::One << GeometriesFieldId);
    static const OSG::BitVector MaterialsFieldMask =
        (TypeTraits<BitVector>::One << MaterialsFieldId);
    static const OSG::BitVector MaterialChunksFieldMask =
        (TypeTraits<BitVector>::One << MaterialChunksFieldId);
    static const OSG::BitVector PositionsFieldMask =
        (TypeTraits<BitVector>::One << PositionsFieldId);
    static const OSG::BitVector LengthFieldMask =
        (TypeTraits<BitVector>::One << LengthFieldId);
    static const OSG::BitVector TypesFieldMask =
        (TypeTraits<BitVector>::One << TypesFieldId);
    static const OSG::BitVector ColorsFieldMask =
        (TypeTraits<BitVector>::One << ColorsFieldId);
    static const OSG::BitVector NormalsFieldMask =
        (TypeTraits<BitVector>::One << NormalsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecNodePtr      *getSFRoot           (void) const;
                  SFUnrecNodePtr      *editSFRoot           (void);
            const MFUnrecNodePtr      *getMFGeoRoots       (void) const;
                  MFUnrecNodePtr      *editMFGeoRoots       (void);
            const MFUnrecGeometryPtr  *getMFGeometries     (void) const;
                  MFUnrecGeometryPtr  *editMFGeometries     (void);
            const MFUnrecChunkMaterialPtr *getMFMaterials      (void) const;
                  MFUnrecChunkMaterialPtr *editMFMaterials      (void);
            const MFUnrecMaterialChunkPtr *getMFMaterialChunks (void) const;
                  MFUnrecMaterialChunkPtr *editMFMaterialChunks (void);
            const MFUnrecGeoPnt3fPropertyPtr *getMFPositions      (void) const;
                  MFUnrecGeoPnt3fPropertyPtr *editMFPositions      (void);
            const MFUnrecGeoUInt32PropertyPtr *getMFLength         (void) const;
                  MFUnrecGeoUInt32PropertyPtr *editMFLength         (void);
            const MFUnrecGeoUInt8PropertyPtr *getMFTypes          (void) const;
                  MFUnrecGeoUInt8PropertyPtr *editMFTypes          (void);
            const MFUnrecGeoColor4fPropertyPtr *getMFColors         (void) const;
                  MFUnrecGeoColor4fPropertyPtr *editMFColors         (void);
            const MFUnrecGeoVec3fPropertyPtr *getMFNormals        (void) const;
                  MFUnrecGeoVec3fPropertyPtr *editMFNormals        (void);


                  Node * getRoot           (void) const;

                  Node * getGeoRoots       (const UInt32 index) const;

                  Geometry * getGeometries     (const UInt32 index) const;

                  ChunkMaterial * getMaterials      (const UInt32 index) const;

                  MaterialChunk * getMaterialChunks (const UInt32 index) const;

                  GeoPnt3fProperty * getPositions      (const UInt32 index) const;

                  GeoUInt32Property * getLength         (const UInt32 index) const;

                  GeoUInt8Property * getTypes          (const UInt32 index) const;

                  GeoColor4fProperty * getColors         (const UInt32 index) const;

                  GeoVec3fProperty * getNormals        (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (Node * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToGeoRoots            (Node * const value   );
    void assignGeoRoots           (const MFUnrecNodePtr    &value);
    void removeFromGeoRoots (UInt32               uiIndex );
    void removeObjFromGeoRoots(Node * const value   );
    void clearGeoRoots              (void                         );

    void pushToGeometries           (Geometry * const value   );
    void assignGeometries          (const MFUnrecGeometryPtr &value);
    void removeFromGeometries (UInt32               uiIndex );
    void removeObjFromGeometries(Geometry * const value   );
    void clearGeometries            (void                         );

    void pushToMaterials           (ChunkMaterial * const value   );
    void assignMaterials          (const MFUnrecChunkMaterialPtr &value);
    void removeFromMaterials (UInt32               uiIndex );
    void removeObjFromMaterials(ChunkMaterial * const value   );
    void clearMaterials             (void                         );

    void pushToMaterialChunks           (MaterialChunk * const value   );
    void assignMaterialChunks          (const MFUnrecMaterialChunkPtr &value);
    void removeFromMaterialChunks (UInt32               uiIndex );
    void removeObjFromMaterialChunks(MaterialChunk * const value   );
    void clearMaterialChunks            (void                         );

    void pushToPositions           (GeoPnt3fProperty * const value   );
    void assignPositions          (const MFUnrecGeoPnt3fPropertyPtr &value);
    void removeFromPositions (UInt32               uiIndex );
    void removeObjFromPositions(GeoPnt3fProperty * const value   );
    void clearPositions             (void                         );

    void pushToLength              (GeoUInt32Property * const value   );
    void assignLength             (const MFUnrecGeoUInt32PropertyPtr &value);
    void removeFromLength (UInt32               uiIndex );
    void removeObjFromLength(GeoUInt32Property * const value   );
    void clearLength                (void                         );

    void pushToTypes               (GeoUInt8Property * const value   );
    void assignTypes              (const MFUnrecGeoUInt8PropertyPtr &value);
    void removeFromTypes (UInt32               uiIndex );
    void removeObjFromTypes(GeoUInt8Property * const value   );
    void clearTypes                 (void                         );

    void pushToColors              (GeoColor4fProperty * const value   );
    void assignColors             (const MFUnrecGeoColor4fPropertyPtr &value);
    void removeFromColors (UInt32               uiIndex );
    void removeObjFromColors(GeoColor4fProperty * const value   );
    void clearColors                (void                         );

    void pushToNormals             (GeoVec3fProperty * const value   );
    void assignNormals            (const MFUnrecGeoVec3fPropertyPtr &value);
    void removeFromNormals (UInt32               uiIndex );
    void removeObjFromNormals(GeoVec3fProperty * const value   );
    void clearNormals               (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  VTKPolyDataMapperTransitPtr  create          (void);
    static  VTKPolyDataMapper           *createEmpty     (void);

    static  VTKPolyDataMapperTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  VTKPolyDataMapper            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecNodePtr    _sfRoot;
    MFUnrecNodePtr    _mfGeoRoots;
    MFUnrecGeometryPtr _mfGeometries;
    MFUnrecChunkMaterialPtr _mfMaterials;
    MFUnrecMaterialChunkPtr _mfMaterialChunks;
    MFUnrecGeoPnt3fPropertyPtr _mfPositions;
    MFUnrecGeoUInt32PropertyPtr _mfLength;
    MFUnrecGeoUInt8PropertyPtr _mfTypes;
    MFUnrecGeoColor4fPropertyPtr _mfColors;
    MFUnrecGeoVec3fPropertyPtr _mfNormals;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    VTKPolyDataMapperBase(void);
    VTKPolyDataMapperBase(const VTKPolyDataMapperBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~VTKPolyDataMapperBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const VTKPolyDataMapper *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleGeoRoots        (void) const;
    EditFieldHandlePtr editHandleGeoRoots       (void);
    GetFieldHandlePtr  getHandleGeometries      (void) const;
    EditFieldHandlePtr editHandleGeometries     (void);
    GetFieldHandlePtr  getHandleMaterials       (void) const;
    EditFieldHandlePtr editHandleMaterials      (void);
    GetFieldHandlePtr  getHandleMaterialChunks  (void) const;
    EditFieldHandlePtr editHandleMaterialChunks (void);
    GetFieldHandlePtr  getHandlePositions       (void) const;
    EditFieldHandlePtr editHandlePositions      (void);
    GetFieldHandlePtr  getHandleLength          (void) const;
    EditFieldHandlePtr editHandleLength         (void);
    GetFieldHandlePtr  getHandleTypes           (void) const;
    EditFieldHandlePtr editHandleTypes          (void);
    GetFieldHandlePtr  getHandleColors          (void) const;
    EditFieldHandlePtr editHandleColors         (void);
    GetFieldHandlePtr  getHandleNormals         (void) const;
    EditFieldHandlePtr editHandleNormals        (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      VTKPolyDataMapperBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const VTKPolyDataMapperBase &source);
};

typedef VTKPolyDataMapperBase *VTKPolyDataMapperBaseP;

typedef CoredNodeRefPtr  <VTKPolyDataMapper> VTKPolyDataMapperNodeRefPtr;
typedef CoredNodeMTRefPtr<VTKPolyDataMapper> VTKPolyDataMapperNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGVTKPOLYDATAMAPPERBASE_H_ */
