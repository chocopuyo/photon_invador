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

struct t415;
struct t415_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1668 (t415 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t415_marshal(const t415& unmarshaled, t415_marshaled& marshaled);
extern "C" void t415_marshal_back(const t415_marshaled& marshaled, t415& unmarshaled);
extern "C" void t415_marshal_cleanup(t415_marshaled& marshaled);
