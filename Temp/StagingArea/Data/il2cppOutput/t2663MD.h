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

struct t2663;
struct t2;
struct t212;
struct t213;

#include "codegen/il2cpp-codegen.h"
#include "t270.h"
#include "t831.h"

extern "C" void m19948_gshared (t2663 * __this, t2 * p0, t270 p1, const MethodInfo* method);
#define m19948(__this, p0, p1, method) (( void (*) (t2663 *, t2 *, t270, const MethodInfo*))m19948_gshared)(__this, p0, p1, method)
extern "C" bool m19949_gshared (t2663 * __this, t831  p0, const MethodInfo* method);
#define m19949(__this, p0, method) (( bool (*) (t2663 *, t831 , const MethodInfo*))m19949_gshared)(__this, p0, method)
extern "C" t2 * m19950_gshared (t2663 * __this, t831  p0, t213 * p1, t2 * p2, const MethodInfo* method);
#define m19950(__this, p0, p1, p2, method) (( t2 * (*) (t2663 *, t831 , t213 *, t2 *, const MethodInfo*))m19950_gshared)(__this, p0, p1, p2, method)
extern "C" bool m19951_gshared (t2663 * __this, t2 * p0, const MethodInfo* method);
#define m19951(__this, p0, method) (( bool (*) (t2663 *, t2 *, const MethodInfo*))m19951_gshared)(__this, p0, method)
