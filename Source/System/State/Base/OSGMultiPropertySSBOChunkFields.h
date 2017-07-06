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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMULTIPROPERTYSSBOCHUNKFIELDS_H_
#define _OSGMULTIPROPERTYSSBOCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class MultiPropertySSBOChunk;

OSG_GEN_CONTAINERPTR(MultiPropertySSBOChunk);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<MultiPropertySSBOChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<MultiPropertySSBOChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<MultiPropertySSBOChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMultiPropertySSBOChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiPropertySSBOChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMultiPropertySSBOChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertySSBOChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecMultiPropertySSBOChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertySSBOChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecMultiPropertySSBOChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertySSBOChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakMultiPropertySSBOChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiPropertySSBOChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedMultiPropertySSBOChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertySSBOChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecMultiPropertySSBOChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertySSBOChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecMultiPropertySSBOChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertySSBOChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakMultiPropertySSBOChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiPropertySSBOChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedMultiPropertySSBOChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecMultiPropertySSBOChunkPtr : 
    public PointerSField<MultiPropertySSBOChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecMultiPropertySSBOChunkPtr : 
    public PointerSField<MultiPropertySSBOChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakMultiPropertySSBOChunkPtr :
    public PointerSField<MultiPropertySSBOChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedMultiPropertySSBOChunkPtr :
    public PointerSField<MultiPropertySSBOChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecMultiPropertySSBOChunkPtr :
    public PointerMField<MultiPropertySSBOChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecMultiPropertySSBOChunkPtr :
    public PointerMField<MultiPropertySSBOChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakMultiPropertySSBOChunkPtr :
    public PointerMField<MultiPropertySSBOChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedMultiPropertySSBOChunkPtr :
    public PointerMField<MultiPropertySSBOChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMULTIPROPERTYSSBOCHUNKFIELDS_H_ */