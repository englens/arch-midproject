#pragma once
#ifdef ANIM_EXPORTS
#define ANIM_API __declspec(dllexport)
#else
#define ANIM_API __declspec(dllimport)
#endif


// exported from the dll
class ANIM_API Animation {
public:
	static void CalcMissilePaths();
	static void DrawHitExplosions();
	static void DrawAnimation();
};
