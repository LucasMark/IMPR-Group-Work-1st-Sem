#include <stdio.h>
/*

Expected output
0
1      *
2     **
3    ***
4   ****
5  *****
6 ******
7*******

 */

int main(void) {
    int i, j, s;
    for(i = 0; i < 8; ++i) {
        printf("%d", i);
        for(s = 8; s > i; --s) {
            printf(" ");
        }
        for(j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}