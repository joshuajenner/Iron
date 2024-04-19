#pragma once

#ifdef IRN_PLATFORM_WINDOWS
	#ifdef IRN_BUILD_DLL
		#define IRON_API __declspec(dllexport)
	#else
		#define IRON_API __declspec(dllimport)
	#endif
#else
	#error Iron only supports Windows!
#endif

#define BIT(x) (1 << x)