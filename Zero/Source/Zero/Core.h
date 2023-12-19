#pragma once

#ifdef Z_PLATFORM_WINDOWS

	#ifdef Z_BUILD_DLL
		#define ZERO_API __declspec(dllexport)
	#else
		#define ZERO_API __declspec(dllimport)
	#endif // Z_BUILD_DLL

#else
	#error Zero only supports Windows.

#endif // Z_PLATFORM_WINDOWS