#include <gtest/gtest.h>
#include "../include/game.h"
#include "../include/board.h"

class GameTest : public ::testing::Test {
protected:
    void SetUp() override {
        game = new Game();
    }

    void TearDown() override {
        delete game;
    }

    Game* game;
};

TEST_F(GameTest, InitializationTest) {
    EXPECT_TRUE(game->getCurrentSymbol(), 'X');
    EXPECT_TRUE(game->isGameInProgress());
}

TEST_F(GameTest, PlayerSwitchTest) {
    EXPECT_TRUE(game->switchPlayer('X'), 'O');
}

TEST_F(GameTest, WinConditionsTest) {
    EXPECT_TRUE(game->winConditions({
        {' ',' ',' '},
        {'X','X','X'},
        {' ',' ',' '}
    }
    ));
    EXPECT_TRUE(game->winConditions({
        {'X',' ',' '},
        {'X',' ',' '},
        {'X',' ',' '}
    }
));
    EXPECT_TRUE(game->winConditions({
        {'X',' ',' '},
        {' ','X',' '},
        {' ',' ','X'}
    }
));
}

TEST_F(GameTest, DrawGameTest) {
    EXPECT_FALSE(game->winConditions({
        {'X','X','O'},
        {'O','O','X'},
        {'X','O','X'}
    }
));
}

TEST_F(GameTest, GameResetTest) {
    // Pas sur de mon coup
    EXPECT_TRUE(game->gameReset('O'), new game);
}
