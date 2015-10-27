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

struct t2584;
struct t229;
struct t3;
struct t2;
struct t627;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18781_gshared (t2584 * __this, const MethodInfo* method);
#define m18781(__this, method) (( void (*) (t2584 *, const MethodInfo*))m18781_gshared)(__this, method)
extern "C" t229 * m18782_gshared (t2584 * __this, t3* p0, t2 * p1, const MethodInfo* method);
#define m18782(__this, p0, p1, method) (( t229 * (*) (t2584 *, t3*, t2 *, const MethodInfo*))m18782_gshared)(__this, p0, p1, method)
extern "C" t627 * m18783_gshared (t2584 * __this, t2 * p0, t229 * p1, const MethodInfo* method);
#define m18783(__this, p0, p1, method) (( t627 * (*) (t2584 *, t2 *, t229 *, const MethodInfo*))m18783_gshared)(__this, p0, p1, method)
