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

struct t800;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t831.h"

extern "C" void m5307_gshared (t800 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m5307(__this, p0, p1, method) (( void (*) (t800 *, t2 *, t270, const MethodInfo*))m5307_gshared)(__this, p0, p1, method)
extern "C" int32_t m19645_gshared (t800 * __this, t831  p0, t831  p1, const MethodInfo* method);
#define m19645(__this, p0, p1, method) (( int32_t (*) (t800 *, t831 , t831 , const MethodInfo*))m19645_gshared)(__this, p0, p1, method)
extern "C" t2 * m19646_gshared (t800 * __this, t831  p0, t831  p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m19646(__this, p0, p1, p2, p3, method) (( t2 * (*) (t800 *, t831 , t831 , t213 *, t2 *, const MethodInfo*))m19646_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m19647_gshared (t800 * __this, t2 * p0, const MethodInfo* method);
#define m19647(__this, p0, method) (( int32_t (*) (t800 *, t2 *, const MethodInfo*))m19647_gshared)(__this, p0, method)
