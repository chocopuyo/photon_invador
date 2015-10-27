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

struct t2425;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16771_gshared (t2425 * __this, const MethodInfo* method);
#define m16771(__this, method) (( void (*) (t2425 *, const MethodInfo*))m16771_gshared)(__this, method)
extern "C" void m16772_gshared (t2 * __this , const MethodInfo* method);
#define m16772(__this , method) (( void (*) (t2 * , const MethodInfo*))m16772_gshared)(__this , method)
extern "C" int32_t m16773_gshared (t2425 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16773(__this, p0, p1, method) (( int32_t (*) (t2425 *, t2 *, t2 *, const MethodInfo*))m16773_gshared)(__this, p0, p1, method)
extern "C" t2425 * m16774_gshared (t2 * __this , const MethodInfo* method);
#define m16774(__this , method) (( t2425 * (*) (t2 * , const MethodInfo*))m16774_gshared)(__this , method)
