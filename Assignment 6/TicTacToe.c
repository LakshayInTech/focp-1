#include <stdio.h>
#include <stdlib.h>

void showBoard();
int checkWin();
void playerMove(int player);

char arr[] = {'o','1','2','3','4','5','6','7','8','9'};

int main() {
    int player = 1;  // Player 1 starts
    int gameStatus = 0;  // 0: Game not over, 1: Game over
    int choice;

    system("cls");  // Clear screen

    while (gameStatus == 0) {
        showBoard();
        playerMove(player);  // Let the current player make a move

        // Check if the current player has won
        gameStatus = checkWin();

        // If no winner yet, switch player
        if (gameStatus == 0) {
            player = (player % 2) + 1;  // Alternate between Player 1 and Player 2
        }
    }

    // Show the final board after the game ends
    showBoard();

    if (gameStatus == 1) {
        printf("Player %d wins!\n", (player % 2) + 1);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}

void showBoard() {
    printf("TIC TAC TOE \n\n");
    printf("\t      |       |       \n");
    printf("\t  %c   |   %c   |  %c \n", arr[1], arr[2], arr[3]);
    printf("\t      |       |       \n");
    printf("\t------|-------|-------\n");
    printf("\t      |       |       \n");
    printf("\t  %c   |   %c   |   %c \n", arr[4], arr[5], arr[6]);
    printf("\t      |       |       \n");
    printf("\t------|-------|-------\n");
    printf("\t      |       |       \n");
    printf("\t  %c   |   %c   |   %c \n", arr[7], arr[8], arr[9]);
    printf("\t      |       |       \n");
}

// Function to handle player move
void playerMove(int player) {
    int choice;
    char mark = (player == 1) ? 'O' : 'X';  // Player 1 is 'O', Player 2 is 'X'

    while (1) {
        printf("Player %d, enter a number (1-9) to place your %c: ", player, mark);
        scanf("%d", &choice);

        // Check if the choice is valid
        if (choice >= 1 && choice <= 9 && arr[choice] != 'X' && arr[choice] != 'O') {
            arr[choice] = mark;  // Place the mark on the board
            break;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
}

// Function to check if there is a winner or if it's a draw
int checkWin() {
    // Check all possible winning combinations (rows, columns, diagonals)
    if (arr[1] == arr[2] && arr[2] == arr[3])  // Row 1
        return 1;
    if (arr[4] == arr[5] && arr[5] == arr[6])  // Row 2
        return 1;
    if (arr[7] == arr[8] && arr[8] == arr[9])  // Row 3
        return 1;
    if (arr[1] == arr[4] && arr[4] == arr[7])  // Column 1
        return 1;
    if (arr[2] == arr[5] && arr[5] == arr[8])  // Column 2
        return 1;
    if (arr[3] == arr[6] && arr[6] == arr[9])  // Column 3
        return 1;
    if (arr[1] == arr[5] && arr[5] == arr[9])  // Diagonal 1
        return 1;
    if (arr[3] == arr[5] && arr[5] == arr[7])  // Diagonal 2
        return 1;

    // Check for draw (all spots filled and no winner)
    int draw = 1;
    for (int i = 1; i <= 9; i++) {
        if (arr[i] != 'X' && arr[i] != 'O') {
            draw = 0;
            break;
        }
    }

    if (draw) {
        return 2;  // It's a draw
    }

    return 0;  // Game not over yet
}