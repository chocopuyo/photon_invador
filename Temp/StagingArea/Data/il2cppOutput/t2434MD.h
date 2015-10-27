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

struct t2434;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t477.h"

extern "C" void m16912_gshared (t2434 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m16912(__this, p0, p1, method) (( void (*) (t2434 *, t2 *, t270, const MethodInfo*))m16912_gshared)(__this, p0, p1, method)
extern "C" bool m16913_gshared (t2434 * __this, t477  p0, const MethodInfo* method);
#define m16913(__this, p0, method) (( bool (*) (t2434 *, t477 , const MethodInfo*))m16913_gshared)(__this, p0, method)
extern "C" t2 * m16914_gshared (t2434 * __this, t477  p0, t213 * p1, t2 * p2, const MethodInfo* method);
#define m16914(__this, p0, p1, p2, method) (( t2 * (*) (t2434 *, t477 , t213 *, t2 *, const MethodInfo*))m16914_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16915_gshared (t2434 * __this, t2 * p0, const MethodInfo* method);
#define m16915(__this, p0, method) (( bool (*) (t2434 *, t2 *, const MethodInfo*))m16915_gshared)(__this, p0, method)
