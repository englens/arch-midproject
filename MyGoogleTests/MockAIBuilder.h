#pragma once
#include "../AI/AIBuilder.h"
#include "gmock/gmock.h"

class MockAIBuilder : AIBuilder {
public:
	MOCK_METHOD0(setAIType, AIType());
	MOCK_METHOD0(setStaticDifficulty, Difficulty());
	MOCK_METHOD0(setStartingDifficulty, Difficulty());
	MOCK_METHOD0(setWinningDifficulty, Difficulty());
	MOCK_METHOD0(setLosingDifficulty, Difficulty());
	MOCK_METHOD0(Create, void());
};