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

struct t2407;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16590_gshared (t2407 * __this, const MethodInfo* method);
#define m16590(__this, method) (( void (*) (t2407 *, const MethodInfo*))m16590_gshared)(__this, method)
extern "C" int32_t m16591_gshared (t2407 * __this, float p0, const MethodInfo* method);
#define m16591(__this, p0, method) (( int32_t (*) (t2407 *, float, const MethodInfo*))m16591_gshared)(__this, p0, method)
extern "C" bool m16592_gshared (t2407 * __this, float p0, float p1, const MethodInfo* method);
#define m16592(__this, p0, p1, method) (( bool (*) (t2407 *, float, float, const MethodInfo*))m16592_gshared)(__this, p0, p1, method)
