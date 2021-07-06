#include "PlayerUI.h"
#include "../Core/Core.h"
#include <iostream>
#include <boost/locale.hpp>
#include "../Game/Game.h"
#include "../World Map Generator/WorldMapGenLib.h"

using namespace::std;
using namespace boost::locale;

void PlayerUI::InitializeUI()
{
	generator gen;
	gen.add_messages_path("..\\locale");
	gen.add_messages_domain("Game");

	//-- LANGUAGE SWITCH --
	std::locale loc = gen("de_DE.UTF-8");
	//std::locale loc = gen("");
	std::locale::global(loc);
	std::cout.imbue(loc);

	std::cout << translate("UI Initalized.") << std::endl;
}

void PlayerUI::PlayerName()
{
	std::cout << "Enter Player Name:" << std::endl;
}

void PlayerUI::ShowStartMessage()
{
	std::cout << "START" << std::endl;
}

void PlayerUI::BeginGame()
{
	std::cout << "Beginning Game" << std::endl;
	Game game = Game(1,1);
	game.MainLoop();
}