#include <gtest/gtest.h>
#include <src/gtest-internal-inl.h>

#include "../include/player.h"

class PlayerTest : public ::testing::Test{
protected:
    void SetUp() override{
        player = new Player();
    }
    void TearDown() override{
        delete player;
    }

    Player* player;
};

TEST_F(PlayerTest, PlayerOneOrTwo){
    EXPECT_TRUE(player->isPlayerOne('X'));
    EXPECT_FALSE(player->isPlayerOne('O'));
}

TEST_F(PlayerTest, isPlayable){
    EXPECT_FALSE(player->isPlayable({
        {'X',' ','O'},
        {'X','O','X'},
        {'O',' ',' '}
    }
        ));
    EXPECT_FALSE(player->isPlayable({
        {'X','O','X'},
        {'X','O','X'},
        {'O','X','O'}
    }
        ));
}