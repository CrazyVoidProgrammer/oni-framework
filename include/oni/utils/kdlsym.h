#pragma once
#include <oni/config.h>
#include <oni/utils/types.h>

#ifndef ONI_PLATFORM
#error ONI_PLATFORM not set
#endif

#if ONI_PLATFORM==ONI_UNKNOWN_PLATFORM
#include "kdlsym/default.h"
#elif ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD
#include "kdlsym/orbis.h"
#elif ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD_455
#include "kdlsym/orbis455.h"
#elif ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD_501
#include "kdlsym/orbis501.h"
#elif ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD_505
#include "kdlsym/orbis505.h"
#elif ONI_PLATFORM==ONI_PLATFORM_SAFE_BSD
#include "kdlsym/gunsafe2.h"
#endif

// Kernel base address, this must be filled out on-startup (normally done in oni_initializeKernel)
extern uint8_t* gKernelBase;

// Define kdlsym macro
#ifndef kdlsym
#define kdlsym(x) ((void*)((uint8_t *)&gKernelBase[kdlsym_addr_ ## x]))
#endif