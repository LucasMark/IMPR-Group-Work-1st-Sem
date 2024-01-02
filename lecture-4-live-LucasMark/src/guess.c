#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * A small game where the user must guess a (random) number between 1 and 20.
 * The player can guess multiple times, but at the end the number of guesses must be reported.
 * If the user guesses a number outside of [1,20], then the user can guess again, and the invalid guess is not counted.
 *
 * Bonus: Report after each guess if the user was above or below the number.
 */

int main(void)
{
    int number;
    int guess;
    int tries = 0;
    srand((unsigned) time(0));
    number = (rand() % 20)+1;
    printf("Guess a number between 1 and 20 \n");
    do {
        printf("Input you guess: \n");
        scanf(" %d", &guess);
        ++tries;
        if (guess > 20){
            --tries;
            printf("invalid input, above 20 \n");
        }
        else if (guess < 1){
            --tries;
            printf("invalid input, under 1 \n");
        }
        else{
            printf("Random number = %d, guess = %d\n", number, guess, tries);
            if(guess == number) {
                printf("You won in , %d tries!", tries);
            }
        }
    } while( guess != number);
    // remember to initialize random!
    return 0;
}