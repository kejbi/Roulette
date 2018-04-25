cmake_minimum_required(VERSION 3.9)
project(Roulette)

set(CMAKE_CXX_STANDARD 11)

add_executable(Roulette main.cpp circullar_list.h roulettetile.h roulettetile.cpp roulette.cpp roulette.h bets.cpp bets.h player.cpp player.h saveload.cpp saveload.h interface.cpp interface.h inputvalidator.cpp inputvalidator.h)