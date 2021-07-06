// MainExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//include for UI library
#include "..\UI\PlayerUI.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace boost::locale;

int main()
{
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("MainExe");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);
    std::cout << translate("Greetings Professor Falken. Would you like to play a game?") << std::endl;
	PlayerUI profFalken;
	profFalken.InitializeUI();
}
