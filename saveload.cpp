//
// Created by kejbi on 24.04.18.
//

#include "saveload.h"


void SaveLoad::saveGame(std::string filename, Player& p) {
    std::fstream f;
    f.open(filename,std::ios::out);
    f<<p.getName()<<"\n"<<p.getCredits()<<std::endl;
    f.close();

}

void SaveLoad::loadGame(std::string filename, Player &p) {
    std::fstream f;
    std::string line;
    f.open(filename,std::ios::in);
    getline(f,line);
    p.setName(line);
    getline(f,line);
    p.setCredits(std::stoi(line));
    f.close();

}
