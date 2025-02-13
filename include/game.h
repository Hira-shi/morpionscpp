#ifndef GAME_H
#define GAME_H

class Game {
private:
public:
    Game();
    ~Game();

    int getCurrentPlayer();
    char getCurrentSymbol();
    bool isGameInProgress();

    bool switchPlayer(char player);
    bool winConditions(std::vector<std::vector<char>> board);

    bool gameReset(char choice);

};

#endif //GAME_H
