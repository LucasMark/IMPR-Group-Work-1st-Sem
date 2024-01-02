#include <stdio.h>

int main(void)
{
    int pop = 9870,year = 0;
    while (pop <= 30000){
        ++year;
        pop = pop+(pop/10);
        printf("year: %d pop: %d\n", year, pop);
    }
    return 0;
}
