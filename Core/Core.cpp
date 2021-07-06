#include "Core.h"
#include <boost/locale.hpp>
#include <iostream>

using namespace boost::locale;

void Core::MisslePathMath()
{
	//Locale code block
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("Core");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);
	// End Locale Code


	std::cout << translate("Calculating Missle Path Math.") << std::endl;
}

bool Core::CheckCriticalHit() 
{
	// always a crit for now
	if (true) {
		return true;
	}
	std::cout << "Checked Critical Hit." << std::endl;
}
