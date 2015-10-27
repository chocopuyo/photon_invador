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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1255_marshal(const t1255& unmarshaled, t1255_marshaled& marshaled);
extern "C" void t1255_marshal_back(const t1255_marshaled& marshaled, t1255& unmarshaled);
extern "C" void t1255_marshal_cleanup(t1255_marshaled& marshaled);
