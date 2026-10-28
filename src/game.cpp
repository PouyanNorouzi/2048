#include "game.hpp"

#include "grid.hpp"

#include <iostream>

std::string directionToString(Direction direction) {
    switch(direction) {
    case Direction::UP:    return "Up";
    case Direction::DOWN:  return "Down";
    case Direction::RIGHT: return "Right";
    case Direction::LEFT:  return "Left";
    default:               return "Invalid";
    }
}
Game::Game(int grid_size) : grid_size_(grid_size), state_(grid_size) {
    // Rand_int rand {1, 2};
    std::cout << state_.toString() << "\n";

    status = GameStatus::ONGOING;

    // TODO make the start random
    state_.setIndex(0, 0, 2);
}

void Game::move(Direction direction) {
    std::cout << "moving " + directionToString(direction) + "\n";
}
