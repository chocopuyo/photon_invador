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

struct t2500;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t540.h"

extern "C" void m17808_gshared (t2500 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m17808(__this, p0, p1, method) (( void (*) (t2500 *, t2 *, t270, const MethodInfo*))m17808_gshared)(__this, p0, p1, method)
extern "C" bool m17809_gshared (t2500 * __this, t540  p0, const MethodInfo* method);
#define m17809(__this, p0, method) (( bool (*) (t2500 *, t540 , const MethodInfo*))m17809_gshared)(__this, p0, method)
extern "C" t2 * m17810_gshared (t2500 * __this, t540  p0, t213 * p1, t2 * p2, const MethodInfo* method);
#define m17810(__this, p0, p1, p2, method) (( t2 * (*) (t2500 *, t540 , t213 *, t2 *, const MethodInfo*))m17810_gshared)(__this, p0, p1, p2, method)
extern "C" bool m17811_gshared (t2500 * __this, t2 * p0, const MethodInfo* method);
#define m17811(__this, p0, method) (( bool (*) (t2500 *, t2 *, const MethodInfo*))m17811_gshared)(__this, p0, method)
