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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGHARDWARESKINNINGDATAATTACHMENTFIELDS_H_
#define _OSGHARDWARESKINNINGDATAATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class HardwareSkinningDataAttachment;

OSG_GEN_CONTAINERPTR(HardwareSkinningDataAttachment);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<HardwareSkinningDataAttachment *> :
    public FieldTraitsFCPtrBase<HardwareSkinningDataAttachment *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<HardwareSkinningDataAttachment *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFHardwareSkinningDataAttachmentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFHardwareSkinningDataAttachmentPtr"; }
};

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakHardwareSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<HardwareSkinningDataAttachment *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdHardwareSkinningDataAttachmentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<HardwareSkinningDataAttachment *,
                      RecordedRefCountPolicy  > SFRecHardwareSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<HardwareSkinningDataAttachment *,
                      UnrecordedRefCountPolicy> SFUnrecHardwareSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<HardwareSkinningDataAttachment *,
                      WeakRefCountPolicy      > SFWeakHardwareSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<HardwareSkinningDataAttachment *,
                      NoRefCountPolicy        > SFUncountedHardwareSkinningDataAttachmentPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<HardwareSkinningDataAttachment *,
                      RecordedRefCountPolicy  > MFRecHardwareSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<HardwareSkinningDataAttachment *,
                      UnrecordedRefCountPolicy> MFUnrecHardwareSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<HardwareSkinningDataAttachment *,
                      WeakRefCountPolicy      > MFWeakHardwareSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<HardwareSkinningDataAttachment *,
                      NoRefCountPolicy        > MFUncountedHardwareSkinningDataAttachmentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecHardwareSkinningDataAttachmentPtr : 
    public PointerSField<HardwareSkinningDataAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecHardwareSkinningDataAttachmentPtr : 
    public PointerSField<HardwareSkinningDataAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakHardwareSkinningDataAttachmentPtr :
    public PointerSField<HardwareSkinningDataAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedHardwareSkinningDataAttachmentPtr :
    public PointerSField<HardwareSkinningDataAttachment *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecHardwareSkinningDataAttachmentPtr :
    public PointerMField<HardwareSkinningDataAttachment *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecHardwareSkinningDataAttachmentPtr :
    public PointerMField<HardwareSkinningDataAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakHardwareSkinningDataAttachmentPtr :
    public PointerMField<HardwareSkinningDataAttachment *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedHardwareSkinningDataAttachmentPtr :
    public PointerMField<HardwareSkinningDataAttachment *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGHARDWARESKINNINGDATAATTACHMENTFIELDS_H_ */