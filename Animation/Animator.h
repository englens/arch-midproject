#pragma once
#ifdef ANIM_EXPORTS
#define ANIM_API __declspec(dllexport)
#else
#define ANIM_API __declspec(dllimport)
#endif


// exported from the dll
class ANIM_API Animator {
public:
	Animator();
	void CalcMissilePaths();
	void DrawHitExplosions();
	void DrawAnimation();
};
