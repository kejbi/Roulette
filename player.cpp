//
// Created by kejbi on 24.04.18.
//

#include "player.h"

int Player::takeCredits(const int c) {
    credits-=c;
    return c;
}

void Player::addCredits(const int c) {
    credits+=c;

}

Player::Player(int c, std::string n) {
    credits=c;
    name=n;

}

std::string Player::getName() {
    return name;
}

int Player::getCredits() {
    return credits;
}

void Player::setName(const std::string n) {
    name=n;
}

void Player::setCredits(const int c) {
    credits=c;

}

Player::Player() {

}
