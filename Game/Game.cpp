#include "Game.h"
#include "../World Map Generator/WorldMapGenLib.h"
#include "../Animation/Animation.h"
#include "../AI/AILib.h"
#include <iostream>

Game::Game(int numP, int numA)
{
	numPlayers = numP;
	numAI = numA;
	std::cout << "Game Object Created." << std::endl;
}

void Game::MainLoop()
{

	std::cout << "Entering Main Game Loop." << std::endl; 
	AILib aiController = AILib(numPlayers, numAI);
	WorldMapLib mapDrawer = WorldMapLib();

	// This would be a while loop if actually implemented
	// 1 - draw map
	mapDrawer.DrawWorld();
	// 2 - get player+AI input
	aiController.GetTurn(numPlayers, numAI);
	// 3 - Calculate Damage
	//TODO: Need name of damage calc class/func
	// 5 - Draw animation of turns
	Animation::DrawAnimation();
	std::cout << "Main Game Loop ended." << std::endl;
}


