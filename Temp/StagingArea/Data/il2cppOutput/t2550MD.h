﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2550;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t2540.h"
#include "t622.h"

extern "C" void m18458_gshared (t2550 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m18458(__this, p0, p1, method) (( void (*) (t2550 *, t2 *, t270, const MethodInfo*))m18458_gshared)(__this, p0, p1, method)
extern "C" t2540  m18459_gshared (t2550 * __this, t2 * p0, int32_t p1, const MethodInfo* method);
#define m18459(__this, p0, p1, method) (( t2540  (*) (t2550 *, t2 *, int32_t, const MethodInfo*))m18459_gshared)(__this, p0, p1, method)
extern "C" t2 * m18460_gshared (t2550 * __this, t2 * p0, int32_t p1, t213 * p2, t2 * p3, const MethodInfo* method);
#define m18460(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2550 *, t2 *, int32_t, t213 *, t2 *, const MethodInfo*))m18460_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2540  m18461_gshared (t2550 * __this, t2 * p0, const MethodInfo* method);
#define m18461(__this, p0, method) (( t2540  (*) (t2550 *, t2 *, const MethodInfo*))m18461_gshared)(__this, p0, method)