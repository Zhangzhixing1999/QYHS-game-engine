#pragma once
#ifdef QYHS_PLATFORM_WINDOWS
	#ifdef  QYHS_BULID_DLL
		#define QYHS_API __declspec(dllexport) 
	#else
		#define QYHS_API __declspec(dllimport) 
	#endif
#else
#error QYHS only support Windows!
#endif //  QY


