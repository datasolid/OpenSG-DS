/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGTRANSFORMATIONELEMENTFIELDS_H_
#define _OSGTRANSFORMATIONELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TransformationElement;

OSG_GEN_CONTAINERPTR(TransformationElement);
/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<TransformationElement *, nsOSG> :
    public FieldTraitsFCPtrBase<TransformationElement *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TransformationElement *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTransformationElementPtr"; 
}


/*! \ingroup GrpGroupFieldTraits
 */
template <>
struct FieldTraits<TransformationElement *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<TransformationElement *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<TransformationElement *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformationElement *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildTransformationElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TransformationElement *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<TransformationElement *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTransformationElementPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TransformationElement *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<TransformationElement *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTransformationElementPtr;



/*! \ingroup GrpGroupFieldMFields */
typedef ChildPointerMField<
          TransformationElement *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildTransformationElementPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecTransformationElementPtr : 
    public PointerSField<TransformationElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecTransformationElementPtr : 
    public PointerSField<TransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakTransformationElementPtr :
    public PointerSField<TransformationElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedTransformationElementPtr :
    public PointerSField<TransformationElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecTransformationElementPtr :
    public PointerMField<TransformationElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecTransformationElementPtr :
    public PointerMField<TransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakTransformationElementPtr :
    public PointerMField<TransformationElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedTransformationElementPtr :
    public PointerMField<TransformationElement *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecChildTransformationElementPtr :
    public ChildPointerMField<
        TransformationElement *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTRANSFORMATIONELEMENTFIELDS_H_ */
