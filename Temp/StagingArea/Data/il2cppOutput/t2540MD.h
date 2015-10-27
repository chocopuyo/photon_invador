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
#include "t2540.h"
#include "t622.h"

extern "C" void m18380_gshared (t2540 * __this, t2 * p0, int32_t p1, const MethodInfo* method);
#define m18380(__this, p0, p1, method) (( void (*) (t2540 *, t2 *, int32_t, const MethodInfo*))m18380_gshared)(__this, p0, p1, method)
extern "C" t2 * m18381_gshared (t2540 * __this, const MethodInfo* method);
#define m18381(__this, method) (( t2 * (*) (t2540 *, const MethodInfo*))m18381_gshared)(__this, method)
extern "C" void m18382_gshared (t2540 * __this, t2 * p0, const MethodInfo* method);
#define m18382(__this, p0, method) (( void (*) (t2540 *, t2 *, const MethodInfo*))m18382_gshared)(__this, p0, method)
extern "C" int32_t m18383_gshared (t2540 * __this, const MethodInfo* method);
#define m18383(__this, method) (( int32_t (*) (t2540 *, const MethodInfo*))m18383_gshared)(__this, method)
extern "C" void m18384_gshared (t2540 * __this, int32_t p0, const MethodInfo* method);
#define m18384(__this, p0, method) (( void (*) (t2540 *, int32_t, const MethodInfo*))m18384_gshared)(__this, p0, method)
extern "C" t3* m18385_gshared (t2540 * __this, const MethodInfo* method);
#define m18385(__this, method) (( t3* (*) (t2540 *, const MethodInfo*))m18385_gshared)(__this, method)
