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

struct t240;
struct t240_marshaled;
struct t3;
struct t48;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1767 (t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m1902 (t2 * __this , t240 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t240 * m1903 (t2 * __this , t3* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t240 * m1904 (t2 * __this , t48 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t240 * m1905 (t2 * __this , t48 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t240_marshal(const t240& unmarshaled, t240_marshaled& marshaled);
extern "C" void t240_marshal_back(const t240_marshaled& marshaled, t240& unmarshaled);
extern "C" void t240_marshal_cleanup(t240_marshaled& marshaled);
