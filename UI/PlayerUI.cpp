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

	// Specify location of dictionaries
	gen.add_messages_path(".");
	gen.add_messages_domain("x");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	std::cout.imbue(locale());

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