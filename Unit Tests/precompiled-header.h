#pragma once

#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING		// GTest is using TR1 namespace with this nuget package. They need to update

#pragma warning(push)
#pragma warning(disable : 4251)	// dll-interface export warnings that can safely be ignored
#pragma warning(disable : 4275)
#include "gtest/gtest.h"
#pragma warning(pop)

