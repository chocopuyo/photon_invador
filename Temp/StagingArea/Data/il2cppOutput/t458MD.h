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

struct t458;
struct t458_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2448 (t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t458_marshal(const t458& unmarshaled, t458_marshaled& marshaled);
extern "C" void t458_marshal_back(const t458_marshaled& marshaled, t458& unmarshaled);
extern "C" void t458_marshal_cleanup(t458_marshaled& marshaled);
