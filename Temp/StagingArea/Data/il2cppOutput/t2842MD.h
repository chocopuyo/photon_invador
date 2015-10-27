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

struct t2842;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t388.h"

extern "C" void m22775_gshared (t2842 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m22775(__this, p0, p1, method) (( void (*) (t2842 *, t2 *, t270, const MethodInfo*))m22775_gshared)(__this, p0, p1, method)
extern "C" t388  m22776_gshared (t2842 * __this, t2 * p0, bool p1, const MethodInfo* method);
#define m22776(__this, p0, p1, method) (( t388  (*) (t2842 *, t2 *, bool, const MethodInfo*))m22776_gshared)(__this, p0, p1, method)
extern "C" t2 * m22777_gshared (t2842 * __this, t2 * p0, bool p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m22777(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2842 *, t2 *, bool, t213 *, t2 *, const MethodInfo*))m22777_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t388  m22778_gshared (t2842 * __this, t2 * p0, const MethodInfo* method);
#define m22778(__this, p0, method) (( t388  (*) (t2842 *, t2 *, const MethodInfo*))m22778_gshared)(__this, p0, method)
