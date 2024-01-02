#include <stdio.h>
char color = 'R';
int main(void) {
    switch (color) { /* break statements missing */
        case 'R':
            printf("red\n");
            break;
        case 'B':
            printf("blue\n");
            break;
        case 'Y':
            printf("yellow\n");
            break;
    }
    return 0;
}