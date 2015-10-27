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

struct t2408;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16593_gshared (t2408 * __this, const MethodInfo* method);
#define m16593(__this, method) (( void (*) (t2408 *, const MethodInfo*))m16593_gshared)(__this, method)
extern "C" int32_t m16594_gshared (t2408 * __this, float p0, const MethodInfo* method);
#define m16594(__this, p0, method) (( int32_t (*) (t2408 *, float, const MethodInfo*))m16594_gshared)(__this, p0, method)
extern "C" bool m16595_gshared (t2408 * __this, float p0, float p1, const MethodInfo* method);
#define m16595(__this, p0, p1, method) (( bool (*) (t2408 *, float, float, const MethodInfo*))m16595_gshared)(__this, p0, p1, method)
