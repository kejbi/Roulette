//
// Created by kejbi on 23.04.18.
//

#ifndef ROULETTE_ROULETTETILE_H
#define ROULETTE_ROULETTETILE_H

#include <iostream>

//possible color of tile of roulette
enum color{
    green,
    black,
    red,
    none
};
//roulettetile is single tile of roulette
class RouletteTile{
private:
    int value; //number of tile
    color tile_color; //color of tile
    friend std::ostream& operator<< (std::ostream&,RouletteTile const&); //on output "color value"
public:
    RouletteTile();
    RouletteTile(int v, color c); //v - number of tile, c - color of tile
    int getValue();
    color getColor();
    void setColor(color c); //c - new color of tile
    void setValue(int v); //v - new number of tile
};
#endif //ROULETTE_ROULETTETILE_H
