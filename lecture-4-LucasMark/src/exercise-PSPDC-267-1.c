#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    int n2 = 0;

    printf("input number \n >");
    scanf("%i",&n);
    for (int i = 0;i <= n;i++) {
        n2 += i;
        //n2 = n2 +i;
    }

    printf("progam: %i\n",n2);
    printf("equation: %i\n",(n*(n+1))/2);
}

