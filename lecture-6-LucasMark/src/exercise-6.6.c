#include <stdio.h>
#define EURO 0.89
#define KRONER 6.66
#define RUBLER 66.43
#define YEN 119.9

void converter(double dollar, double *d_euro, double *d_kroner, double *d_rubler, double *d_yen);

int main(void) {
    double dollar, euro, kroner, rubler, yen;
    printf("Input antal Dollar: \n");
    scanf("%lf", &dollar);
    converter(dollar, &euro, &kroner, &rubler, &yen);
    printf("%.2lf dollars er lig:\n", dollar);
    printf("%.2lf Euro:\n", euro);
    printf("%.2lf Kroner:\n", kroner);
    printf("%.2lf Rubler:\n", rubler);
    printf("%.2lf Yen:\n", yen);
    return 0;
}

void converter(double dollar, double *d_euro, double *d_kroner, double *d_rubler, double *d_yen){
    *d_euro = EURO * dollar;
    *d_kroner = KRONER * dollar;
    *d_rubler = RUBLER * dollar;
    *d_yen = YEN * dollar;
}