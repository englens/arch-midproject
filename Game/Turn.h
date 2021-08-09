#pragma once

class Turn {
private:
	int player1Health, player2Health, turnNum;
public:
	void CreateSnapshot(int game[3]);
	int* Restore();
};