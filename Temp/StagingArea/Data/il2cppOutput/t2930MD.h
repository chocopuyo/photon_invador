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

struct t2930;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"

extern "C" void m23456_gshared (t2930 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m23456(__this, p0, p1, method) (( void (*) (t2930 *, t2 *, t270, const MethodInfo*))m23456_gshared)(__this, p0, p1, method)
extern "C" t2 * m23457_gshared (t2930 * __this, const MethodInfo* method);
#define m23457(__this, method) (( t2 * (*) (t2930 *, const MethodInfo*))m23457_gshared)(__this, method)
extern "C" t2 * m23458_gshared (t2930 * __this, t213 * p0, t2 * p1, const MethodInfo* method);
#define m23458(__this, p0, p1, method) (( t2 * (*) (t2930 *, t213 *, t2 *, const MethodInfo*))m23458_gshared)(__this, p0, p1, method)
extern "C" t2 * m23459_gshared (t2930 * __this, t2 * p0, const MethodInfo* method);
#define m23459(__this, p0, method) (( t2 * (*) (t2930 *, t2 *, const MethodInfo*))m23459_gshared)(__this, p0, method)
