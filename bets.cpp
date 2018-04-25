//
// Created by kejbi on 24.04.18.
//

#include "bets.h"

void Bets::betColor(const int credit, color c, int m) {
    betcredits=credit;
    betcolor=c;
    betvalue=-1;
    multiplier=m;
}

void Bets::betValue(const int credit, int value, int m) {
    betcredits=credit;
    betvalue=value;
    betcolor=none;
    multiplier=m;

}

bool Bets::goodBet(color c, int v) {
    if(betcolor==c){
        return true;
    }
    else if(betvalue==v){
        return true;
    }
    else{
        return false;
    }
}

color Bets::getBetColor() {
    return betcolor;
}

int Bets::getBetValue() {
    return betvalue;
}

int Bets::getBetCredits() {
    return betcredits;
}

int Bets::getMultiplier() {
    return multiplier;
}
