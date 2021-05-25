#include <stdlib.h>
#include <stdio.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0) // search loop, guess++ not needed
    {
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess); // storing entered number inside guess variable
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("Out of guesses");
    } else{
        printf("You Win!");
    }

    return 0;
}