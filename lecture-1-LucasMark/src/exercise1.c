#include <stdio.h>

#define PI 3.141592653589793

int main(void)
{
    double radius;

    printf("dette program beregner arealet af en cirkel.\n\n");

    printf("Indsaet radiuses:   ");
    scanf("%lf", &radius);

    printf("\nArealet = PI * radius * radius\n");
    printf("     = %.2f * %.2f * %.2f\n", PI, radius, radius);
    printf("     = %.5f\n", PI * radius * radius );

    return 0;
}