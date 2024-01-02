#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159
#define MAX_I 1000
int a = 3;
double b = 4;

int main(void) {
    int i = a%(990-MAX_I);
    printf("%i", i);
    return(0);
}