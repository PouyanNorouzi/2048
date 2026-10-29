#include "grid.hpp"

#include <format>

using std::string;

// TODO: Do not hardcode the width numbers and the charecters themselves stuff like that
template<typename T> string SquareGrid<T>::toString() {
    string out = "";

    // build the roof
    out += std::format("{:-^{}}\n", '-', size_ * 8 + 1);

    // build the rows
    for(int i = 0; i < size_; i++) {
        out += '|';
        for(int j = 0; j < size_; j++) { out += std::format("{:^7}|", getIndex(i, j)); }
        out += "\n";
    }
    // build the foot
    out += std::format("{:-^{}}\n", '-', size_ * 8 + 1);

    return out;
}

template class SquareGrid<int>;
