#include "Animation.h"
#include "../Core/Core.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace boost::locale;

void Animation::CalcMissilePaths()
{
	Core::MisslePathMath();
	std::cout << "Calculating Missile Paths for use in Animation." << std::endl;
}

void Animation::DrawHitExplosions()
{
	//Locale code block
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("Animation");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);
	// End Locale Code

	std::cout << translate("Drawing Hit Explosions.") << std::endl;
}

void Animation::DrawAnimation()
{
	std::cout << "Drawing missile animations." << std::endl;
	CalcMissilePaths();
	DrawHitExplosions();
}