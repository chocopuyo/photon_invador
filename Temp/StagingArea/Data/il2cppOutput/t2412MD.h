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

struct t2412;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16606_gshared (t2412 * __this, const MethodInfo* method);
#define m16606(__this, method) (( void (*) (t2412 *, const MethodInfo*))m16606_gshared)(__this, method)
extern "C" int32_t m16607_gshared (t2412 * __this, float p0, float p1, const MethodInfo* method);
#define m16607(__this, p0, p1, method) (( int32_t (*) (t2412 *, float, float, const MethodInfo*))m16607_gshared)(__this, p0, p1, method)
