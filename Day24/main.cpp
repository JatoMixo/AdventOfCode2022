#include <iostream>
#include <stdexcept>
#include <vector>

using std::string, std::vector;

class Coordinate{
  public: 
    int x;
    int y;
    int dir; // 0 = UP; 1 = RIGHT; 2 = DOWN; 3 = LEFT 
};

vector<Coordinate> MoveCoordinates(vector<Coordinate> coords, int maxX, int maxY){

  if (coords.size() == 0) throw new std::invalid_argument("The size of the array is 0, you have no coordinates");

  for (int i = 0; i < coords.size(); i++){
    if (coords[i].dir == 0){
      coords[i].y++;
    } else if(coords[i].dir == 1){
      coords[i].x++;
    } else if(coords[i].dir == 2){
      coords[i].y--;
    } else if (coords[i].dir == 3){
      coords[i].x--;
    }

    if (coords[i].x >= maxX) coords[i].x = 0;
    else if (coords[i].x == -1) coords[i].x = maxX - 1;

    if (coords[i].y >= maxY) coords[i].y = 0;
    else if (coords[i].y == -1) coords[i].y = maxY - 1;
  }

  return coords;
}