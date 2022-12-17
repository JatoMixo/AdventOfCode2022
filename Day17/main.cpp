#include <iostream>

using std::string;
using std::cout;

string inputMovement();
void fillTower(char *tower);

int main(){
  // Jet pattern to move rocks
  string jetPattern = inputMovement();
  
  // Tower
  char tower[100][7];

  // Fill everything with .
  fillTower(&tower);

  // Rocks
  char rock1[] = {'#', '#', '#', '#'}
  char tock2[][] = {{'.', '#', '.'},
                    {'#', '#', '#'},
                    {'.', '#', '.'}}

  return 0;
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
