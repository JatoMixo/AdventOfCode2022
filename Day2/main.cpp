#include <iostream>

//TODO Input system
//TODO Make Equivalent
//TODO Calculate score
//TODO Give score / output

void inputMove(std::string message, char *var);

int main(){
    char opponentMoves[3];
    char playerMoves[3];

    inputMove("Enter opponent's first move: ", &opponentMoves[0]);

    return 0;
}

void inputMove(std::string message, char *var){
    std::cout << message;
    char out;
    std::cin >> out;
    
    *var = out;
}