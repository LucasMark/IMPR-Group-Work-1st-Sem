#include <stdio.h>
#include <math.h>

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y, double p4_x, double p4_y);
double compute_side_length(double a_x, double a_y, double b_x, double b_y);
double compute_sum_of(double a, double b, double c, double d);

int main(void) {
    double p1_x, p2_x, p3_x,
            p1_y, p2_y, p3_y, p4_x, p4_y;

    /* Prompt three points with x- and y-coordinate. */
    printf("Please write the first point:\n");
    scanf("%lf %lf", &p1_x, &p1_y);
    printf("Please write the second point:\n");
    scanf("%lf %lf", &p2_x, &p2_y);
    printf("Please write the third point:\n");
    scanf("%lf %lf", &p3_x, &p3_y);
    printf("Please write the third point:\n");
    scanf("%lf %lf", &p4_x, &p4_y);


    double total_length = compute_sum_of_length(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y, p4_x, p4_y);
    /* Print sum of side lengths */
    printf("Sum of sides: %lf\n", total_length);

    return 0;
}

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y, double p4_x, double p4_y) {
    /* Compute side lengths of triangle */
    double side1 = compute_side_length(p1_x, p1_y, p2_x, p2_y);
    double side2 = compute_side_length(p2_x, p2_y, p3_x, p3_y);
    double side3 = compute_side_length(p3_x, p3_y, p4_x, p4_y);
    double side4 = compute_side_length(p4_x, p4_y, p1_x, p1_y);

    /* Compute sum of side lengths */
    double sum = compute_sum_of(side1, side2, side3, side4);
    return sum;
}

double compute_side_length(double a_x, double a_y, double b_x, double b_y) {
    double delta_x = a_x - b_x;
    double delta_y = a_y - b_y;
    return sqrt(delta_x * delta_x + delta_y * delta_y);
}

double compute_sum_of(double a, double b, double c, double d) {
    return a + b + c;
}