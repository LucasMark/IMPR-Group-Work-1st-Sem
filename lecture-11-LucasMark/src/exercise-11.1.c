#include <stdio.h>

long fib(int n){
    long result;
    int mem[n];

    if (n == 0)
        result = 0;
    else if (n == 1)
        result = 1;
    else
        result = fib(n-1) + fib(n-2);

    return result;
}

int main(void) {
    long i;

    for(i = 0; i < 100; i++)
        printf("Fib(%li) = %li\n", i, fib(i));

    return 0;
}
