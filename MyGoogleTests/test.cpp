#include "MockAIBuilder.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

// Ensures a difficulty type is set, will fail since we have not implemented builder
TEST(AITest, difficulty) {
    MockAIBuilder aibuilder;
    EXPECT_CALL(aibuilder, setAIType());
}

// Ensures static difficulty is set, will fail since we have not implemented builder
TEST(AITest, staticDifficulty) {
    MockAIBuilder aibuilder;
    EXPECT_CALL(aibuilder, setStaticDifficulty());
}

// Ensures dynamic difficulty is set and will adjust, will fail since we have not implemented builder
TEST(AITest, dynamicDifficulty) {
    MockAIBuilder aibuilder;
    EXPECT_CALL(aibuilder, setStartingDifficulty());
    EXPECT_CALL(aibuilder, setLosingDifficulty());
    EXPECT_CALL(aibuilder, setWinningDifficulty());
}

// Ensures the AI is successfully created
// TEST(AITest, difficulty) {
//     MockAIBuilder aibuilder;
//     EXPECT_CALL(aibuilder, Create());
// }