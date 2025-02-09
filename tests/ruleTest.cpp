#include <gtest/gtest.h>
#include "../include/rules.h"

class RulesTest : public ::testing::Test {
protected:
    void SetUp() override {
        rules = new Rules();
    }

    void TearDown() override {
        delete rules;
    }

    Rules* rules;
};

TEST_F(RulesTest, VerticalWinTest) {
    EXPECT_TRUE(rules->checkWin({
        {'X', ' ', ' '},
        {'X', ' ', ' '},
        {'X', ' ', ' '}
    }));

    EXPECT_TRUE(rules->checkWin({
        {' ', 'O', ' '},
        {' ', 'O', ' '},
        {' ', 'O', ' '}
    }));

    EXPECT_TRUE(rules->checkWin({
        {' ', ' ', 'X'},
        {' ', ' ', 'X'},
        {' ', ' ', 'X'}
    }));
}

TEST_F(RulesTest, HorizontalWinTest) {
    EXPECT_TRUE(rules->checkWin({
        {'O', 'O', 'O'},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    }));

    EXPECT_TRUE(rules->checkWin({
        {' ', ' ', ' '},
        {'X', 'X', 'X'},
        {' ', ' ', ' '}
    }));

    EXPECT_TRUE(rules->checkWin({
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {'O', 'O', 'O'}
    }));
}

// Test des victoires diagonales
TEST_F(RulesTest, DiagonalWinTest) {
    EXPECT_TRUE(rules->checkWin({
        {'X', ' ', ' '},
        {' ', 'X', ' '},
        {' ', ' ', 'X'}
    }));

    EXPECT_TRUE(rules->checkWin({
        {' ', ' ', 'O'},
        {' ', 'O', ' '},
        {'O', ' ', ' '}
    }));
}

TEST_F(RulesTest, NoWinTest) {
    EXPECT_FALSE(rules->checkWin({
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    }));

    EXPECT_FALSE(rules->checkWin({
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'O', 'X', 'O'}
    }));
}

TEST_F(RulesTest, DrawTest) {
    EXPECT_TRUE(rules->checkDraw({
        {'X', 'O', 'X'},
        {'X', 'O', 'O'},
        {'O', 'X', 'X'}
    }));

    EXPECT_FALSE(rules->checkDraw({
        {'X', 'O', 'X'},
        {'X', ' ', 'O'},
        {'O', 'X', 'X'}
    }));
}

TEST_F(RulesTest, ValidMoveTest) {
    std::vector<std::vector<char>> board = {
        {' ', 'O', 'X'},
        {'X', ' ', 'O'},
        {'O', 'X', ' '}
    };

    EXPECT_TRUE(rules->isValidMove(board, 0, 0));
    EXPECT_TRUE(rules->isValidMove(board, 1, 1));
    EXPECT_TRUE(rules->isValidMove(board, 2, 2));

    EXPECT_FALSE(rules->isValidMove(board, 0, 1));
    EXPECT_FALSE(rules->isValidMove(board, 1, 2));

    EXPECT_FALSE(rules->isValidMove(board, -1, 0));
    EXPECT_FALSE(rules->isValidMove(board, 0, -1));
    EXPECT_FALSE(rules->isValidMove(board, 3, 0));
    EXPECT_FALSE(rules->isValidMove(board, 0, 3));
}

TEST_F(RulesTest, PlayerSwitchTest) {
    EXPECT_EQ(rules->nextPlayer('X'), 'O');
    EXPECT_EQ(rules->nextPlayer('O'), 'X');
}