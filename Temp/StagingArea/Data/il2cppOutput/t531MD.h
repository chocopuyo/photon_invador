#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t3;

#include "codegen/il2cpp-codegen.h"
#include "t531.h"

extern "C" t3* m2610 (t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2611 (t531 * __this, t3* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t3* m2612 (t531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2613 (t531 * __this, t3* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t531_marshal(const t531& unmarshaled, t531_marshaled& marshaled);
extern "C" void t531_marshal_back(const t531_marshaled& marshaled, t531& unmarshaled);
extern "C" void t531_marshal_cleanup(t531_marshaled& marshaled);
