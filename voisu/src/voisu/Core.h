#pragma once

#ifdef VO_PLATFORM_WINDOWS
	#ifdef VO_BUILD_DLL
		#define VOISU_API __declspec(dllexport)
	#else
		#define __declspec(dlleximport)
	#endif
#eles
	#error Voisu only supports windows
#endif