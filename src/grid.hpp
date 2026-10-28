#ifndef GRID_HPP
#define GRID_HPP

#include <string>
#include <vector>

template<typename T> class SquareGrid {
  public:
    explicit SquareGrid(int size) : grid_(size), size_(size) {}

    T           getIndex(int row, int col) { return grid_[row * size_ + col]; }
    void        setIndex(int row, int col, T val) { grid_[row * size_ + col] = val; }
    std::string toString();

  private:
    std::vector<T> grid_;
    int            size_;
};

#endif
