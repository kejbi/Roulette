//
// Created by kejbi on 24.04.18.
//

#ifndef ROULETTE_ROULETTE_H
#define ROULETTE_ROULETTE_H

#include "circullar_list.h"
#include "roulettetile.h"

class Roulette{
private:
    CircullarList<RouletteTile> tab; //clist which is imitation of roulette
public:
    Roulette();// constructor which adds to tab 37 elements of roulette, in correct order (like in Casino)
    void spin();//changes actual tile going by random number of next elements of clist
    color getColor();
    int getValue();
    RouletteTile getActual();
};
#endif //ROULETTE_ROULETTE_H
