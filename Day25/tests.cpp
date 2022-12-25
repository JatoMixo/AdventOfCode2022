#include <iostream>
#include <stdexcept>
#include <D:/Miguel/Programas/AdventOfCode2022/Day25/main.cpp>

void IS_TRUE(bool condition, std::string exception);
void IS_FALSE(bool condition, std::string exception);

int main(){

  IS_TRUE(SnafuToDecimal("1=-0-2") == 1747, "Failed convert from snafu to decimal.");
  IS_TRUE(DecimalToSnafu(1747) == "1=-0-2", "Failed convert from decimal to snafu");

  return 0;
}

void IS_TRUE(bool condition, std::string exception){
  if (condition) return;
  throw std::invalid_argument(exception);
}

void IS_FALSE(bool condition, std::string exception){
  IS_TRUE(!condition, exception);
}