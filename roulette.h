//
// Created by kejbi on 24.04.18.
//

#ifndef ROULETTE_ROULETTE_H
#define ROULETTE_ROULETTE_H

#include "circullar_list.h"
#include "roulettetile.h"

class Roulette{
private:
    CircullarList<RouletteTile> tab;
public:
    Roulette();
    void spin();
    color getColor();
    int getValue();
    RouletteTile getActual();
};
#endif //ROULETTE_ROULETTE_H
