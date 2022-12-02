#include <iostream>

//UPGRADE Input System
//TODO Calculate score
//TODO Give score / output

void inputMove(std::string message, char *var);
void enterMoves(char *opponentMoves, char *playerMoves);
int calculateScore(char *opponentMoves, char *playerMoves);

int main(){
    // Moves every player will do
    char opponentMoves[3];
    char playerMoves[3];

    // Input all moves
    enterMoves(opponentMoves, playerMoves);
    
    // Calculate scores
    std::cout << "Your score is: " << calculateScore(opponentMoves, playerMoves);

    return 0;
}

// Calculate the player's scores
int calculateScore(char *opponentMoves, char *playerMoves){
    int playerScore;

    for (int i = 0; i < sizeof(*opponentMoves)/sizeof(opponentMoves[0]); i++){
        playerScore += playerMoves[i] % 87;

        if (opponentMoves[i] == playerMoves[i]){
            playerScore += 3;
            continue;
        } else if (playerMoves[i] % 87 == 2 && opponentMoves[i] % 64 == 0){
            continue;
        } else if (playerMoves[i] % 87 > opponentMoves[i] % 64){
            playerScore += 6;
        } 
    }

    return playerScore;
}

// Enter all moves and put them in the arrays
void enterMoves(char *opponentMoves, char *playerMoves){
    int len = sizeof(*opponentMoves)/sizeof(opponentMoves[0]);

    inputMove("Enter opponent's first move: ", &opponentMoves[0]);
    inputMove("Enter opponent's second move: ", &opponentMoves[1]);
    inputMove("Enter opponent's third move: ", &opponentMoves[2]);
    inputMove("Enter player's first move: ", &opponentMoves[0]);
    inputMove("Enter player's second move: ", &opponentMoves[1]);
    inputMove("Enter player's third move: ", &opponentMoves[2]);
}

// Input a single move of a player
void inputMove(std::string message, char *var){
    std::cout << message;
    char out;
    std::cin >> out;
    
    *var = out;
}