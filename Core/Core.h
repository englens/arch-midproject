#pragma once

#ifdef CORE_EXPORTS
#define CORE_API __declspec(dllexport)
#else
#define CORE_API __declspec(dllimport)
#endif

class CORE_API Core {
public:
	static void MisslePathMath();
	static bool CheckCriticalHit();
};