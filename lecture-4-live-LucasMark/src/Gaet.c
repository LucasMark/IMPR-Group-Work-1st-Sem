#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    int n;
    int g = 0;
    int t =0;
    srand((unsigned) time(0));
    n = (rand() % 20)+1;
    printf("Guess a number from 1-20, infinite tries\n");
    printf("Hint, the number is %d\n", n);
    while (n != g){
        t++;
        scanf("%d",g);
        if (n != g){
            printf("Wrong, %d tries used :\n", t);
            printf("Input number:\n");
        }
    }
}
