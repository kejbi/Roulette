//
// Created by kejbi on 24.04.18.
//

#ifndef ROULETTE_PLAYER_H
#define ROULETTE_PLAYER_H

#include <iostream>
#include "roulettetile.h"

class Player{
private:
    int credits; //amount of credits player has
    std::string name; //name of player
public:
    Player(int c, std::string n);
    Player();
    int takeCredits(const int c); //takes c credits from player's credits
    void addCredits(const int c); //adds c credits to player's credits
    std::string getName();
    int getCredits();
    void setName(const std::string n);
    void setCredits(const int c);

};

#endif //ROULETTE_PLAYER_H
