#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, x2, x3, x4,
           y1, y2, y3, y4;

    printf("Please write the first point:\n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);

    printf("Please write the second point:\n");
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    printf("Please write the third point:\n");
    scanf("%lf", &x3);
    scanf("%lf", &y3);
    printf("Please write the third point:\n");
    scanf("%lf", &x4);
    scanf("%lf", &y4);

    // line segment lengths
    double l1, l2, l3, l4;
    // the power of the values ensures that the lengths cannot be negative
    // se also Theorem 1. in Algebra ....
    l1 = sqrt(pow(x1-x2 ,2.0) + pow(y1-y2 ,2.0));
    l2 = sqrt(pow(x2-x3 ,2.0) + pow(y2-y3 ,2.0));
    l3 = sqrt(pow(x3-x4 ,2.0) + pow(y3-y4 ,2.0));
    l4 = sqrt(pow(x4-x1 ,2.0) + pow(y4-y1 ,2.0));

    double total_length = l1 + l2 + l3 + l4;
    printf("The total length is %f\n", total_length);

    return 0;
}

