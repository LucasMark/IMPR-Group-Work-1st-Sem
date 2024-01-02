#include <stdio.h>

int W;

int main(void) {
    printf("Hvor mange watt bruger din paere?\n");
    scanf("%d",&W);
    if (W == 15) { /* break statements missing */
        printf("125 Lumens");
    }
    else if (W == 25) { /* break statements missing */
        printf("215 Lumens");
    }
    else if (W == 40) { /* break statements missing */
        printf("500 Lumens");
    }
    else if (W == 60) { /* break statements missing */
        printf("880 Lumens");
    }
    else if (W == 75) { /* break statements missing */
        printf("1000 Lumens");
    }
    else if (W == 100) { /* break statements missing */
        printf("1675 Lumens");
    }
    else
        printf("-1 Lumens");
}