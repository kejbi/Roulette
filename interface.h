//
// Created by kejbi on 24.04.18.
//

#ifndef ROULETTE_INTERFACE_H
#define ROULETTE_INTERFACE_H

#include "roulette.h"
#include "player.h"
#include "saveload.h"
#include "bets.h"
#include "inputvalidator.h"

class Interface{
private:
    Roulette r;
    Player pl;
    SaveLoad sl;
    Bets b;
    InputValidator iv;
    int choice, amount, running;
    std::string n;
public:
    void run();
    void readChoice(int a, int b);
    void readAmount(int a);
    void readName(int l);
    void newGame();
    void loadGame();
    void saveGame();
    void makeBetValue();
    void makeBetColor();
    void startGame();
    void spinning();
    void betCredits();

};
#endif //ROULETTE_INTERFACE_H
