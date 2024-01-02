#include <stdio.h>

int W;

int main(void) {
    printf("Hvor mange watt bruger din paere?\n");
    scanf("%d",&W);
    switch (W) { /* break statements missing */
        case 15:
            printf("125 Lumens\n");
            break;
        case 25:
            printf("250 Lumens\n");
            break;
        case 40:
            printf("500 Lumens\n");
            break;
        case 60:
            printf("880 Lumens\n");
            break;
        case 75:
            printf("1000 Lumens\n");
            break;
        case 100:
            printf("1675 Lumens\n");
            break;
        default:
            printf("-1 Lumens\n");
            break;
    }
}