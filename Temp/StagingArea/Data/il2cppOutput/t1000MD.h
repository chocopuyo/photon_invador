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

struct t1000;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"

extern "C" void m5417_gshared (t1000 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m5417(__this, p0, p1, method) (( void (*) (t1000 *, t2 *, t270, const MethodInfo*))m5417_gshared)(__this, p0, p1, method)
extern "C" void m18565_gshared (t1000 * __this, float p0, const MethodInfo* method);
#define m18565(__this, p0, method) (( void (*) (t1000 *, float, const MethodInfo*))m18565_gshared)(__this, p0, method)
extern "C" t2 * m18566_gshared (t1000 * __this, float p0, t213 * p1, t2 * p2, const MethodInfo* method);
#define m18566(__this, p0, p1, p2, method) (( t2 * (*) (t1000 *, float, t213 *, t2 *, const MethodInfo*))m18566_gshared)(__this, p0, p1, p2, method)
extern "C" void m18567_gshared (t1000 * __this, t2 * p0, const MethodInfo* method);
#define m18567(__this, p0, method) (( void (*) (t1000 *, t2 *, const MethodInfo*))m18567_gshared)(__this, p0, method)
