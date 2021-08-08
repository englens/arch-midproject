#include "MockAIBuilder.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(TestCaseName, TestName) {
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
};

// Ensures a difficulty type is set
TEST(AITest, difficulty) {
    MockAIBuilder aibuilder;
    EXPECT_CALL(aibuilder, setAIType());
}

// Ensures static difficulty is set
TEST(AITest, staticDifficulty) {
    MockAIBuilder aibuilder;
    EXPECT_CALL(aibuilder, setStaticDifficulty());
}

// Ensures dynamic difficulty is set and will adjust
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