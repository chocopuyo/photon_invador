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

struct t686;
struct t346;
struct t346_marshaled;
struct t229;
struct t27;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3479_gshared (t686 * __this, t346 * p0, t229 * p1, float p2, const MethodInfo* method);
#define m3479(__this, p0, p1, p2, method) (( void (*) (t686 *, t346 *, t229 *, float, const MethodInfo*))m3479_gshared)(__this, p0, p1, p2, method)
extern "C" void m18560_gshared (t686 * __this, t27* p0, const MethodInfo* method);
#define m18560(__this, p0, method) (( void (*) (t686 *, t27*, const MethodInfo*))m18560_gshared)(__this, p0, method)
