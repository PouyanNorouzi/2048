#ifndef GAME_HPP
#define GAME_HPP

#include "grid.hpp"

#define DEFAULT_GRID_SIZE 4

enum class Direction { UP, DOWN, LEFT, RIGHT, NONE };

enum class GameStatus { WIN, LOSS, ONGOING };

class Game {
  private:
    int             grid_size_;
    SquareGrid<int> state_;

    GameStatus checkGameStatus();

  public:
    GameStatus status;

    explicit Game(int grid_size = DEFAULT_GRID_SIZE);

    void        move(Direction direction);
    std::string toString() { return state_.toString(); }
};

#endif
