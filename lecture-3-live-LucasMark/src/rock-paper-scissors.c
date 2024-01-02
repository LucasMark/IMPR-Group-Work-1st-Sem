#include <stdio.h>
#include <stdlib.h>

#define ROCK 'r'
#define PAPER 'p'
#define SCISSORS 's'

int main(void) {

    char p1_choice, p2_choice;
    int p1w;
    int Draw;

    // Input fra brugeren
    // Gemme brugernes valg
    start:
    printf("Indtast to hænder ('r', 'p', 's')\n>");
    scanf(" %c %c", &p1_choice, &p2_choice);
    if(p1_choice && p2_choice != ROCK || p1_choice && p2_choice !=PAPER||p1_choice && p2_choice !=SCISSORS){
        printf("Invalid input, try again");
        goto start;
    };

        printf("Player 1: %c\n Player 2: %c\n", p1_choice, p2_choice);

        // Beregn om spiller 1 har vundet (encode reglerne)
        p1w = (p1_choice == ROCK && p2_choice == SCISSORS) ||
              (p1_choice == SCISSORS && p2_choice == PAPER) ||
              (p1_choice == PAPER && p2_choice == ROCK);
        Draw = (p1_choice == p2_choice);
        // Print om spiller 1 har vundet
        if (p1w) {
            printf("Player 1 is winner");
        } else if (Draw) {
            printf("Draw");
        } else {
            printf("Player 2 is winner");
        }
    return EXIT_SUCCESS;

        // does not work, always returns invalid, logik error
}