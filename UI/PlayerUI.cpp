#include "PlayerUI.h"
#include "../Core/Core.h"
#include <iostream>
#include "../Game/Game.h"
#include "../World Map Generator/WorldMapGenLib.h"


void PlayerUI::InitializeUI()
{
	std::cout << "UI Initalized." << std::endl;
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
	Game game = Game();
	game.MainLoop();
}