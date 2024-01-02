#include <stdio.h>

int main() {
    double n = 0;
    double m = 0;
    printf("Insert to sides of a triangle here: \n");
    scanf("%lf, %lf", &n, &m);
    double side1 = (m*m)-(n*n);
    double side2 = 2*m*n;
    double hypo = (m*m)+(n*n);
    printf("The pythagorean triplet is: \n");
    printf("%.2lf, %.2lf, %.2lf", side1, side2, hypo);
    return 0;
}
