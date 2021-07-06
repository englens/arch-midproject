// BatchMode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "..\Game\Game.h"
#include <boost/locale.hpp>
#include <iostream>

using namespace boost::locale;


int main()
{
	//Locale code block
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("BatchMode");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);
	// End Locale Code

	std::cout << translate("Program now running in batch mode") << std::endl;
	Game batchGame = Game(0,2);
	batchGame.MainLoop();
}
