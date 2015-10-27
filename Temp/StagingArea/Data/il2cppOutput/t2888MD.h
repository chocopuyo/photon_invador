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

struct t2888;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m23005_gshared (t2888 * __this, const MethodInfo* method);
#define m23005(__this, method) (( void (*) (t2888 *, const MethodInfo*))m23005_gshared)(__this, method)
extern "C" int32_t m23006_gshared (t2888 * __this, t2 * p0, const MethodInfo* method);
#define m23006(__this, p0, method) (( int32_t (*) (t2888 *, t2 *, const MethodInfo*))m23006_gshared)(__this, p0, method)
extern "C" bool m23007_gshared (t2888 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m23007(__this, p0, p1, method) (( bool (*) (t2888 *, t2 *, t2 *, const MethodInfo*))m23007_gshared)(__this, p0, p1, method)
