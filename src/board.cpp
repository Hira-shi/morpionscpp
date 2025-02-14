#include "../include/board.h"

Board createBoard() {
    Board board;
    for (int i = 0; i < 3 ; ++i) {
        for (int j = 0; j < 3 ; ++j) {
            board[i][j] = 'w';
        }
    }
    return board;
}

void placePiece(Board board, char C, int row, int col) {
    board[row][col] = C;
}

void displayBoard(Board board) {
    for (int i = 0; i < 3 ; ++i) {
        for (int j = 0; j < 3 ; ++j) {
            std::cout << board[i][j];
            if (j != 2) {
                std::cout << ' | ';
            }
        }
        std::cout << '\n';
        if (i != 2) {
            std::cout << '----------\n';
        }
    }
}

int rowCount(int n) {
    switch (n) {
        case 1:
            return 0;
        case 2:
            return 0;
        case 3:
            return 0;
        case 4:
            return 1;
        case 5:
            return 1;
        case 6:
            return 1;
        case 7:
            return 2;
        case 8:
            return 2;
        case 9:
            return 2;
    }
}

int colCount(int n) {
    switch (n) {
        case 1:
            return 0;
        case 2:
            return 1;
        case 3:
            return 2;
        case 4:
            return 0;
        case 5:
            return 1;
        case 6:
            return 2;
        case 7:
            return 0;
        case 8:
            return 1;
        case 9:
            return 2;
    }
}

