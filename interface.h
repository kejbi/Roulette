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
    int choice, amount, running=1;
    std::string n, gofurther;
    std::fstream f;
public:
    void run(); //runs game
    void readChoice(int a, int b); //[a,b] - range of acceptable read value
    void readAmount(int a); //a minimal value to read, maximum is set (1000)
    void readName(int l); //l - acceptable length of read name
    void newGame(); //reads credits and name of player
    bool loadGame(); //loads name and credits from save-file, return false when loading failed, true when successful
    void saveGame(); //save to save-file actual credits and name of player
    void makeBetValue(); //read amount of credits we want to bet and number we bet
    void makeBetColor(); //read amount of credits we want to bet and color we bet
    void startGame(); //starts game, after newgame() or loadgame()
    void spinning(); //mechanics of game, spinning of roulette, checking if bet is correct, adding/taking player's credits
    void betCredits(); //read amount of bet credits

};
#endif //ROULETTE_INTERFACE_H
