#include <iostream>
#include <vector>

using std::string;
using std::vector;

class Coordinate{
  int x;
  int y;
  int dir; // 0 = UP; 1 = RIGHT; 2 = DOWN; 3 = LEFT 
};

void MoveCoordinates(vector<Coordinate> *coords, int maxX, int maxY){
  
  if (*coords.size() == 0) return;

  for (int i = 0; i < *coords.size(); i++){
    if (*coords[i].dir == 0){
      y++;
    } else if(*coords[i].dir == 1){
      x++;
    } else if(*coords[i].dir == 2){
      y--;
    } else if (*coords[i].dir == 3){
      x--;
    }

    if (x >= maxX) x = 0;
    else if (x == -1) x = maxX - 1;

    if (y >= maxY) y = 0;
    else if (y == -1) y = maxY - 1;
  }
}