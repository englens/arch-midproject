#include "framework.h"
#include "AILib.h"
#include "GetTurn.h"
#include <iostream>

AI_API int numPlayers;

AI_API int numAI;

AILib::AILib(int numP, int numA)
{
	numPlayers = numP;
	numAI = numA;
	std::cout << "Game initialized with " << numPlayers << " human players and " << numAI << " AI players";
	GetTurn(numPlayers, numAI);
}