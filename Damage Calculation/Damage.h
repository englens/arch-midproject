#pragma once
#ifdef UI_EXPORTS
#define DAMAGE_API __declspec(dllexport)
#else
#define DAMAGE_API __declspec(dllimport)
#endif

class DAMAGE_API Damage {
public:
	static int Calculation(int, int);
};
