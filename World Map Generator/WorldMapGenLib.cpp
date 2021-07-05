#include "framework.h"
#include "WorldMapGenLib.h"
#include <iostream>

WORLDMAPGEN_API int worldMapID;

void WorldMapLib::DrawWorld()
{
	std::cout << "World is drawn, enjoy the game";
}

//Constructor, assigns variable
WorldMapLib::WorldMapLib()
{
	worldMapID = 0;
	worldMapID++;
	std::cout << "World Map lib called, object of class created ";
	DrawWorld();
}