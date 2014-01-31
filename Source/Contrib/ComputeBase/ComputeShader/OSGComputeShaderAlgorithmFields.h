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


#ifndef _OSGCOMPUTESHADERALGORITHMFIELDS_H_
#define _OSGCOMPUTESHADERALGORITHMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribComputeBaseDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ComputeShaderAlgorithm;

OSG_GEN_CONTAINERPTR(ComputeShaderAlgorithm);
/*! \ingroup GrpContribComputeBaseFieldTraits
    \ingroup GrpLibOSGContribComputeBase
 */
template <>
struct FieldTraits<ComputeShaderAlgorithm *, nsOSG> :
    public FieldTraitsFCPtrBase<ComputeShaderAlgorithm *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ComputeShaderAlgorithm *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCOMPUTEBASE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComputeShaderAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeShaderAlgorithm *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComputeShaderAlgorithmPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeShaderAlgorithm *,
                      RecordedRefCountPolicy, nsOSG  > SFRecComputeShaderAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeShaderAlgorithm *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecComputeShaderAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeShaderAlgorithm *,
                      WeakRefCountPolicy, nsOSG      > SFWeakComputeShaderAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeShaderAlgorithm *,
                      NoRefCountPolicy, nsOSG        > SFUncountedComputeShaderAlgorithmPtr;


/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeShaderAlgorithm *,
                      RecordedRefCountPolicy, nsOSG  > MFRecComputeShaderAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeShaderAlgorithm *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecComputeShaderAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeShaderAlgorithm *,
                      WeakRefCountPolicy, nsOSG      > MFWeakComputeShaderAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeShaderAlgorithm *,
                      NoRefCountPolicy, nsOSG        > MFUncountedComputeShaderAlgorithmPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFRecComputeShaderAlgorithmPtr : 
    public PointerSField<ComputeShaderAlgorithm *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFUnrecComputeShaderAlgorithmPtr : 
    public PointerSField<ComputeShaderAlgorithm *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFWeakComputeShaderAlgorithmPtr :
    public PointerSField<ComputeShaderAlgorithm *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFUncountedComputeShaderAlgorithmPtr :
    public PointerSField<ComputeShaderAlgorithm *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFRecComputeShaderAlgorithmPtr :
    public PointerMField<ComputeShaderAlgorithm *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFUnrecComputeShaderAlgorithmPtr :
    public PointerMField<ComputeShaderAlgorithm *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFWeakComputeShaderAlgorithmPtr :
    public PointerMField<ComputeShaderAlgorithm *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFUncountedComputeShaderAlgorithmPtr :
    public PointerMField<ComputeShaderAlgorithm *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMPUTESHADERALGORITHMFIELDS_H_ */