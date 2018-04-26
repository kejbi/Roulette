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
    void saveGame(std::string filename, Player& p); //save game to file, filename - name of save-file, p - player which facilities we want to save
    void loadGame(std::string filename, Player& p); //load game from file, -------||--------
};
#endif //ROULETTE_SAVELOAD_H
