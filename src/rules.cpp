#include "../include/rules.h"

bool checkWin (Board board, char C) {
    std::vector<std::vector<char>> win = board.getBoard();
    for (int i = 0; i < 3; i++) {
        if (win[i][0] == C && win[i][1] == C && win[i][2] == C) {
            return true;
        } else if (win[0][i] == C && win[1][i] == C && win[2][i] == C) {
            return true;
        }
    }
    if (win[0][0] == C && win[1][1] == C && win[2][2] == C) {
        return true;
    } else if (win[0][2] == C && win[1][1] == C && win[2][0] == C) {
        return true;
    } else {
        return false;
    }
}

bool checkWin (const std::vector<std::vector<char>>&win) {
    checkWin(win, 'X');
    checkWin(win, 'O');
}


Board setBoard(const Board& win);

bool checkDraw (const std::vector<std::vector<char>>&win) {
    Board board = setBoard(win);
    if (checkWin(win) == false && board.isBoardFull()) {
        return true;
    }
    return false;
}

bool isValidMove(Board board, int row, int col) {
    std::vector<std::vector<char>> win = board.getBoard();
    if (win[row][col] == ' ') {
        return true;
    }
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return false;
    }
    return false;
}

char nextPlayer(char C) {
    if (C == 'X') {
        return 'O';
    }
    if (C == 'O') {
        return 'X';
    }
}