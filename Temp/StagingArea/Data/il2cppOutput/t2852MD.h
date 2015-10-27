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

struct t2852;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t2843.h"

extern "C" void m22779_gshared (t2852 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m22779(__this, p0, p1, method) (( void (*) (t2852 *, t2 *, t270, const MethodInfo*))m22779_gshared)(__this, p0, p1, method)
extern "C" t2843  m22780_gshared (t2852 * __this, t2 * p0, bool p1, const MethodInfo* method);
#define m22780(__this, p0, p1, method) (( t2843  (*) (t2852 *, t2 *, bool, const MethodInfo*))m22780_gshared)(__this, p0, p1, method)
extern "C" t2 * m22781_gshared (t2852 * __this, t2 * p0, bool p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m22781(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2852 *, t2 *, bool, t213 *, t2 *, const MethodInfo*))m22781_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2843  m22782_gshared (t2852 * __this, t2 * p0, const MethodInfo* method);
#define m22782(__this, p0, method) (( t2843  (*) (t2852 *, t2 *, const MethodInfo*))m22782_gshared)(__this, p0, method)
