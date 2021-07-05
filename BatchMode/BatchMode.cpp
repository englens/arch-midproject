// BatchMode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "..\Game\Game.h"
#include <iostream>

int main()
{
	std::cout << "Program now running in batch mode" << std::endl;
	Game batchGame = Game(0,2);
	batchGame.MainLoop();
}
