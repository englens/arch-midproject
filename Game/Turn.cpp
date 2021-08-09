#include "Turn.h"

void Turn::CreateSnapshot(int player1HealthIn, int player2HealthIn, int turnNumIn)
{
	player1Health = player1HealthIn;
	player2Health = player2HealthIn;
	turnNum = turnNumIn++;
}

int* Turn::Restore()
{
	int game[3] = { player1Health, player2Health, turnNum };
	return game;

}