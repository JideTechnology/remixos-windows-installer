/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the QtXMLPatterns module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef Patternist_MultiItemType_H
#define Patternist_MultiItemType_H

#include <QList>

#include "qitemtype_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QPatternist
{
    /**
     * @short Represents multiple types such as <tt>document()</tt> @em or <tt>xs:integer</tt>.
     *
     * In some situations two or more different types are allowed. For example, XQuery's
     * @c validate expression accepts document or element nodes(but not attribute
     * nodes, for example). MultiItemType is useful in such situations, its constructor
     * takes a list of ItemType instances which its member functions treats as a wholeness.
     *
     * For example, xdtTypeMatches() returns @c true if any of the represented types matches.
     *
     * @ingroup Patternist_types
     * @author Frans Englich <fenglich@trolltech.com>
     */
    class MultiItemType : public ItemType
    {
    public:
        /**
         * Creates a MultiItemType representing the types in @p typeList. @p typeList must
         * contain two or more types.
         */
        MultiItemType(const ItemType::List &typeList);

        /**
         * The display name are the names concatenated with "|" as separator. For example,
         * if this MultiItemType represents the types <tt>document()</tt>, <tt>xs:integer</tt>,
         * and <tt>xs:anyAtomicType</tt>, the display name is
         * "document() | xs:integer | xs:anyAtomicType".
         */
        virtual QString displayName(const NamePool::Ptr &np) const;

        /**
         * If any of the types this MultiItemType represents matches @p item, it is
         * considered a match.
         *
         * @returns @c true if any of the housed ItemType instances matches @p item, otherwise @c false
         */
        virtual bool itemMatches(const Item &item) const;

        /**
         * If any of the types this MultiItemType represents matches @p other, it is
         * considered a match.
         *
         * @returns @c true if any of the housed ItemType instances matches @p other, otherwise @c false
         */
        virtual bool xdtTypeMatches(const ItemType::Ptr &other) const;

        /**
         * @returns @c true if any of the represented types is a node type.
         */
        virtual bool isNodeType() const;

        /**
         * @returns @c true if any of the represented types is an atomic type.
         */
        virtual bool isAtomicType() const;

        /**
         * Determines the union type of all the represented types super types. For example,
         * if the represented types are <tt>xs:integer</tt>, <tt>document()</tt>
         * and <tt>xs:string</tt>, <tt>item()</tt> is returned.
         */
        virtual ItemType::Ptr xdtSuperType() const;

        /**
         * Determines the union type of all the represented types atomized types. For example,
         * if the represented types are <tt>xs:integer</tt> and <tt>document()</tt>,
         * <tt>xs:anyAtomicType</tt> is returned, because that's the super type of <tt>xs:integer</tt>
         * and <tt>xs:untypedAtomic</tt>.
         */
        virtual ItemType::Ptr atomizedType() const;

    private:
        const ItemType::List m_types;
        const ItemType::List::const_iterator m_end;
    };
}

QT_END_NAMESPACE

QT_END_HEADER

#endif
