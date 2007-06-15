/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ContainerPool!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ContainerPoolBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ContainerPoolBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ContainerPoolBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ContainerPool::_sfName field.

inline
std::string &ContainerPoolBase::editName(void)
{
    editSField(NameFieldMask);

    return _sfName.getValue();
}

//! Get the value of the ContainerPool::_sfName field.
inline
const std::string &ContainerPoolBase::getName(void) const
{
    return _sfName.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
std::string         &ContainerPoolBase::getName           (void)
{
    return this->editName           ();
}
#endif

//! Set the value of the ContainerPool::_sfName field.
inline
void ContainerPoolBase::setName(const std::string &value)
{
    editSField(NameFieldMask);

    _sfName.setValue(value);
}

//! Get the value of the \a index element the ContainerPool::_mfContainers field.
inline
FieldContainerPtrConst ContainerPoolBase::getContainers(const UInt32 index) const
{
    return _mfContainers[index];
}

//! Get the ContainerPool::_mfContainers field.
inline
const MFFieldContainerPtr &ContainerPoolBase::getContainers(void) const
{
    return _mfContainers;
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ContainerPoolBase::execSync (      ContainerPoolBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (NameFieldMask & whichField))
        _sfName.syncWith(pFrom->_sfName);

    if(FieldBits::NoField != (ContainersFieldMask & whichField))
        _mfContainers.syncWith(pFrom->_mfContainers,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
Char8 *ContainerPoolBase::getClassname(void)
{
    return "ContainerPool";
}
OSG_GEN_CONTAINERPTR(ContainerPool);

OSG_END_NAMESPACE

