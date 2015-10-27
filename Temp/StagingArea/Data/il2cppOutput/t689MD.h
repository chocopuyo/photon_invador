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

struct t689;
struct t346;
struct t346_marshaled;
struct t229;
struct t27;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3482_gshared (t689 * __this, t346 * p0, t229 * p1, bool p2, const MethodInfo* method);
#define m3482(__this, p0, p1, p2, method) (( void (*) (t689 *, t346 *, t229 *, bool, const MethodInfo*))m3482_gshared)(__this, p0, p1, p2, method)
extern "C" void m18582_gshared (t689 * __this, t27* p0, const MethodInfo* method);
#define m18582(__this, p0, method) (( void (*) (t689 *, t27*, const MethodInfo*))m18582_gshared)(__this, p0, method)
