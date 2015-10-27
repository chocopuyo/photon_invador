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
#include "t2272.h"

extern "C" void m14443_gshared (t2272 * __this, int32_t p0, t2 * p1, const MethodInfo* method);
#define m14443(__this, p0, p1, method) (( void (*) (t2272 *, int32_t, t2 *, const MethodInfo*))m14443_gshared)(__this, p0, p1, method)
extern "C" int32_t m14444_gshared (t2272 * __this, const MethodInfo* method);
#define m14444(__this, method) (( int32_t (*) (t2272 *, const MethodInfo*))m14444_gshared)(__this, method)
extern "C" void m14445_gshared (t2272 * __this, int32_t p0, const MethodInfo* method);
#define m14445(__this, p0, method) (( void (*) (t2272 *, int32_t, const MethodInfo*))m14445_gshared)(__this, p0, method)
extern "C" t2 * m14446_gshared (t2272 * __this, const MethodInfo* method);
#define m14446(__this, method) (( t2 * (*) (t2272 *, const MethodInfo*))m14446_gshared)(__this, method)
extern "C" void m14447_gshared (t2272 * __this, t2 * p0, const MethodInfo* method);
#define m14447(__this, p0, method) (( void (*) (t2272 *, t2 *, const MethodInfo*))m14447_gshared)(__this, p0, method)
extern "C" t3* m14448_gshared (t2272 * __this, const MethodInfo* method);
#define m14448(__this, method) (( t3* (*) (t2272 *, const MethodInfo*))m14448_gshared)(__this, method)
