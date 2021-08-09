#include "framework.h"
#include "AILib.h"
#include <iostream>
#include "../Damage Calculation/Damage.h"

AI_API int numPlayers;

AI_API int numAI;

int* AILib::GetTurn(int numPlayers, int numAI, int player1Health, int player2Health)
{
	//Game key
	//game[0] = player1Health
	//game[1] = player2Health
	Damage damage = Damage();
	std::cout << "Turn Started";
	if (numPlayers == 0 && numAI == 2)
	{
		std::cout << "Computer Player 1 Moves" << std::endl;
		player2Health = player2Health - Damage::Calculation(10, 6);
		std::cout << "Computer Player 2 Moves" << std::endl;
		player1Health = player1Health - Damage::Calculation(10, 6);
	}
	else if (numPlayers == 1 && numAI == 1)
	{
		std::cout << "Human Player 1 Moves" << std::endl;
		player2Health = player2Health - Damage::Calculation(10, 6);
		std::cout << "Computer Player Moves" << std::endl;
		player1Health = player1Health - Damage::Calculation(10, 6);
	}
	else if (numPlayers == 2 && numAI == 0)
	{
		std::cout << "Human Player 1 Moves" << std::endl;
		player2Health = player2Health - Damage::Calculation(10, 6);
		std::cout << "Human Player 2 Moves" << std::endl;
		player1Health = player1Health - Damage::Calculation(10, 6);
	}
	else
	{
		std::cout << "Invalid Number of Players, turn cannot proceed" << std::endl;
	}
	int game[2] = { player1Health, player2Health };
	return game;
}

AILib::AILib(int numP, int numA)
{
	numPlayers = numP;
	numAI = numA;
	std::cout << "Game initialized with " << numPlayers << " human players and " << numAI << " AI players" << std::endl;
	int player1Health = 100;
	int player2Health = 100;
	GetTurn(numPlayers, numAI, player1Health,player2Health);
}