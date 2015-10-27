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

struct t2375;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16032_gshared (t2375 * __this, const MethodInfo* method);
#define m16032(__this, method) (( void (*) (t2375 *, const MethodInfo*))m16032_gshared)(__this, method)
extern "C" int32_t m16033_gshared (t2375 * __this, uint8_t p0, uint8_t p1, const MethodInfo* method);
#define m16033(__this, p0, p1, method) (( int32_t (*) (t2375 *, uint8_t, uint8_t, const MethodInfo*))m16033_gshared)(__this, p0, p1, method)
