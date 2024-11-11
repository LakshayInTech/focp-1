#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerChoice();
void winner(int userChoice, int computerChoice);

int main() {
    system("cls");
    int userChoice;

    // Seed the random number generator
    srand(time(0));
    while (1) {
        printf("\n\n------Rock, Paper, Scissor------\n\n");
        printf("0. Rock \n");
        printf("1. Paper \n");
        printf("2. Scissor \n");
        printf("3. Exit \n\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        if (userChoice == 3) {
            printf("Exiting the game...\n");
            break;
        }
        if (userChoice < 0 || userChoice > 2) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }
        int computer = computerChoice();  // Get the computer's choice
        winner(userChoice, computer);     // Determine the winner
    }
    return 0;
}

int computerChoice() {
    return rand() % 3;  // Returns 0 (Rock), 1 (Paper), or 2 (Scissor)
}

void winner(int userChoice, int computerChoice) {
    // Display choices
    printf("\nYour choice: ");
    if (userChoice == 0) printf("Rock\n");
    else if (userChoice == 1) printf("Paper\n");
    else if (userChoice == 2) printf("Scissor\n");

    printf("Computer's choice: ");
    if (computerChoice == 0) printf("Rock\n");
    else if (computerChoice == 1) printf("Paper\n");
    else if (computerChoice == 2) printf("Scissor\n");

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||  // Rock beats Scissors
               (userChoice == 1 && computerChoice == 0) ||  // Paper beats Rock
               (userChoice == 2 && computerChoice == 1)) {  // Scissors beats Paper
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}