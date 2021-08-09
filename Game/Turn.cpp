#include "Turn.h"

void Turn::CreateSnapshot(int game[3])
{
	player1Health = game[0];
	player2Health = game[1];
	turnNum++;
	game[2] = turnNum;
}

int* Turn::Restore()
{
	int game[3] = { player1Health, player2Health, turnNum };
	return game;

}