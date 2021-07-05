#include "framework.h"
#include "WorldMapGenLib.h"
#include <iostream>

void WorldMapLib::DrawWorld()
{
	worldMapID = 0;
	std::cout << "World is drawn, enjoy the game";
}

//Constructor, assigns variable
WorldMapLib::WorldMapLib()
{
	worldMapID++;
	std::cout << "World Map lib called, object of class created ";
	DrawWorld();
}