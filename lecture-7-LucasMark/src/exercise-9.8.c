#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIE_MAX_EYES 6

int roll_die(void){
    return (rand() % DIE_MAX_EYES) + 1;
}

int dieRolls();

int main(void) {
    int n;

    printf("Number of dice rolls: ");
    scanf("%d", &n);

    int diceRolls[n];

    srand(time(NULL));  // Seeding the random number generator.
    // Do this only once!

    for(int i = 0; i < n; i++){
        diceRolls[i] = dieRolls();
    }

    for(int i = 0; i < n; i++){
        printf("Array position %d, Dice roll value %d \n", i, diceRolls[i]);
    }

    free (diceRolls);
    return 0;
}

int dieRolls(){
        int j = roll_die();
        return j;
    }
