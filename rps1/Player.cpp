/**
 * Player base class implementation
 *
 */

#include "Player.h"

Player::~Player() {
    delete this;
}

selection_t Player::getRPS() {
    return RPS;
}

void Player::setRPS(selection_t type) {
    RPS = type;
}

std::string Player::getName() {
    return name;
}

void Player::setName(std::string in) {
    name = std::move(in);
}

void Player::makeRPSChoice() {
    setRPS(selection->makeSelection());
}
