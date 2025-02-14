#include <gtest/gtest.h>
#include "../include/board.h"

class BoardTest : public ::testing::Test {
protected:
    void SetUp() override {
        board = new Board();
    }

    void TearDown() override {
        delete board;
    }

    Board* board;
};

TEST_F(BoardTest, InitialBoardIsEmpty) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            EXPECT_EQ(board->getCell(i, j), (i*3)+(j+1));
        }
    }
}

TEST_F(BoardTest, PlaceSymbol) {
    EXPECT_TRUE(board->placeSymbol(0, 0, 'X'));
    EXPECT_EQ(board->getCell(0, 0), 'X');
}

TEST_F(BoardTest, PlaceSymbolOnOccupiedCell) {
    board->placeSymbol(0, 0, 'X');
    EXPECT_FALSE(board->placeSymbol(0, 0, 'O'));
    EXPECT_EQ(board->getCell(0, 0), 'X');
}

TEST_F(BoardTest, PlaceSymbolOutOfBounds) {
    EXPECT_FALSE(board->placeSymbol(-1, 0, 'X'));
    EXPECT_FALSE(board->placeSymbol(3, 0, 'X'));
    EXPECT_FALSE(board->placeSymbol(0, -1, 'X'));
    EXPECT_FALSE(board->placeSymbol(0, 3, 'X'));
}

TEST_F(BoardTest, IsCellEmpty) {
    EXPECT_TRUE(board->isCellEmpty(0, 0));
    board->placeSymbol(0, 0, 'X');
    EXPECT_FALSE(board->isCellEmpty(0, 0));
}

TEST_F(BoardTest, IsBoardFull) {
    EXPECT_FALSE(board->isBoardFull());

    char symbols[] = {'X', 'O'};
    int symbolIndex = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board->placeSymbol(i, j, symbols[symbolIndex]);
            symbolIndex = (symbolIndex + 1) % 2;
        }
    }

    EXPECT_TRUE(board->isBoardFull());
}

TEST_F(BoardTest, ResetBoard) {
    board->placeSymbol(0, 0, 'X');
    board->placeSymbol(1, 1, 'O');
    board->resetBoard();

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            EXPECT_EQ(board->getCell(i, j), ' ');
        }
    }
}

TEST_F(BoardTest, GameSequence) {
    EXPECT_TRUE(board->placeSymbol(0, 0, 'X'));
    EXPECT_TRUE(board->placeSymbol(1, 1, 'O'));
    EXPECT_TRUE(board->placeSymbol(0, 1, 'X'));
    EXPECT_TRUE(board->placeSymbol(2, 2, 'O'));

    EXPECT_EQ(board->getCell(0, 0), 'X');
    EXPECT_EQ(board->getCell(1, 1), 'O');
    EXPECT_EQ(board->getCell(0, 1), 'X');
    EXPECT_EQ(board->getCell(2, 2), 'O');
}

TEST_F(BoardTest, ValidSymbols) {
    EXPECT_TRUE(board->placeSymbol(0, 0, 'X'));
    EXPECT_TRUE(board->placeSymbol(1, 1, 'O'));
    EXPECT_FALSE(board->placeSymbol(2, 2, 'A'));
}
