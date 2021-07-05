#include "Game.h"
//#include "../World Map Generator/DrawMap.h"
//#include "../AI/GetTurn.h"
#include "../Animation/Animator.h"
#include <iostream>

void Game::MainLoop()
{
	int NumPlayers = 1;
	int NumAI = 1;
	std::cout << "Entering Main Game Loop." << std::endl; 
	Animator animator = Animator();
	// This would be a while loop if actually implemented

	// 1 - draw map
	//DrawWorld();
	// 2 - get player+AI input
	//GetTurn(NumPlayers, NumAI);
	// 3 - Calculate Damage
	//TODO: Need name of damage calc class/func
	// 4 - Send damage to score keeper
	//TODO: Need name of score class/func
	// 5 - Draw animation of turns
	//TODO: Need name of animation class/func
	std::cout << "Main Game Loop ended." << std::endl;
}