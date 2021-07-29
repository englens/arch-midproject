#ifdef AI_EXPORTS
#define AI_API __declspec(dllexport)
#else
#define AI_API __declspec(dllimport)
#endif
#include "AILib.h"

class AI_API AIBuilder {
public:
	enum Difficulty
	{
		/** Set difficulty to easy */
		easy, 
		/** Set difficulty to medium */
		medium, 
		/** Set difficulty to hard */
		hard 
	};

	enum AIType
	{
		/** Set one difficulty for [game](@ref Game)  duration */
		AIstatic, 
		/** Adjust difficulty based on [game](@ref Game) state */
		AIdynamic 
	};

	/** 
	* Set properties of [AILib](@ref AILib) 
	*/
	void setAIType(AIType type);

	/**
	* [Static](@ref AIType.AIstatic): Set one difficulty for game duration
	*/
	void setStaticDifficulty(AIType type);

	/**
	* [Dynamic](@ref AIType.AIdynamic): Set initial difficulty
	*/
	void setStartingDifficulty(Difficulty dif);

	/**
	* [Dynamic](@ref AIType.AIdynamic): Adjust difficulty when player is winning
	*/
	void setWinningDifficulty(Difficulty dif);

	/**
	* [Dynamic](@ref AIBuilder::AIType.AIdynamic): Adjust difficulty when player is losing
	*/
	void setLosingDifficulty(Difficulty dif);

	/** 
	* Build the AI
	*/
	AILib* Create(); 
};
