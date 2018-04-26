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
    void betColor(const int credit, color c, int m); //credit - amount of bet credits, c - bet color, m - multiplier of bet
    void betValue(const int credit, int value, int m);// value - bet number
    bool goodBet(color c, int v); //c- color on the roulette, v - value on the roulette, returns true when bet is correct, false when isn't
    color getBetColor();
    int getBetValue();
    int getBetCredits();
    int getMultiplier();

};
#endif //ROULETTE_BETS_H
