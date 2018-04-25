//
// Created by kejbi on 24.04.18.
//
#include "roulettetile.h"


RouletteTile::RouletteTile(int v, color c) {
    value=v;
    tile_color=c;

}

int RouletteTile::getValue() {
    return value;
}

color RouletteTile::getColor() {
    return tile_color;
}

void RouletteTile::setColor(color c) {
    tile_color=c;

}

void RouletteTile::setValue(int v) {
    value=v;

}

RouletteTile::RouletteTile() {

}
std::ostream& operator<< (std::ostream &output, RouletteTile const& rt)
{
    if(rt.tile_color==green){
        output<<"green ";
    }
    if(rt.tile_color==black){
        output<<"black ";
    }
    if(rt.tile_color==red){
        output<<"red ";
    }
    output<<rt.value;
    return output;
}
