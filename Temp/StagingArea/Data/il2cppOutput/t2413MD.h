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

struct t2413;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"

extern "C" void m16608_gshared (t2413 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m16608(__this, p0, p1, method) (( void (*) (t2413 *, t2 *, t270, const MethodInfo*))m16608_gshared)(__this, p0, p1, method)
extern "C" int32_t m16609_gshared (t2413 * __this, float p0, float p1, const MethodInfo* method);
#define m16609(__this, p0, p1, method) (( int32_t (*) (t2413 *, float, float, const MethodInfo*))m16609_gshared)(__this, p0, p1, method)
extern "C" t2 * m16610_gshared (t2413 * __this, float p0, float p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m16610(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2413 *, float, float, t213 *, t2 *, const MethodInfo*))m16610_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16611_gshared (t2413 * __this, t2 * p0, const MethodInfo* method);
#define m16611(__this, p0, method) (( int32_t (*) (t2413 *, t2 *, const MethodInfo*))m16611_gshared)(__this, p0, method)
