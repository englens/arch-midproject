#pragma once

class Turn {
private:
	int player1Health, player2Health, turnNum;
public:
	void CreateSnapshot(int player1HealthIn, int player2HealthIn, int turnNumIn);
	int* Restore();
};