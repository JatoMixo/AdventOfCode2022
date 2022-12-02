#include <iostream>

//TODO Input System
//TODO Make Equivalent
//TODO Calculate score
//TODO Give score / output

void inputMove(std::string message, char *var);
void enterMoves(char *opponentMoves, char *playerMoves);

int main(){
    char opponentMoves[3];
    char playerMoves[3];

    enterMoves(opponentMoves, playerMoves);

    return 0;
}

void enterMoves(char *opponentMoves, char *playerMoves){
    int len = sizeof(*opponentMoves)/sizeof(opponentMoves[0]);

    inputMove("Enter opponent's first move: ", &opponentMoves[0]);
    inputMove("Enter opponent's second move: ", &opponentMoves[1]);
    inputMove("Enter opponent's third move: ", &opponentMoves[2]);
    inputMove("Enter player's first move: ", &opponentMoves[0]);
    inputMove("Enter player's second move: ", &opponentMoves[1]);
    inputMove("Enter player's third move: ", &opponentMoves[2]);
}

void inputMove(std::string message, char *var){
    std::cout << message;
    char out;
    std::cin >> out;
    
    *var = out;
}