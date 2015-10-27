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

struct t2;
struct t3;

#include "codegen/il2cpp-codegen.h"
#include "t2843.h"

extern "C" void m22707_gshared (t2843 * __this, t2 * p0, bool p1, const MethodInfo* method);
#define m22707(__this, p0, p1, method) (( void (*) (t2843 *, t2 *, bool, const MethodInfo*))m22707_gshared)(__this, p0, p1, method)
extern "C" t2 * m22708_gshared (t2843 * __this, const MethodInfo* method);
#define m22708(__this, method) (( t2 * (*) (t2843 *, const MethodInfo*))m22708_gshared)(__this, method)
extern "C" void m22709_gshared (t2843 * __this, t2 * p0, const MethodInfo* method);
#define m22709(__this, p0, method) (( void (*) (t2843 *, t2 *, const MethodInfo*))m22709_gshared)(__this, p0, method)
extern "C" bool m22710_gshared (t2843 * __this, const MethodInfo* method);
#define m22710(__this, method) (( bool (*) (t2843 *, const MethodInfo*))m22710_gshared)(__this, method)
extern "C" void m22711_gshared (t2843 * __this, bool p0, const MethodInfo* method);
#define m22711(__this, p0, method) (( void (*) (t2843 *, bool, const MethodInfo*))m22711_gshared)(__this, p0, method)
extern "C" t3* m22712_gshared (t2843 * __this, const MethodInfo* method);
#define m22712(__this, method) (( t3* (*) (t2843 *, const MethodInfo*))m22712_gshared)(__this, method)
