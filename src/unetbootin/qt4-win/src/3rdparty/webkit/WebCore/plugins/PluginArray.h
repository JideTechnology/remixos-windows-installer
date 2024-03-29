/*
    Copyright (C) 2008 Trolltech ASA

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef PluginArray_h
#define PluginArray_h

#include "Plugin.h"
#include <wtf/PassRefPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/Vector.h>

namespace KJS {
    class JSValue;
    class ExecState;
};

namespace WebCore {

    class AtomicString;
    class Frame;
    class PluginData;

    // FIXME: Generated JSPluginArray.cpp doesn't include JSPlugin.h for toJS
    KJS::JSValue* toJS(KJS::ExecState*, Plugin*);

    class PluginArray : public RefCounted<PluginArray> {
    public:
        PluginArray(Frame*);
        ~PluginArray();

        void disconnectFrame() { m_frame = 0; }

        unsigned length() const;
        PassRefPtr<Plugin> item(unsigned index);
        bool canGetItemsForName(const AtomicString& propertyName);
        PassRefPtr<Plugin> nameGetter(const AtomicString& propertyName);

        void refresh(bool reload);
    private:
        PluginData* getPluginData() const;

        Frame* m_frame;
    };
}

#endif
