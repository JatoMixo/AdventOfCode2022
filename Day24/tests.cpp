#include <iostream>
#include <stdexcept>
#include <vector>
#include <D:/Miguel/Programas/AdventOfCode2022/Day24/main.cpp>

using std::vector;

void IS_TRUE(bool condition, std::string exception);
void IS_FALSE(bool condition, std::string exception);

int main(){

  // This is the worst thing I have ever done with an array
  vector<Coordinate> blizards = {Coordinate(0, 0, 1), Coordinate(1, 0, 1), Coordinate(3, 0, 3), Coordinate(4, 0, 0), Coordinate(5, 0, 3), Coordinate(1, 1, 3), Coordinate(4, 1, 3), Coordinate(5, 1, 3), Coordinate(0, 2, 1), Coordinate(1, 2, 2), Coordinate(3, 2, 1), Coordinate(4, 2, 3), Coordinate(5, 2, 1), Coordinate(0, 3, 3), Coordinate(1, 3, 0), Coordinate(2, 3, 2), Coordinate(3, 3, 0), Coordinate(4, 3, 0), Coordinate(5, 3, 1)};

  return 0;
}

void IS_TRUE(bool condition, std::string exception){
  if (condition) return;
  throw std::invalid_argument(exception);
}

void IS_FALSE(bool condition, std::string exception){
  IS_TRUE(!condition, exception);
}