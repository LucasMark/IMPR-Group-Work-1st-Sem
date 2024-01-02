#include <math.h>
#include <stdio.h>

double beregn_omkreds(double radius) {
    return 2 * M_PI * radius;
}
double beregn_areal(double radius) {
    return M_PI * (radius*radius);
}
int main(void) {
    double r, omkreds, areal;
    char valg;

    printf("Indtast en radius:\n>");
    scanf("%lf", &r);

    printf("Vaelg om der skal regnes areal eller omkreds med A eller O:\n>");
    scanf("%c", &valg);

    if(valg== 'A'){
        areal = beregn_areal(r);

        printf("Arealet er: %lf", areal);
    }
    else if(valg== 'O'){
        omkreds = beregn_omkreds(r);

        printf("Omkredsen er: %lf", omkreds);
    }
    return 0;
}
