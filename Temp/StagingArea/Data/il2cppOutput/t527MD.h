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

struct t527;
struct t527_marshaled;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m3333 (t527 * __this, t2 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3334 (t527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3335 (t2 * __this , t527 * p0, t527 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t527_marshal(const t527& unmarshaled, t527_marshaled& marshaled);
extern "C" void t527_marshal_back(const t527_marshaled& marshaled, t527& unmarshaled);
extern "C" void t527_marshal_cleanup(t527_marshaled& marshaled);
