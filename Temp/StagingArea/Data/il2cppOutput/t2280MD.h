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

struct t2280;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"

extern "C" void m14507_gshared (t2280 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m14507(__this, p0, p1, method) (( void (*) (t2280 *, t2 *, t270, const MethodInfo*))m14507_gshared)(__this, p0, p1, method)
extern "C" t2 * m14508_gshared (t2280 * __this, int32_t p0, t2 * p1, const MethodInfo* method);
#define m14508(__this, p0, p1, method) (( t2 * (*) (t2280 *, int32_t, t2 *, const MethodInfo*))m14508_gshared)(__this, p0, p1, method)
extern "C" t2 * m14509_gshared (t2280 * __this, int32_t p0, t2 * p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m14509(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2280 *, int32_t, t2 *, t213 *, t2 *, const MethodInfo*))m14509_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2 * m14510_gshared (t2280 * __this, t2 * p0, const MethodInfo* method);
#define m14510(__this, p0, method) (( t2 * (*) (t2280 *, t2 *, const MethodInfo*))m14510_gshared)(__this, p0, method)
