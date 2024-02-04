#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{
    srand(time(NULL));
    int secretNumber = rand()%100 + 1;
    int guess, attempts = 0;

    printf(" *******************************************************************\n");
    printf(" *                                                                 *\n");
    printf(" *                  Welcome to the Number Guessing Game!           *\n");
    printf(" *                                                                 *\n");
    printf(" *******************************************************************\n\n");
    printf("        ***Try to guess the number between 1 and 100.***            \n\n");

    do{
        printf("Enter Your guess number: ");
        scanf("%d",&guess);
        attempts++;

        if(guess == secretNumber){
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
        else if(guess < secretNumber){
            printf("Too low. Try again!\n");
        }
        else{
            printf("Too high. Try again!\n");
        }
    }while(guess != secretNumber);

    return 0;
}
