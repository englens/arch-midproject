#pragma once
#ifdef UI_EXPORTS
#define UI_API __declspec(dllexport)
#else
#define UI_API __declspec(dllimport)
#endif

class UI_API PlayerUI {
	public:
	void InitializeUI();

	void BeginGame();

	void ShowStartMessage();

	void PlayerName();
};

