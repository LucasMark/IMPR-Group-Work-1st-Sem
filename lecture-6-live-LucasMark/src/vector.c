#include <stdio.h>

void vectorAdd(int v_1, int v_2, int u_1, int u_2, int *w_1, int *w_2);

int main(void) {
    int v1, v2, u1, u2, w1, w2;

    v1 = 1;
    v2 = 2;
    u1 = 3;
    u2 = 4;

    /* Græsplæne skal udvides med `factor`. Der skal beregnes `new_length` og `new_width`. */
    vectorAdd(v1, v2, u1, u2, &w1, &w2);

    /* Udskriv gamle og nye dimensioner på skærmen. */
    printf("New vector length 1 %d\n", w1);
    printf("New vector length 2 %d\n", w2);

    return 0;
}

void vectorAdd(int v_1, int v_2, int u_1, int u_2, int *w_1, int *w_2) {
    *w_1 = v_1 + u_1;
    *w_2 = v_2 + u_2;
}