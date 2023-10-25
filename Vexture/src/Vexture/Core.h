#pragma once

#ifdef VX_PLATFORM_WINDOWS
	#ifdef VX_BUILD_DLL
		#define VEXTURE_API __declspec(dllexport)
	#else
		#define VEXTURE_API __declspec(dllimport)
	#endif
#else
	#error Vexture only supports Windows!
#endif