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

struct t687;
struct t346;
struct t346_marshaled;
struct t229;
struct t27;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3480_gshared (t687 * __this, t346 * p0, t229 * p1, int32_t p2, const MethodInfo* method);
#define m3480(__this, p0, p1, p2, method) (( void (*) (t687 *, t346 *, t229 *, int32_t, const MethodInfo*))m3480_gshared)(__this, p0, p1, p2, method)
extern "C" void m18568_gshared (t687 * __this, t27* p0, const MethodInfo* method);
#define m18568(__this, p0, method) (( void (*) (t687 *, t27*, const MethodInfo*))m18568_gshared)(__this, p0, method)
