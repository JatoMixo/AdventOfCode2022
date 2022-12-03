#include <iostream>

void inputMove(std::string message, char *var);
void enterMoves(char *opponentMoves, char *playerMoves);
int calculateScore(char *opponentMoves, char *playerMoves);

int main(){
    // Moves every player will do
    char opponentMoves[3];
    char playerMoves[3];

    // Explaining text
    std::cout << "Player moves: Rock(X), Paper(Y) and Scissors(Z)\n";
    std::cout << "Opponent moves: Rock(A), Paper(B) and Scissors(C)\n";
    std::cout << "--------------------------------------------------\n";

    // Input all moves
    enterMoves(opponentMoves, playerMoves);
    
    // Calculate scores
    std::cout << "Your score is: " << calculateScore(opponentMoves, playerMoves) << "\n";

    return 0;
}

// Calculate player's score
int calculateScore(char *opponentMoves, char *playerMoves){
    int playerScore = 0;
    int len = 3;

    // Iterate over all of 3 moves
    for (int i = 0; i < len; i++){
        playerScore += (int)(playerMoves[i] % 87);

        if (opponentMoves[i] % 64 == playerMoves[i] % 87){ // If it's a draw
            playerScore += 3;
            continue;
        } else if (playerMoves[i] % 87 == 2 && opponentMoves[i] % 64 == 0){ // If the opponent wins because he throw Rock and us Scissors
            continue;
        } else if (playerMoves[i] % 87 > opponentMoves[i] % 64){ // If we get a higher number, we will win, else not.
            playerScore += 6;
        } 
    }

    return playerScore;
}

// Enter all moves and put them in the arrays
void enterMoves(char *opponentMoves, char *playerMoves){
    int len = 3;

    // Input all moves for the player and the opponent
    for (int i = 0; i < len; i++){
        inputMove("Enter opponent's move: ", &opponentMoves[i]);
        inputMove("Enter player's move: ", &playerMoves[i]);
    }
}

// Input a single move of a player
void inputMove(std::string message, char *var){
    std::cout << message;
    char out;
    std::cin >> out;
    
    *var = out;
}