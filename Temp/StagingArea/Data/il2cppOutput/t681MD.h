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

extern "C" void t681_marshal(const t681& unmarshaled, t681_marshaled& marshaled);
extern "C" void t681_marshal_back(const t681_marshaled& marshaled, t681& unmarshaled);
extern "C" void t681_marshal_cleanup(t681_marshaled& marshaled);
