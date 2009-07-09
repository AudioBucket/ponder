/****************************************************************************
**
** Copyright (C) 2009 TECHNOGERMA Systems France and/or its subsidiary(-ies).
** Contact: Technogerma Systems France Information (contact@technogerma.fr)
**
** This file is part of the CAMP library.
**
** Commercial Usage
** Licensees holding valid CAMP Commercial licenses may use this file in
** accordance with the CAMP Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and TECHNOGERMA Systems France.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL3.txt included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at contact@technogerma.fr.
**
****************************************************************************/



namespace camp
{
//-------------------------------------------------------------------------------------------------
inline std::size_t enumCount()
{
    return detail::EnumManager::instance().count();
}

//-------------------------------------------------------------------------------------------------
template <typename T>
std::size_t enumCount()
{
    return detail::EnumManager::instance().count(detail::typeId<T>());
}

//-------------------------------------------------------------------------------------------------
template <typename T>
std::size_t enumCount(T value)
{
    return detail::EnumManager::instance().count(detail::typeId(value));
}

//-------------------------------------------------------------------------------------------------
inline const Enum& enumByIndex(std::size_t index)
{
    return detail::EnumManager::instance().getByIndex(index);
}

//-------------------------------------------------------------------------------------------------
template <typename T>
const Enum& enumByType(std::size_t index)
{
    return detail::EnumManager::instance().getById(detail::typeId<T>(), index);
}

//-------------------------------------------------------------------------------------------------
template <typename T>
const Enum& enumByObject(T value, std::size_t index)
{
    return detail::EnumManager::instance().getById(detail::typeId(value), index);
}

//-------------------------------------------------------------------------------------------------
inline const Enum& enumByName(const std::string& name)
{
    return detail::EnumManager::instance().getByName(name);
}

//-------------------------------------------------------------------------------------------------
template <typename T>
const Enum* enumByTypeSafe(std::size_t index)
{
    try
    {
        return &detail::EnumManager::instance().getById(detail::safeTypeId<T>(), index);
    }
    catch (Error&)
    {
        return 0;
    }
}

} // namespace camp
