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

struct t2271;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t388.h"

extern "C" void m14511_gshared (t2271 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m14511(__this, p0, p1, method) (( void (*) (t2271 *, t2 *, t270, const MethodInfo*))m14511_gshared)(__this, p0, p1, method)
extern "C" t388  m14512_gshared (t2271 * __this, int32_t p0, t2 * p1, const MethodInfo* method);
#define m14512(__this, p0, p1, method) (( t388  (*) (t2271 *, int32_t, t2 *, const MethodInfo*))m14512_gshared)(__this, p0, p1, method)
extern "C" t2 * m14513_gshared (t2271 * __this, int32_t p0, t2 * p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m14513(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2271 *, int32_t, t2 *, t213 *, t2 *, const MethodInfo*))m14513_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t388  m14514_gshared (t2271 * __this, t2 * p0, const MethodInfo* method);
#define m14514(__this, p0, method) (( t388  (*) (t2271 *, t2 *, const MethodInfo*))m14514_gshared)(__this, p0, method)
