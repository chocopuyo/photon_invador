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

struct t2427;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t56.h"

extern "C" void m16777_gshared (t2427 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m16777(__this, p0, p1, method) (( void (*) (t2427 *, t2 *, t270, const MethodInfo*))m16777_gshared)(__this, p0, p1, method)
extern "C" int32_t m16778_gshared (t2427 * __this, t56  p0, t56  p1, const MethodInfo* method);
#define m16778(__this, p0, p1, method) (( int32_t (*) (t2427 *, t56 , t56 , const MethodInfo*))m16778_gshared)(__this, p0, p1, method)
extern "C" t2 * m16779_gshared (t2427 * __this, t56  p0, t56  p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m16779(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2427 *, t56 , t56 , t213 *, t2 *, const MethodInfo*))m16779_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16780_gshared (t2427 * __this, t2 * p0, const MethodInfo* method);
#define m16780(__this, p0, method) (( int32_t (*) (t2427 *, t2 *, const MethodInfo*))m16780_gshared)(__this, p0, method)
