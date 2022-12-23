#include <iostream>
#include <vector>

using std::vector;
using std::string;

void MoveDirection(int dir, int x, int y, vector< vector <char> > &grid);
void CheckPositions(int x, int y, vector<vector <char> > &grid);
bool isAreaEmpty(int start, vector<vector<char> > &grid);

int main(){
  
  // Array with the grid
  vector< vector <char> > grid(11, vector <char> (12, '.'));

  return 0;
}

void CheckPositions(int x, int y, string checkOrder, vector<vector<char> > &grid){
     
}

bool isAreaEmpty(int x, int y, char dir, vector<vector<char> > &grid){
  int counter = 0;
  for (int i = 0; i < 3; i++){
    if (dir == 'x' && grid[y][x + i] == '.') counter++;
    else if (dir == 'y' && grid[y + i][x] == '.') counter++;
  }
  if (counter == 3) return true;
  else return false;
}

void MoveDirection(int dir, int x, int y, vector< vector <char> > &grid){
  // Delete elf's old position
  grid[y][x] = '.';

  // Increase the grid if necessary
  if (x == grid[0].size() && dir == 2){
    for (int i = 0; i < grid.size(); i++){
      grid[i].push_back('.');
    }
  } else if(x == 0 && dir == 3){
    for (int i = 0; i < grid.size(); i++){
      grid[i].insert(grid[i].begin(), '.');
    }
    x++;
  }
  if (y == grid.size() && dir == 1){
    vector<char> newLine(grid[0].size(), '.');
    grid.push_back(newLine);
  } else if (y == 0 && dir == 0){
    vector<char> newLine(grid[0].size(), '.');
    grid.insert(grid.begin(), newLine);
    y++;
  }

  // Move elf
  if (dir == 0) grid[y + 1][x] = '#';
  else if (dir == 1) grid[y - 1][x] = '#';
  else if (dir == 2) grid[y][x + 1] = '#';
  else if (dir == 3) grid[y][x - 1] = '#';
}
