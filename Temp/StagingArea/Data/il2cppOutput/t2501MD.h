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

struct t2501;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17812_gshared (t2501 * __this, const MethodInfo* method);
#define m17812(__this, method) (( void (*) (t2501 *, const MethodInfo*))m17812_gshared)(__this, method)
extern "C" void m17813_gshared (t2 * __this , const MethodInfo* method);
#define m17813(__this , method) (( void (*) (t2 * , const MethodInfo*))m17813_gshared)(__this , method)
extern "C" int32_t m17814_gshared (t2501 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m17814(__this, p0, p1, method) (( int32_t (*) (t2501 *, t2 *, t2 *, const MethodInfo*))m17814_gshared)(__this, p0, p1, method)
extern "C" t2501 * m17815_gshared (t2 * __this , const MethodInfo* method);
#define m17815(__this , method) (( t2501 * (*) (t2 * , const MethodInfo*))m17815_gshared)(__this , method)
