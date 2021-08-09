#ifdef AI_EXPORTS
#define AI_API __declspec(dllexport)
#else
#define AI_API __declspec(dllimport)
#endif

// This class is exported from the dll
class AI_API AILib {
public:
	AILib(int numP, int numA);
	int* GetTurn(int numPlayers, int numAI, int player1Health, int player2Health);
};

extern AI_API int numPlayers;

extern AI_API int numAI;