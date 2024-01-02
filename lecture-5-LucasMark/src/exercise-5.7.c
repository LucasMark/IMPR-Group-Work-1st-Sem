#include <stdlib.h>
#include <stdio.h>

int sum_iter(int n){
    int n2 = 0;
    for (int i = 0;i <= n;i++) {
        n2 += i;
        //n2 = n2 +i;
    }
    return n2;
}
int sum_form(int n){
    return ((n*(n+1))/2);
}

int main(void){
    int n;

    printf("input number \n >");
    scanf("%i",&n);

    printf("progam: %i\n", sum_iter(n));
    printf("equation: %i\n",sum_form(n));
}