//
// Created by kejbi on 24.04.18.
//

#ifndef ROULETTE_BETS_H
#define ROULETTE_BETS_H

#include "roulettetile.h"
#include <iostream>

class Bets{
private:
    color betcolor;
    int betvalue;
    int betcredits;
    int multiplier;
public:
    void betColor(const int credit, color c, int m);
    void betValue(const int credit, int value, int m);
    bool goodBet(color c, int v);
    color getBetColor();
    int getBetValue();
    int getBetCredits();
    int getMultiplier();

};
#endif //ROULETTE_BETS_H
