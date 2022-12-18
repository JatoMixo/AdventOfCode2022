#include <iostream>
#include <cmath>

int calculateSurface(int &cubes);
int calculateCloseSquares(int &cubes, int index);

int main(){
  
  return 0;
}

int calculateSurface(int &cubes){

  // Surface of lava plot
  int surface = 6;

  // Length of array
  int len = sizeof(*cubes)/sizeof(*cubes[0])
  int subLen = 3;

  // Calculate surface by analyzing hoy much free faces each cube adds
  for (int i = 1; i < len; i++){ // Loop starts at 1 because cube 1 was already added
    surface += 6 - (calculateCloseSquares(cubes, i) * 2);
  }

  // Return the overall surface
  return surface;
}

int calculateCloseSquares(int &cubes, int index){

  // Hoy many close squares it has
  int squares = 0;

  // Length of array
  int len = sizeof(*cubes)/sizeof(*cubes[0]);
  int subLen = 3;

  // Loop over all cubes
  for (int i = 0; i < len; i++){
    int counter = 0;
    for (int j = 0; j < subLen; j++){
      if (*cubes[i, j] == *cubes[index, j]) counter += 2; // In case both cubes have same value on 1 axis
      else if (abs(*cubes[i, j] - *cubes[index, j]) == 1) counter++; // In case a cube is 1 unit away from the other on 1 axis.
    }

    if (counter == 5) squares++; // In case both squares have same value on 2 axis and 1 unit different on the other, they're joined/close.
  }

  // Return the value
  return squares;
}