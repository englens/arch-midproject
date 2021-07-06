#include "Game.h"
#include "../Damage Calculation/Damage.h"
#include "../World Map Generator/WorldMapGenLib.h"
#include "../Animation/Animation.h"
#include "../AI/AILib.h"
//#include <boost/locale.hpp>
#include <iostream>

//using namespace boost::locale;

Game::Game(int numP, int numA)
{
	numPlayers = numP;
	numAI = numA;
	std::cout << "Game Object Created." << std::endl;
}

void Game::MainLoop()
{
	//generator gen;
	//gen.add_messages_path(".");
	//gen.add_messages_domain("hello");

	//gen("de_DE.UTF - 8");
	//std::cout.imbue(std::locale());
	std::cout << "Entering Main Game Loop." << std::endl; 
	AILib aiController = AILib(numPlayers, numAI);
	WorldMapLib mapDrawer = WorldMapLib();
	Damage damage = Damage();

	// This would be a while loop if actually implemented
	// 1 - draw map
	mapDrawer.DrawWorld();
	// 2 - get player+AI input
	aiController.GetTurn(numPlayers, numAI);
	// 3 - Calculate Damage
	// damage.Calculation(1, 2);
	// 5 - Draw animation of turns
	Animation::DrawAnimation();
	std::cout << "Main Game Loop ended." << std::endl;
}


