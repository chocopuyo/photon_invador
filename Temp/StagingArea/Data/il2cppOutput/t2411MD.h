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

struct t2411;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16604_gshared (t2411 * __this, const MethodInfo* method);
#define m16604(__this, method) (( void (*) (t2411 *, const MethodInfo*))m16604_gshared)(__this, method)
extern "C" int32_t m16605_gshared (t2411 * __this, float p0, float p1, const MethodInfo* method);
#define m16605(__this, p0, p1, method) (( int32_t (*) (t2411 *, float, float, const MethodInfo*))m16605_gshared)(__this, p0, p1, method)
