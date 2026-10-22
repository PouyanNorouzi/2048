#ifndef RAND_HPP
#define RAND_HPP

#include <random>

class Rand_int {
public:
  Rand_int(int low, int high) : dist{low, high} {}
  int operator()() { return dist(re); } // draw an int
  void seed(int s) { re.seed(s); }      // choose new random engine seed
private:
  std::default_random_engine re;
  std::uniform_int_distribution<> dist;
};

#endif
