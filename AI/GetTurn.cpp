#include "GetTurn.h"
#include <iostream>

void GetTurn(int numPlayers, int numAI)
{
	std::cout << "Turn Started";
	if (numPlayers == 0 && numAI == 2)
	{
		std::cout << "Computer Player 1 Moves";
		std::cout << "Computer Player 2 Moves";
	}
	else if (numPlayers == 1 && numAI == 1)
	{
		std::cout << "Human Player 1 Moves";
		std::cout << "Computer Player Moves";
	}
	else if (numPlayers == 2 && numAI == 0)
	{
		std::cout << "Human Player 1 Moves";
		std::cout << "Human Player 2 Moves";
	}
	else
	{
		std::cout << "Invalid Number of Players, turn cannot proceed";
	}
}