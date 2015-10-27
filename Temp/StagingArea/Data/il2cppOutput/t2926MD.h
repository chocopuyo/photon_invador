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

struct t2926;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t1678.h"

extern "C" void m23426_gshared (t2926 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m23426(__this, p0, p1, method) (( void (*) (t2926 *, t2 *, t270, const MethodInfo*))m23426_gshared)(__this, p0, p1, method)
extern "C" int32_t m23427_gshared (t2926 * __this, t1678  p0, t1678  p1, const MethodInfo* method);
#define m23427(__this, p0, p1, method) (( int32_t (*) (t2926 *, t1678 , t1678 , const MethodInfo*))m23427_gshared)(__this, p0, p1, method)
extern "C" t2 * m23428_gshared (t2926 * __this, t1678  p0, t1678  p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m23428(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2926 *, t1678 , t1678 , t213 *, t2 *, const MethodInfo*))m23428_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m23429_gshared (t2926 * __this, t2 * p0, const MethodInfo* method);
#define m23429(__this, p0, method) (( int32_t (*) (t2926 *, t2 *, const MethodInfo*))m23429_gshared)(__this, p0, method)
