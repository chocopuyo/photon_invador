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

struct t2585;
struct t229;
struct t3;
struct t2;
struct t627;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18784_gshared (t2585 * __this, const MethodInfo* method);
#define m18784(__this, method) (( void (*) (t2585 *, const MethodInfo*))m18784_gshared)(__this, method)
extern "C" t229 * m18785_gshared (t2585 * __this, t3* p0, t2 * p1, const MethodInfo* method);
#define m18785(__this, p0, p1, method) (( t229 * (*) (t2585 *, t3*, t2 *, const MethodInfo*))m18785_gshared)(__this, p0, p1, method)
extern "C" t627 * m18786_gshared (t2585 * __this, t2 * p0, t229 * p1, const MethodInfo* method);
#define m18786(__this, p0, p1, method) (( t627 * (*) (t2585 *, t2 *, t229 *, const MethodInfo*))m18786_gshared)(__this, p0, p1, method)
