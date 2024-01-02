#include <stdio.h>

int main(void) {
    int i, j, k;
    for(i = 0; i < 7; ++i) {
        for(j = 0; j < i; ++j) {
            printf(" %d",j);
        }
        printf("\n");
    }
    for(i = 5; i > 0; --i) {
        for(j = 0; j < i; ++j) {
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}