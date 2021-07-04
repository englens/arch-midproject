#include "framework.h"
#include "WorldMapGenLib.h"
#include "DrawMap.h"
#include <iostream>

WORLDMAPGEN_API int worldMapID;

//Constructor, assigns variable
WorlMapLib::WorlMapLib()
{
	worldMapID = 0;
	worldMapID++;
	std::cout << "World Map lib called, object of class created ";
	DrawWorld();
}