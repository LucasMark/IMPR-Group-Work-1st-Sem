#include <stdio.h>
#include <math.h>

double r;
double x;
double y;

int main(void) {
    printf("Indtast en radius: \n");
    scanf("%lf", &r);
    printf("Indtast et punkt, format x,y: \n");
    scanf("%lf,%lf", &x , &y);
    double L = sqrt(x*x+y*y);
    if(L==r){
        printf("Punktet er paa cirkelperiferien");
        return 0;
    }
    else if(L<r){
        printf("Punktet er inden for cirkelperiferien");
        return 0;
    }
    else{
        printf("Punktet er uden for cirkelperiferien");
        return 0;
    }
}