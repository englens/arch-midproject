#pragma once
#include "string"

class GAME_API GameObserver {
public:
	/** Creates game observer */
	GameObserver();
	/** Destroys game observer */
	~GameObserver();
	/** receives game event */
	void Update(std::string message);
};