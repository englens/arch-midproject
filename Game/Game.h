#pragma once
#ifdef GAME_EXPORTS
#define GAME_API __declspec(dllexport)
#else
#define GAME_API __declspec(dllimport)
#endif
#include "GameObserver.h"

// This class is exported from the dll
class GAME_API Game {
private:
	int numPlayers, numAI;
public:
	/** Attaches game observer to main game loop */
	void Attach(GameObserver* observer);
	/** Destroys game observer */
	void Detach(GameObserver* observer);
	/** Updates difficulty based on game state */
	void Notify();
	/** Constructs a game object*/
	Game(int numPlayers, int numAI);
	void MainLoop();
};