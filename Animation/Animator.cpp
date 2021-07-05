#include "Animator.h"
#include "../Core/Core.h"
#include <iostream>

Animator::Animator()
{
	std::cout << "Animator object created." << std::endl;
}

void Animator::CalcMissilePaths()
{
	Core::MisslePathMath();
	std::cout << "Calculating Missile Paths for use in Animation." << std::endl;
}

void Animator::DrawHitExplosions()
{
	std::cout << "Drawing Hit Explosions." << std::endl;
}

void Animator::DrawAnimation()
{
	std::cout << "Drawing missile animations." << std::endl;
	CalcMissilePaths();
	DrawHitExplosions();
}