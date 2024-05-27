#pragma once


#ifdef ALEX_PLATFORM_WINDOWS
	#ifdef ALEX_BUILD_DLL
		#define ALEX_API __declspec(dllexport)
	#else 
		#define ALEX_API __declspec(dllimport)
	#endif
#else 
	// Compilation error if no target platform is defined
	#error Alex only support Windows!
#endif