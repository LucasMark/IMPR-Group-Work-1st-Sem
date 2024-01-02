#include              <stdio.h>

int main(void){
    float n0,n1,n2;
    printf("Giv mig 3 tal, adskilt med mellemrum, saa finder jeg gennemsnittet: ");
    scanf("%f %f %f",&n0,&n1,&n2);
    printf("Gennemsnittet af de tre tal: %f\n", (n0+n1+n2) / 3.0);
    return 0;
}