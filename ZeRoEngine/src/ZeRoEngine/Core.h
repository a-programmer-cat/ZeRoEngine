#pragma once

#ifdef ZR_PLATFORM_WINDOWS
	#ifdef ZR_BUILD_DLL
		#define	ZR_API __declspec(dllexport)
	#else
		#define	ZR_API __declspec(dllimport)
	#endif
#else
	#error ZeRoEngine only support Windows!
#endif
