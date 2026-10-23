#include "game.hpp"

#include <iostream>

std::string directionToString(Direction direction) {
    switch(direction) {
    case UP: return "Up";
    case DOWN: return "Down";
    case RIGHT: return "Right";
    case LEFT: return "Left";
    default: return "Invalid";
    }
}
Game::Game() {
    // Rand_int rand {1, 2};

    status = ONGOING;

    // TODO make the start random
    state_[0][0] = 2;
}

void Game::move(Direction direction) { std::cout << "moving " + directionToString(direction) + "\n"; }

std::string Game::to_string() {
    std::string res = "";
    res += '|';
    // build the roof

    for(auto row: state_) {
        for(auto cell: row) {}
    }

    return "";
}
