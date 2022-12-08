#include <iostream>

void inputValue(std::string message, int *var);

int main(){

    // Rows and columns of the forest
    int columns, rows;

    // Ask for length of forest
    inputValue("Enter hoy many columns the forest has: ", &columns);
    inputValue("Enter hoy many rows the forest has: ", &rows);

    // Enter all the trees
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){

        }
    }
    // The forest
    int trees[columns][rows];

    return 0;
}

void inputValue (std::string message, int *var){
    std::cout << message;

    int temp;
    std::cin >> temp;

    *var = temp;
}