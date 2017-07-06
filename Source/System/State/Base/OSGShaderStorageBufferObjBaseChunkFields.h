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


#ifndef _OSGSHADERSTORAGEBUFFEROBJBASECHUNKFIELDS_H_
#define _OSGSHADERSTORAGEBUFFEROBJBASECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderStorageBufferObjBaseChunk;

OSG_GEN_CONTAINERPTR(ShaderStorageBufferObjBaseChunk);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderStorageBufferObjBaseChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderStorageBufferObjBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjBaseChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderStorageBufferObjBaseChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjBaseChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderStorageBufferObjBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjBaseChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderStorageBufferObjBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjBaseChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderStorageBufferObjBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjBaseChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderStorageBufferObjBaseChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjBaseChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderStorageBufferObjBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjBaseChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderStorageBufferObjBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjBaseChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderStorageBufferObjBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjBaseChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderStorageBufferObjBaseChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderStorageBufferObjBaseChunkPtr : 
    public PointerSField<ShaderStorageBufferObjBaseChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderStorageBufferObjBaseChunkPtr : 
    public PointerSField<ShaderStorageBufferObjBaseChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderStorageBufferObjBaseChunkPtr :
    public PointerSField<ShaderStorageBufferObjBaseChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderStorageBufferObjBaseChunkPtr :
    public PointerSField<ShaderStorageBufferObjBaseChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderStorageBufferObjBaseChunkPtr :
    public PointerMField<ShaderStorageBufferObjBaseChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderStorageBufferObjBaseChunkPtr :
    public PointerMField<ShaderStorageBufferObjBaseChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderStorageBufferObjBaseChunkPtr :
    public PointerMField<ShaderStorageBufferObjBaseChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderStorageBufferObjBaseChunkPtr :
    public PointerMField<ShaderStorageBufferObjBaseChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERSTORAGEBUFFEROBJBASECHUNKFIELDS_H_ */