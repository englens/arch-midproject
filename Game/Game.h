#pragma once
#ifdef GAME_EXPORTS
#define GAME_API __declspec(dllexport)
#else
#define GAME_API __declspec(dllimport)
#endif

// This class is exported from the dll
class GAME_API Game {
public:
	void MainLoop();
	
};