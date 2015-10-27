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
#include "t2244.h"
#include "t100.h"

extern "C" void m14043_gshared (t2244 * __this, uint8_t p0, t2 * p1, const MethodInfo* method);
#define m14043(__this, p0, p1, method) (( void (*) (t2244 *, uint8_t, t2 *, const MethodInfo*))m14043_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14044_gshared (t2244 * __this, const MethodInfo* method);
#define m14044(__this, method) (( uint8_t (*) (t2244 *, const MethodInfo*))m14044_gshared)(__this, method)
extern "C" void m14045_gshared (t2244 * __this, uint8_t p0, const MethodInfo* method);
#define m14045(__this, p0, method) (( void (*) (t2244 *, uint8_t, const MethodInfo*))m14045_gshared)(__this, p0, method)
extern "C" t2 * m14046_gshared (t2244 * __this, const MethodInfo* method);
#define m14046(__this, method) (( t2 * (*) (t2244 *, const MethodInfo*))m14046_gshared)(__this, method)
extern "C" void m14047_gshared (t2244 * __this, t2 * p0, const MethodInfo* method);
#define m14047(__this, p0, method) (( void (*) (t2244 *, t2 *, const MethodInfo*))m14047_gshared)(__this, p0, method)
extern "C" t3* m14048_gshared (t2244 * __this, const MethodInfo* method);
#define m14048(__this, method) (( t3* (*) (t2244 *, const MethodInfo*))m14048_gshared)(__this, method)
