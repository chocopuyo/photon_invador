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

struct t2437;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t477.h"

extern "C" void m16922_gshared (t2437 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m16922(__this, p0, p1, method) (( void (*) (t2437 *, t2 *, t270, const MethodInfo*))m16922_gshared)(__this, p0, p1, method)
extern "C" int32_t m16923_gshared (t2437 * __this, t477  p0, t477  p1, const MethodInfo* method);
#define m16923(__this, p0, p1, method) (( int32_t (*) (t2437 *, t477 , t477 , const MethodInfo*))m16923_gshared)(__this, p0, p1, method)
extern "C" t2 * m16924_gshared (t2437 * __this, t477  p0, t477  p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m16924(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2437 *, t477 , t477 , t213 *, t2 *, const MethodInfo*))m16924_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16925_gshared (t2437 * __this, t2 * p0, const MethodInfo* method);
#define m16925(__this, p0, method) (( int32_t (*) (t2437 *, t2 *, const MethodInfo*))m16925_gshared)(__this, p0, method)
