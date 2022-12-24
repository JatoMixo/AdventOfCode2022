#include <iostream>
#include <stdexcept>
#include <./main.cpp>

int main(){

  return 0;
}

void IS_TRUE(bool condition, std::string exception){
  if (condition) return;
  throw std::invalid_argument(exception);
}