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

struct t2374;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16030_gshared (t2374 * __this, const MethodInfo* method);
#define m16030(__this, method) (( void (*) (t2374 *, const MethodInfo*))m16030_gshared)(__this, method)
extern "C" int32_t m16031_gshared (t2374 * __this, uint8_t p0, uint8_t p1, const MethodInfo* method);
#define m16031(__this, p0, p1, method) (( int32_t (*) (t2374 *, uint8_t, uint8_t, const MethodInfo*))m16031_gshared)(__this, p0, p1, method)
