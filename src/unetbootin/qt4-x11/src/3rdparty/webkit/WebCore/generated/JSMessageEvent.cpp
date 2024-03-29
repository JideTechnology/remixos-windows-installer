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

#include "JSMessageEvent.h"

#include <wtf/GetPtr.h>

#include "DOMWindow.h"
#include "JSDOMWindow.h"
#include "JSMessagePort.h"
#include "KURL.h"
#include "MessageEvent.h"
#include "MessagePort.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMessageEvent)

/* Hash table */

static const HashTableValue JSMessageEventTableValues[7] =
{
    { "data", DontDelete|ReadOnly, (intptr_t)jsMessageEventData, (intptr_t)0 },
    { "origin", DontDelete|ReadOnly, (intptr_t)jsMessageEventOrigin, (intptr_t)0 },
    { "lastEventId", DontDelete|ReadOnly, (intptr_t)jsMessageEventLastEventId, (intptr_t)0 },
    { "source", DontDelete|ReadOnly, (intptr_t)jsMessageEventSource, (intptr_t)0 },
    { "messagePort", DontDelete|ReadOnly, (intptr_t)jsMessageEventMessagePort, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsMessageEventConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMessageEventTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSMessageEventTableValues, 0 };
#else
    { 16, 15, JSMessageEventTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSMessageEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSMessageEventConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSMessageEventConstructorTableValues, 0 };
#else
    { 1, 0, JSMessageEventConstructorTableValues, 0 };
#endif

class JSMessageEventConstructor : public DOMObject {
public:
    JSMessageEventConstructor(ExecState* exec)
        : DOMObject(JSMessageEventConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSMessageEventPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSMessageEventConstructor::s_info = { "MessageEventConstructor", 0, &JSMessageEventConstructorTable, 0 };

bool JSMessageEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMessageEventConstructor, DOMObject>(exec, &JSMessageEventConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSMessageEventPrototypeTableValues[2] =
{
    { "initMessageEvent", DontDelete|Function, (intptr_t)jsMessageEventPrototypeFunctionInitMessageEvent, (intptr_t)8 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMessageEventPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSMessageEventPrototypeTableValues, 0 };
#else
    { 2, 1, JSMessageEventPrototypeTableValues, 0 };
#endif

static const HashTable* getJSMessageEventPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSMessageEventPrototypeTable);
}
const ClassInfo JSMessageEventPrototype::s_info = { "MessageEventPrototype", 0, 0, getJSMessageEventPrototypeTable };

JSObject* JSMessageEventPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSMessageEvent>(exec);
}

bool JSMessageEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSMessageEventPrototypeTable(exec), this, propertyName, slot);
}

static const HashTable* getJSMessageEventTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSMessageEventTable);
}
const ClassInfo JSMessageEvent::s_info = { "MessageEvent", &JSEvent::s_info, 0, getJSMessageEventTable };

JSMessageEvent::JSMessageEvent(PassRefPtr<Structure> structure, PassRefPtr<MessageEvent> impl)
    : JSEvent(structure, impl)
{
}

JSObject* JSMessageEvent::createPrototype(ExecState* exec)
{
    return new (exec) JSMessageEventPrototype(JSMessageEventPrototype::createStructure(JSEventPrototype::self(exec)));
}

bool JSMessageEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMessageEvent, Base>(exec, getJSMessageEventTable(exec), this, propertyName, slot);
}

JSValuePtr jsMessageEventData(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    MessageEvent* imp = static_cast<MessageEvent*>(static_cast<JSMessageEvent*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->data());
}

JSValuePtr jsMessageEventOrigin(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    MessageEvent* imp = static_cast<MessageEvent*>(static_cast<JSMessageEvent*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->origin());
}

JSValuePtr jsMessageEventLastEventId(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    MessageEvent* imp = static_cast<MessageEvent*>(static_cast<JSMessageEvent*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->lastEventId());
}

JSValuePtr jsMessageEventSource(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    MessageEvent* imp = static_cast<MessageEvent*>(static_cast<JSMessageEvent*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->source()));
}

JSValuePtr jsMessageEventMessagePort(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    MessageEvent* imp = static_cast<MessageEvent*>(static_cast<JSMessageEvent*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->messagePort()));
}

JSValuePtr jsMessageEventConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSMessageEvent*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValuePtr JSMessageEvent::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSMessageEventConstructor>(exec);
}

JSValuePtr jsMessageEventPrototypeFunctionInitMessageEvent(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSMessageEvent::s_info))
        return throwError(exec, TypeError);
    JSMessageEvent* castedThisObj = static_cast<JSMessageEvent*>(asObject(thisValue));
    MessageEvent* imp = static_cast<MessageEvent*>(castedThisObj->impl());
    const UString& typeArg = args.at(exec, 0)->toString(exec);
    bool canBubbleArg = args.at(exec, 1)->toBoolean(exec);
    bool cancelableArg = args.at(exec, 2)->toBoolean(exec);
    const UString& dataArg = args.at(exec, 3)->toString(exec);
    const UString& originArg = args.at(exec, 4)->toString(exec);
    const UString& lastEventIdArg = args.at(exec, 5)->toString(exec);
    DOMWindow* sourceArg = toDOMWindow(args.at(exec, 6));
    MessagePort* messagePort = toMessagePort(args.at(exec, 7));

    imp->initMessageEvent(typeArg, canBubbleArg, cancelableArg, dataArg, originArg, lastEventIdArg, sourceArg, messagePort);
    return jsUndefined();
}


}
