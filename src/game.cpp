#include "game.hpp"

Game::Game() {
    // Rand_int rand {1, 2};

    status = ONGOING;

    // make the start random
    state_[0][0] = 2;
}

std::string Game::to_string() {
    std::string res = "";
    res += '|';
    // build the roof

    for(auto row: state_) {
        for(auto cell: row) {}
    }

    return "";
}
