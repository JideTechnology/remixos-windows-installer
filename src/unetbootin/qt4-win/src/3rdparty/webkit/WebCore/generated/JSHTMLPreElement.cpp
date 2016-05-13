/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

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

#include "config.h"

#include "JSHTMLPreElement.h"

#include <wtf/GetPtr.h>

#include "HTMLPreElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLPreElementTableEntries[] =
{
    { "wrap", JSHTMLPreElement::WrapAttrNum, DontDelete, 0, &JSHTMLPreElementTableEntries[3] },
    { "width", JSHTMLPreElement::WidthAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "constructor", JSHTMLPreElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLPreElementTable = 
{
    2, 4, JSHTMLPreElementTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSHTMLPreElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLPreElementConstructorTable = 
{
    2, 1, JSHTMLPreElementConstructorTableEntries, 1
};

class JSHTMLPreElementConstructor : public DOMObject {
public:
    JSHTMLPreElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLPreElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLPreElementConstructor::info = { "HTMLPreElementConstructor", 0, &JSHTMLPreElementConstructorTable, 0 };

bool JSHTMLPreElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLPreElementConstructor, DOMObject>(exec, &JSHTMLPreElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLPreElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLPreElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLPreElementPrototypeTable = 
{
    2, 1, JSHTMLPreElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLPreElementPrototype::info = { "HTMLPreElementPrototype", 0, &JSHTMLPreElementPrototypeTable, 0 };

JSObject* JSHTMLPreElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLPreElementPrototype>(exec, "[[JSHTMLPreElement.prototype]]");
}

const ClassInfo JSHTMLPreElement::info = { "HTMLPreElement", &JSHTMLElement::info, &JSHTMLPreElementTable, 0 };

JSHTMLPreElement::JSHTMLPreElement(ExecState* exec, HTMLPreElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLPreElementPrototype::self(exec));
}

bool JSHTMLPreElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLPreElement, JSHTMLElement>(exec, &JSHTMLPreElementTable, this, propertyName, slot);
}

JSValue* JSHTMLPreElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case WidthAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());

        return jsNumber(imp->width());
    }
    case WrapAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());

        return jsBoolean(imp->wrap());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLPreElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLPreElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLPreElementTable, this);
}

void JSHTMLPreElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case WidthAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());

        imp->setWidth(value->toInt32(exec));
        break;
    }
    case WrapAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());

        imp->setWrap(value->toBoolean(exec));
        break;
    }
    }
}

JSValue* JSHTMLPreElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLPreElementConstructor>(exec, "[[HTMLPreElement.constructor]]");
}

}