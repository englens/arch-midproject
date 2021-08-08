#include "Animation.h"
#include "../Core/Core.h"
#include <iostream>


void Animation::CalcMissilePaths()
{
	Core::MisslePathMath();
	std::cout << "Calculating Missile Paths for use in Animation." << std::endl;
}

void Animation::DrawHitExplosions()
{
		std::cout << "Drawing Hit Explosions." << std::endl;
}

void Animation::DrawAnimation()
{
	std::cout << "Drawing missile animations." << std::endl;
	CalcMissilePaths();
	DrawHitExplosions();
}