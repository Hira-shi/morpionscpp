#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "player.h"
#include "rules.h"

class Game {
private:
    char p1 = 'X';
    char p2 = 'O';
public:
    void gameProcess();
    char getP1(){return p1;}
    char getP2(){return p2;}
};

#endif //GAME_H
