#include "PlayerUI.h"
#include "../Core/Core.h"
#include <iostream>
#include "../Game/Game.h"
#include "../World Map Generator/DrawMap.h"


PlayerUI::PlayerUI()
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
	// game.MainLoop();
}

void PlayerUI::ShowMap()
{
	std::cout << "Generating World..." << std::endl;
	// DrawWorld newWorld = DrawWorld();
}