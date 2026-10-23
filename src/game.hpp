#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <vector>
#define GRID_SIZE 4 // TODO: Make it dynamic later

enum Direction { UP, DOWN, LEFT, RIGHT, NONE };

enum GameStatus { WIN, LOSS, ONGOING };

class Game {
  private:
    std::vector<std::vector<int>> state_ = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };
    GameStatus checkGameStatus();

  public:
    GameStatus status;

    Game();
    void        move(Direction direction);
    std::string to_string();
};

#endif
