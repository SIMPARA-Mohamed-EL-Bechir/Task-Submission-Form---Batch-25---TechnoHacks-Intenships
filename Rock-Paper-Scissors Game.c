#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
void printChoices(int, int);
void determineWinner(int, int);

int main()
{
    srand(time(NULL));
    int userChoice, computerChoice;

    printf(" *******************************************************************\n");
    printf(" *                                                                 *\n");
    printf(" *                  Welcome to Rock-Paper-Scissors!                *\n");
    printf(" *                                                                 *\n");
    printf(" *******************************************************************\n\n");

    do {
        // Menu for user to choose Rock, Paper, or Scissors
        printf("0 - Rock\n1 - Paper\n2 - Scissors\n");
        printf("Enter your choice (0, 1, or 2): ");
        scanf("%d", &userChoice);

        // Validate user input
        if (userChoice < 0 || userChoice > 2) {
            printf("Invalid choice. Please choose 0, 1, or 2.\n");
        }

    } while (userChoice < 0 || userChoice > 2);

    // Get computer's choice
    computerChoice = getComputerChoice();

    // Print choices
    printChoices(userChoice, computerChoice);

    // Determine the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice(){
    return rand()%3;
}
void printChoices(int userChoice, int computerChoice){
    const char* choices[] = {"Rock","Paper","Scissors"};

    printf("Your Choice is: %s\n", choices[userChoice]);
    printf("Computer Choice is: %s\n", choices[computerChoice]);
}
void determineWinner(int userChoice, int computerChoice){
    if(userChoice == computerChoice){
        printf("It's a tie!\n");
    }
    else if((userChoice == 0 && computerChoice == 2) || (userChoice == 1 && computerChoice == 0) || (userChoice == 2 && computerChoice == 1)){
        printf("Comgratulations! You Win!\n");
    }
    else{
        printf("Sorry, you lose. Better luck next time!\n");
    }
}
