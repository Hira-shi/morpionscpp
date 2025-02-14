#ifndef GAME_H
#define GAME_H

#include <vector>
#include "board.h"


class Game {
private:
    char currentSymbol;
public:
    Game() = default;
    ~Game() = default;

    char getCurrentSymbol();
    bool isGameInProgress();

    char switchPlayer(char currentSymbol);
    bool winConditions(std::vector<std::vector<char>> board);

    bool gameReset(char choice);
};

#endif //GAME_H
