#include "Game.h"
#include "../World Map Generator/DrawMap.h"
#include "../Animation/Animation.h"
#include "../AI/AILib.h"
#include "../AI/GetTurn.h"
#include <iostream>

void Game::MainLoop()
{
	int NumPlayers = 1;
	int NumAI = 1;
	std::cout << "Entering Main Game Loop." << std::endl; 
	AILib aiController = AILib(NumPlayers, NumAI);
	// This would be a while loop if actually implemented

	// 1 - draw map
	DrawWorld();
	// 2 - get player+AI input
	GetTurn(NumPlayers, NumAI);
	// 3 - Calculate Damage
	//TODO: Need name of damage calc class/func
	// 5 - Draw animation of turns
	Animation::DrawAnimation();
	std::cout << "Main Game Loop ended." << std::endl;
}