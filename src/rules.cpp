#include "../include/rules.h"

Board setBoard(const std::vector<std::vector<char>>& win);

bool checkLaWin (std::vector<std::vector<char>> win, char C) {
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

bool Rules::checkWin (const std::vector<std::vector<char>>&win) {
    if (checkLaWin(win, 'X'))
        return true;
    if (checkLaWin(win, 'O'))
        return true;
    return false;
}

Board setBoard(const std::vector<std::vector<char>>& win) {
    return Board(win);
}

bool Rules::checkDraw (const std::vector<std::vector<char>>&win) {
    Board board = Board(win);
    if (checkWin(win) == false && board.isBoardFull()) {
        return true;
    }
    return false;
}

bool Rules::isValidMove(Board board, int row, int col) {
    std::vector<std::vector<char>> win = board.getBoard();
    if (win[row][col] == ' ') {
        return true;
    }
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return false;
    }
    return false;
}

char Rules::nextPlayer(char C) {
    if (C == 'X') {
        return 'O';
    }else if (C == 'O') {
        return 'X';
    } else {
        return C;
    }
}