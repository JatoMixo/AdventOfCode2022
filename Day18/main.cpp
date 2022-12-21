#include <iostream>
#include <cmath>

int calculateSurface(int *cubes, int length);
int calculateCloseSquares(int *cubes, int index, int length);
void inputValues(int *cubes);

int main(){

  int cubes[13][3] = {{2, 2, 2},
                      {1, 2, 2},
                      {3, 2, 2},
                      {2, 1, 2},
                      {2, 3, 2},
                      {2, 2, 1},
                      {2, 2, 3},
                      {2, 2, 4},
                      {2, 2, 6},
                      {1, 2, 5},
                      {3, 2, 5},
                      {2, 1, 5},
                      {2, 3, 5}};

  std::cout << calculateSurface(*cubes, 13);
  std::cout << calculateCloseSquares(*cubes, 0, 13);
  return 0;
}

int calculateSurface(int *cubes, int length){

  // Surface of lava plot
  int surface = 6;

  // Length of array
  int subLen = 3;

  // Calculate surface by analyzing hoy much free faces each cube adds
  for (int i = 1; i < length; i++){ // Loop starts at 1 because cube 1 was already added
    surface += 6 - (calculateCloseSquares(cubes, i, length) * 2);
  }

  // Return the overall surface
  return surface;
}

int calculateCloseSquares(int *cubes, int index, int length){

  // Hoy many close squares it has
  int squares = 0;

  // Length of array
  int subLen = 3;

  // Loop over all cubes
  for (int i = 0; i < length; i++){
    int counter = 0;
    for (int j = 0; j < subLen; j++){
      if (cubes[i, j] == cubes[index, j]){ // In case both cubes have same value on 1 axis
        counter += 2;
      } 
      if (abs(cubes[i, j] - cubes[index, j]) == 1){ // In case a cube is 1 unit away from the other on 1 axis.
        counter++;
      }
    }

    if (counter == 5){ // In case both squares have same value on 2 axis and 1 unit different on the other, they're joined/close.
      squares++;
    }
  }

  // Return the value
  return squares;
}

void inputMoves(int *cubes){
  std::cout << "Enter hoy many cubes you have: ";
  int quantity;
  std::cin >> quantity;

  for (int i = 0; i < quantity; i++){
    for (int j = 0; j < 3; j++){
      std::cout << "Enter " << i + 1 << "# cube, position " << j << "#: ";
      int input;
      std::cin >> input;

      cubes[i, j] = input;
    }
  }
}