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

struct t2586;
struct t229;
struct t3;
struct t2;
struct t627;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18787_gshared (t2586 * __this, const MethodInfo* method);
#define m18787(__this, method) (( void (*) (t2586 *, const MethodInfo*))m18787_gshared)(__this, method)
extern "C" t229 * m18788_gshared (t2586 * __this, t3* p0, t2 * p1, const MethodInfo* method);
#define m18788(__this, p0, p1, method) (( t229 * (*) (t2586 *, t3*, t2 *, const MethodInfo*))m18788_gshared)(__this, p0, p1, method)
extern "C" t627 * m18789_gshared (t2586 * __this, t2 * p0, t229 * p1, const MethodInfo* method);
#define m18789(__this, p0, p1, method) (( t627 * (*) (t2586 *, t2 *, t229 *, const MethodInfo*))m18789_gshared)(__this, p0, p1, method)
