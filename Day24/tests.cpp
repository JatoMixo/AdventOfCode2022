#include <iostream>
#include <stdexcept>
#include <vector>
#include <D:/Miguel/Programas/AdventOfCode2022/Day24/main.cpp>

using std::vector;

void IS_TRUE(bool condition, std::string exception);
void IS_FALSE(bool condition, std::string exception);

int main(){
  vector<Coordinate> blizards(0);
  return 0;
}

void IS_TRUE(bool condition, std::string exception){
  if (condition) return;
  throw std::invalid_argument(exception);
}

void IS_FALSE(bool condition, std::string exception){
  IS_TRUE(!condition, exception);
}