#include <stdio.h>

int is_odd(int number) {
    return number % 2; // returns 1 if odd, otherwise 0
}

int subtract(int divd, int divs) {
    int i = 0;
    for(i; divd > divs; i++){
        divd = divd - divs;
        printf("%d \n", divd);
    }
    return i;
}

int main(void) {
    int result = subtract(65, 20);
    printf("%d\n", result);
    return 0;
}