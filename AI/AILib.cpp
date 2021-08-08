#include "framework.h"
#include "AILib.h"
#include <iostream>

AI_API int numPlayers;

AI_API int numAI;

void AILib::GetTurn(int numPlayers, int numAI)
{

	std::cout << "Turn Started";
	if (numPlayers == 0 && numAI == 2)
	{
		std::cout << "Computer Player 1 Moves" << std::endl;
		std::cout << "Computer Player 2 Moves" << std::endl;
	}
	else if (numPlayers == 1 && numAI == 1)
	{
		std::cout << "Human Player 1 Moves" << std::endl;
		std::cout << "Computer Player Moves" << std::endl;
	}
	else if (numPlayers == 2 && numAI == 0)
	{
		std::cout << "Human Player 1 Moves" << std::endl;
		std::cout << "Human Player 2 Moves" << std::endl;
	}
	else
	{
		std::cout << "Invalid Number of Players, turn cannot proceed" << std::endl;
	}
}

AILib::AILib(int numP, int numA)
{
	numPlayers = numP;
	numAI = numA;
	std::cout << "Game initialized with " << numPlayers << " human players and " << numAI <<" AI players" << std::endl;
	GetTurn(numPlayers, numAI);
}