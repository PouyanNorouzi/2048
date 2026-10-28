#include "grid.hpp"

using std::string;

template<typename T> string SquareGrid<T>::toString() {
    string out = "";

    // build the roof
    for(int i = 0; i < size_; i++) { out += "--"; }

    // build the rows

    // build the foot

    return out;
}

template class SquareGrid<int>;
