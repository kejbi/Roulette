//
// Created by kejbi on 23.04.18.
//

#ifndef ROULETTE_ROULETTETILE_H
#define ROULETTE_ROULETTETILE_H

enum color{
    green,
    black,
    red,
    none
};
class RouletteTile{
private:
    int value;
    color tile_color;
public:
    RouletteTile();
    RouletteTile(int v, color c);
    int getValue();
    color getColor();
    void setColor(color c);
    void setValue(int v);
};
#endif //ROULETTE_ROULETTETILE_H
