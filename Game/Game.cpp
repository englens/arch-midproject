#include "Game.h"

#include "../World Map Generator/WorldMapGenLib.h"
#include "../Animation/Animation.h"
#include "../AI/AILib.h"
#include "../Damage Calculation/Damage.h"
#include <iostream>
#include "../boost_1_76_0/boost/locale/message.hpp"
#include "Turn.h"

Game::Game(int numP, int numA)
{
	numPlayers = numP;
	numAI = numA;
	std::cout << "Game Object Created." << std::endl;
}

void Game::MainLoop()
{
	AILib aiController = AILib(numPlayers, numAI);
	WorldMapLib mapDrawer = WorldMapLib();
	Turn turn;
	bool inGame = true;
	player1Health = 100;
	player2Health = 100;
	int turnNum = 0;
	int game[3] = { player1Health, player2Health, turnNum };
	std::string input;
	// This would be a while loop if actually implemented
	while (inGame)
	{
		std::cout << "Turn " << turnNum << std::endl;
		std::cout << "P1 Health: " << player1Health << std::endl;
		std::cout << "P2 Health: " << player2Health << std::endl;
		std::cout << "Press the a key to proceed to the next turn, press z to undo, press n to accept the futility of war" << std::endl;
		std::cin >> input;
		if (input == "a")
		{
			// 1 - draw map
			mapDrawer.DrawWorld();
			// 2 - Update turn information
			turn.CreateSnapshot(game);
			// 3 - get player+AI input
			int* thisTurn = aiController.GetTurn(numPlayers, numAI, player1Health, player2Health);
			player1Health = thisTurn[0];
			player2Health = thisTurn[1];
			// 4 - Draw animation of turns
			Animation::DrawAnimation();
		}
		else if (input == "z" && turnNum != 0)
		{
			int* oldTurn = turn.Restore();
			player1Health = oldTurn[0];
			player2Health = oldTurn[1];
			turnNum = oldTurn[2];
		}
		else if (input == "n")
		{
			std::cout << "GG" << std::endl;
			inGame = false;
		}
		else
		{
			std::cout << "Invalid input, try again" << std::endl;
		}
		
	}
	// put observer here
	std::cout << translate("Main Game Loop ended.") << std::endl;
}


