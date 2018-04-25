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
