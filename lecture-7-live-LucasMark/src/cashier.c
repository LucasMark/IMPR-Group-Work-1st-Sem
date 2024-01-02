#include <stdio.h>

#define NUMBER_OF_GOODS 3

void print_prices(double p[], double t[], int number_of_items);
double calculate_total_price(double prices[], int number_of_items);

int main(void) {
    double prices[NUMBER_OF_GOODS];
    double tilbud[NUMBER_OF_GOODS];
    double price;
    double rabat;

    for (int i = 0; i < NUMBER_OF_GOODS; ++i) {
        printf("Indtast pris>");
        scanf(" %lf", &price);
        printf("Indtast rabat>");
        scanf(" %lf", &rabat);
        prices[i] = price;
        tilbud[i] = rabat;
        prices[i] = prices[i] * tilbud[i];
    }
    print_prices(prices, tilbud, NUMBER_OF_GOODS);

    double total_price;
    total_price = calculate_total_price(prices, NUMBER_OF_GOODS);
    printf("Total price is: %lf", total_price);

    return 0;
}

double calculate_total_price(double prices[], int number_of_items) {
    double sum = 0;
    for (int i = 0; i < number_of_items; ++i) {
        sum += prices[i];
    }
    return sum;
}

void print_prices(double p[], double t[], int number_of_items) {
    for (int i = 0; i < number_of_items; ++i) {
        printf("Price of item %d is %lf\n", i, p[i]);
        printf("Tilbud of item %d is %lf\n", i, t[i]);
    }
}