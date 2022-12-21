#include <iostream>
#include <deque>

using std::string;
using std::cout;

string inputMovement();
void fillTower(char *tower);
void calculateFall(char *tower, char *rock1, char *rock2, char *rock3, char *rock4, char *rock5, string jetPattern);

int main(){
  // Jet pattern to move rocks
  string jetPattern = inputMovement();
  
  // Tower
  char tower[100][7];

  // Fill everything with .
  fillTower(&tower);

  // Rocks
  char rock1[1][4] = {{'#', '#', '#', '#'}}
  char tock2[3][3] = {{'.', '#', '.'},
                    {'#', '#', '#'},
                    {'.', '#', '.'}}
  char rock3[3][3] = {{'.', '.', '#'},
                    {'.', '.', '#'},
                    {'#', '#', '#'}}
  char rock4[4][1] = {{'#'},
                    {'#'},
                    {'#'},
                    {'#'}}
  char rock5[2][2] = {{'#', '#'},
                    {'#', '#'}}

  calculateFall(&tower, &rock1, &rock2, &rock3, &rock4, &rock5, jetPattern);

  return 0;
}

void calculateFall(char *tower, char *rock1, char *rock2, char *rock3, char *rock4, char *rock5, string jetPattern){
  
}

void fillTower(char *tower){
  for (int i = 0; i < sizeof(tower)/sizeof(tower[0]); i++){
    for (int j = 0; j < sizeof(tower[0])/sizeof(tower[0, 0]); j++){
      tower[i, j] = '.';
    }
  }
}

string inputMovement(){
  cout << "Enter the jet pattern: ";
  string input;
  std::cin >> input;
  return input;
}
