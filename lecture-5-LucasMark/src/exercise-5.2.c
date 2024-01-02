#include <stdio.h>
#include "prime.h"

int main(void){
    int n;
    int prime_counter = 0;
    printf("input number \n >");
    scanf("%i",&n);
    for (int i = 0;prime_counter <= n-1;i++){
        if (is_prime(i) == 1){
            ++prime_counter;
            printf("Prime nr.: %d is %d\n", prime_counter, i);
        }
    }
}