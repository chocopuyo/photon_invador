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

struct t2480;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t550.h"

extern "C" void m17506_gshared (t2480 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m17506(__this, p0, p1, method) (( void (*) (t2480 *, t2 *, t270, const MethodInfo*))m17506_gshared)(__this, p0, p1, method)
extern "C" bool m17507_gshared (t2480 * __this, t550  p0, const MethodInfo* method);
#define m17507(__this, p0, method) (( bool (*) (t2480 *, t550 , const MethodInfo*))m17507_gshared)(__this, p0, method)
extern "C" t2 * m17508_gshared (t2480 * __this, t550  p0, t213 * p1, t2 * p2, const MethodInfo* method);
#define m17508(__this, p0, p1, p2, method) (( t2 * (*) (t2480 *, t550 , t213 *, t2 *, const MethodInfo*))m17508_gshared)(__this, p0, p1, p2, method)
extern "C" bool m17509_gshared (t2480 * __this, t2 * p0, const MethodInfo* method);
#define m17509(__this, p0, method) (( bool (*) (t2480 *, t2 *, const MethodInfo*))m17509_gshared)(__this, p0, method)
