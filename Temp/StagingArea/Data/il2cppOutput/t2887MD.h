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

struct t2887;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m23003_gshared (t2887 * __this, const MethodInfo* method);
#define m23003(__this, method) (( void (*) (t2887 *, const MethodInfo*))m23003_gshared)(__this, method)
extern "C" int32_t m23004_gshared (t2887 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m23004(__this, p0, p1, method) (( int32_t (*) (t2887 *, t2 *, t2 *, const MethodInfo*))m23004_gshared)(__this, p0, p1, method)
