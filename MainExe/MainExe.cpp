// MainExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//include for UI library
#include "..\UI\PlayerUI.h"
#include <iostream>

int main()
{
    std::cout << "Greetings Professor Falken. Would you like to play a game?" << std::endl;
	PlayerUI profFalken;
	profFalken.InitializeUI();
	profFalken.BeginGame();
}
