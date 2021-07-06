#include "framework.h"
#include "WorldMapGenLib.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace boost::locale;

void WorldMapLib::DrawWorld()
{
	worldMapID++;
	std::cout << "World is drawn, enjoy the game" << std::endl;
}

//Constructor, assigns variable
WorldMapLib::WorldMapLib()
{
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("WorldMapGen");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);
	worldMapID = 0;
	std::cout << translate("World Map lib called, object of class created ") << std::endl;
}