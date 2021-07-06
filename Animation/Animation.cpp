#include "Animation.h"
#include "../Core/Core.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace::std;
using namespace boost::locale;

void Animation::CalcMissilePaths()
{
	Core::MisslePathMath();
	std::cout << "Calculating Missile Paths for use in Animation." << std::endl;
}

void Animation::DrawHitExplosions()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("x");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	std::cout.imbue(locale());
	std::cout << translate("Drawing Hit Explosions.") << std::endl;
}

void Animation::DrawAnimation()
{
	std::cout << "Drawing missile animations." << std::endl;
	CalcMissilePaths();
	DrawHitExplosions();
}