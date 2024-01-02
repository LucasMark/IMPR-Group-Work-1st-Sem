#include <stdio.h>

int age;
double water;
int year;
int speed;
double y;
double x;
double z;
double w;

int main(void) {
    printf("Age, integer: \n");
    scanf("%d", &age);
    printf("water, double: \n");
    scanf("%lf", &water);
    printf("Year, integer: \n");
    scanf("%d", &year);
    printf("Speed, integer: \n");
    scanf("%d", &speed);
    printf("y, double: \n");
    scanf("%lf", &y);
    printf("x, double: \n");
    scanf("%lf", &x);
    printf("z, double: \n");
    scanf("%lf", &z);
    printf("w, double: \n");
    scanf("%lf", &w);
    if( 21 >= age && age >= 18  ){
        printf("True");
    }
    else{
        printf("False");
    }
    if( 1.5 > water && water > 0.1  ){
        printf("True");
    }
    else{
        printf("False");
    }
    if( year%4==0 ){
        printf("True");
    }
    else{
        printf("False");
    }
    if( speed < 55  ){
        printf("True");
    }
    else{
        printf("False");
    }
    if( y > x && x < z  ){
        printf("True");
    }
    else{
        printf("False");
    }
    if( 6 == w || w < 3  ){
        printf("True");
    }
    else{
        printf("False");
    }
}
