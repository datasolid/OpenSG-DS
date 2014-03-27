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
 **     class ClusterWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCLUSTERWINDOWBASE_H_
#define _OSGCLUSTERWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGClusterDef.h"

//#include "OSGBaseTypes.h"

#include "OSGWindow.h" // Parent

#include "OSGBaseFields.h"              // Servers type
#include "OSGSysFields.h"               // ServerIds type
#include "OSGWindowFields.h"            // ClientWindow type
#include "OSGImageComposerFields.h"     // Composer type

#include "OSGClusterWindowFields.h"

OSG_BEGIN_NAMESPACE


class ClusterWindow;

//! \brief ClusterWindow Base Class.

class OSG_CLUSTER_DLLMAPPING ClusterWindowBase : public Window
{
  public:

    typedef Window Inherited;
    typedef Window ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ClusterWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ServersFieldId = Inherited::NextFieldId,
        ServerIdsFieldId = ServersFieldId + 1,
        ConnectionTypeFieldId = ServerIdsFieldId + 1,
        ConnectionInterfaceFieldId = ConnectionTypeFieldId + 1,
        ConnectionDestinationFieldId = ConnectionInterfaceFieldId + 1,
        ConnectionParamsFieldId = ConnectionDestinationFieldId + 1,
        ServicePortFieldId = ConnectionParamsFieldId + 1,
        ServiceAddressFieldId = ServicePortFieldId + 1,
        ServiceInterfaceFieldId = ServiceAddressFieldId + 1,
        ClientWindowFieldId = ServiceInterfaceFieldId + 1,
        InterleaveFieldId = ClientWindowFieldId + 1,
        FrameCountFieldId = InterleaveFieldId + 1,
        ComposerFieldId = FrameCountFieldId + 1,
        AutostartFieldId = ComposerFieldId + 1,
        NextFieldId = AutostartFieldId + 1
    };

    static const OSG::BitVector ServersFieldMask =
        (TypeTraits<BitVector>::One << ServersFieldId);
    static const OSG::BitVector ServerIdsFieldMask =
        (TypeTraits<BitVector>::One << ServerIdsFieldId);
    static const OSG::BitVector ConnectionTypeFieldMask =
        (TypeTraits<BitVector>::One << ConnectionTypeFieldId);
    static const OSG::BitVector ConnectionInterfaceFieldMask =
        (TypeTraits<BitVector>::One << ConnectionInterfaceFieldId);
    static const OSG::BitVector ConnectionDestinationFieldMask =
        (TypeTraits<BitVector>::One << ConnectionDestinationFieldId);
    static const OSG::BitVector ConnectionParamsFieldMask =
        (TypeTraits<BitVector>::One << ConnectionParamsFieldId);
    static const OSG::BitVector ServicePortFieldMask =
        (TypeTraits<BitVector>::One << ServicePortFieldId);
    static const OSG::BitVector ServiceAddressFieldMask =
        (TypeTraits<BitVector>::One << ServiceAddressFieldId);
    static const OSG::BitVector ServiceInterfaceFieldMask =
        (TypeTraits<BitVector>::One << ServiceInterfaceFieldId);
    static const OSG::BitVector ClientWindowFieldMask =
        (TypeTraits<BitVector>::One << ClientWindowFieldId);
    static const OSG::BitVector InterleaveFieldMask =
        (TypeTraits<BitVector>::One << InterleaveFieldId);
    static const OSG::BitVector FrameCountFieldMask =
        (TypeTraits<BitVector>::One << FrameCountFieldId);
    static const OSG::BitVector ComposerFieldMask =
        (TypeTraits<BitVector>::One << ComposerFieldId);
    static const OSG::BitVector AutostartFieldMask =
        (TypeTraits<BitVector>::One << AutostartFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFString          MFServersType;
    typedef MFUInt32          MFServerIdsType;
    typedef SFString          SFConnectionTypeType;
    typedef SFString          SFConnectionInterfaceType;
    typedef SFString          SFConnectionDestinationType;
    typedef SFString          SFConnectionParamsType;
    typedef SFUInt32          SFServicePortType;
    typedef SFString          SFServiceAddressType;
    typedef SFString          SFServiceInterfaceType;
    typedef SFUnrecWindowPtr  SFClientWindowType;
    typedef SFUInt32          SFInterleaveType;
    typedef SFUInt32          SFFrameCountType;
    typedef SFUnrecImageComposerPtr SFComposerType;
    typedef MFString          MFAutostartType;

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


                  MFString            *editMFServers        (void);
            const MFString            *getMFServers         (void) const;

                  MFUInt32            *editMFServerIds      (void);
            const MFUInt32            *getMFServerIds       (void) const;

                  SFString            *editSFConnectionType (void);
            const SFString            *getSFConnectionType  (void) const;

                  SFString            *editSFConnectionInterface(void);
            const SFString            *getSFConnectionInterface (void) const;

                  SFString            *editSFConnectionDestination(void);
            const SFString            *getSFConnectionDestination (void) const;

                  SFString            *editSFConnectionParams(void);
            const SFString            *getSFConnectionParams (void) const;

                  SFUInt32            *editSFServicePort    (void);
            const SFUInt32            *getSFServicePort     (void) const;

                  SFString            *editSFServiceAddress (void);
            const SFString            *getSFServiceAddress  (void) const;

                  SFString            *editSFServiceInterface(void);
            const SFString            *getSFServiceInterface (void) const;
            const SFUnrecWindowPtr    *getSFClientWindow   (void) const;
                  SFUnrecWindowPtr    *editSFClientWindow   (void);

                  SFUInt32            *editSFInterleave     (void);
            const SFUInt32            *getSFInterleave      (void) const;

                  SFUInt32            *editSFFrameCount     (void);
            const SFUInt32            *getSFFrameCount      (void) const;
            const SFUnrecImageComposerPtr *getSFComposer       (void) const;
                  SFUnrecImageComposerPtr *editSFComposer       (void);

                  MFString            *editMFAutostart      (void);
            const MFString            *getMFAutostart       (void) const;


            MFString           ::reference       editServers        (const UInt32 index);
            const std::string         &getServers         (const UInt32 index) const;

            MFUInt32           ::reference       editServerIds      (const UInt32 index);
                  UInt32               getServerIds       (const UInt32 index) const;

                  std::string         &editConnectionType (void);
            const std::string         &getConnectionType  (void) const;

                  std::string         &editConnectionInterface(void);
            const std::string         &getConnectionInterface (void) const;

                  std::string         &editConnectionDestination(void);
            const std::string         &getConnectionDestination (void) const;

                  std::string         &editConnectionParams(void);
            const std::string         &getConnectionParams (void) const;

                  UInt32              &editServicePort    (void);
                  UInt32               getServicePort     (void) const;

                  std::string         &editServiceAddress (void);
            const std::string         &getServiceAddress  (void) const;

                  std::string         &editServiceInterface(void);
            const std::string         &getServiceInterface (void) const;

                  Window * getClientWindow   (void) const;

                  UInt32              &editInterleave     (void);
                  UInt32               getInterleave      (void) const;

                  UInt32              &editFrameCount     (void);
                  UInt32               getFrameCount      (void) const;

                  ImageComposer * getComposer       (void) const;

            MFString           ::reference       editAutostart      (const UInt32 index);
            const std::string         &getAutostart       (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setConnectionType (const std::string &value);
            void setConnectionInterface(const std::string &value);
            void setConnectionDestination(const std::string &value);
            void setConnectionParams(const std::string &value);
            void setServicePort    (const UInt32 value);
            void setServiceAddress (const std::string &value);
            void setServiceInterface(const std::string &value);
            void setClientWindow   (Window * const value);
            void setInterleave     (const UInt32 value);
            void setFrameCount     (const UInt32 value);
            void setComposer       (ImageComposer * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ClusterWindowTransitPtr  create          (void);
    static  ClusterWindow           *createEmpty     (void);

    static  ClusterWindowTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ClusterWindow            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ClusterWindowTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFString          _mfServers;
    MFUInt32          _mfServerIds;
    SFString          _sfConnectionType;
    SFString          _sfConnectionInterface;
    SFString          _sfConnectionDestination;
    SFString          _sfConnectionParams;
    SFUInt32          _sfServicePort;
    SFString          _sfServiceAddress;
    SFString          _sfServiceInterface;
    SFUnrecWindowPtr  _sfClientWindow;
    SFUInt32          _sfInterleave;
    SFUInt32          _sfFrameCount;
    SFUnrecImageComposerPtr _sfComposer;
    MFString          _mfAutostart;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ClusterWindowBase(void);
    ClusterWindowBase(const ClusterWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ClusterWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ClusterWindow *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleServers         (void) const;
     EditFieldHandlePtr editHandleServers        (void);
     GetFieldHandlePtr  getHandleServerIds       (void) const;
     EditFieldHandlePtr editHandleServerIds      (void);
     GetFieldHandlePtr  getHandleConnectionType  (void) const;
     EditFieldHandlePtr editHandleConnectionType (void);
     GetFieldHandlePtr  getHandleConnectionInterface (void) const;
     EditFieldHandlePtr editHandleConnectionInterface(void);
     GetFieldHandlePtr  getHandleConnectionDestination (void) const;
     EditFieldHandlePtr editHandleConnectionDestination(void);
     GetFieldHandlePtr  getHandleConnectionParams (void) const;
     EditFieldHandlePtr editHandleConnectionParams(void);
     GetFieldHandlePtr  getHandleServicePort     (void) const;
     EditFieldHandlePtr editHandleServicePort    (void);
     GetFieldHandlePtr  getHandleServiceAddress  (void) const;
     EditFieldHandlePtr editHandleServiceAddress (void);
     GetFieldHandlePtr  getHandleServiceInterface (void) const;
     EditFieldHandlePtr editHandleServiceInterface(void);
     GetFieldHandlePtr  getHandleClientWindow    (void) const;
     EditFieldHandlePtr editHandleClientWindow   (void);
     GetFieldHandlePtr  getHandleInterleave      (void) const;
     EditFieldHandlePtr editHandleInterleave     (void);
     GetFieldHandlePtr  getHandleFrameCount      (void) const;
     EditFieldHandlePtr editHandleFrameCount     (void);
     GetFieldHandlePtr  getHandleComposer        (void) const;
     EditFieldHandlePtr editHandleComposer       (void);
     GetFieldHandlePtr  getHandleAutostart       (void) const;
     EditFieldHandlePtr editHandleAutostart      (void);

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

            void execSync (      ClusterWindowBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
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
    void operator =(const ClusterWindowBase &source);
};

typedef ClusterWindowBase *ClusterWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCLUSTERWINDOWBASE_H_ */
