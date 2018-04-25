//
// Created by kejbi on 24.04.18.
//

#ifndef ROULETTE_SAVELOAD_H
#define ROULETTE_SAVELOAD_H

#include <iostream>
#include <fstream>
#include "player.h"

class SaveLoad{
public:
    void saveGame(std::string filename, Player& p);
    void loadGame(std::string filename, Player& p);
};
#endif //ROULETTE_SAVELOAD_H
