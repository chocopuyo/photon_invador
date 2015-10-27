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

struct t850;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t380.h"

extern "C" void m5378_gshared (t850 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m5378(__this, p0, p1, method) (( void (*) (t850 *, t2 *, t270, const MethodInfo*))m5378_gshared)(__this, p0, p1, method)
extern "C" int32_t m20581_gshared (t850 * __this, t380  p0, t380  p1, const MethodInfo* method);
#define m20581(__this, p0, p1, method) (( int32_t (*) (t850 *, t380 , t380 , const MethodInfo*))m20581_gshared)(__this, p0, p1, method)
extern "C" t2 * m20582_gshared (t850 * __this, t380  p0, t380  p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m20582(__this, p0, p1, p2, p3, method) (( t2 * (*) (t850 *, t380 , t380 , t213 *, t2 *, const MethodInfo*))m20582_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m20583_gshared (t850 * __this, t2 * p0, const MethodInfo* method);
#define m20583(__this, p0, method) (( int32_t (*) (t850 *, t2 *, const MethodInfo*))m20583_gshared)(__this, p0, method)
