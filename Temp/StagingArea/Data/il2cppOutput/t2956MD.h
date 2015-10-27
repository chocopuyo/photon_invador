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

struct t2956;

#include "codegen/il2cpp-codegen.h"
#include "t2011.h"

extern "C" void m23664_gshared (t2956 * __this, const MethodInfo* method);
#define m23664(__this, method) (( void (*) (t2956 *, const MethodInfo*))m23664_gshared)(__this, method)
extern "C" int32_t m23665_gshared (t2956 * __this, t2011  p0, t2011  p1, const MethodInfo* method);
#define m23665(__this, p0, p1, method) (( int32_t (*) (t2956 *, t2011 , t2011 , const MethodInfo*))m23665_gshared)(__this, p0, p1, method)
