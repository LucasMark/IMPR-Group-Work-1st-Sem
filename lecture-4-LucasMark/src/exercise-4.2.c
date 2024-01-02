#include <stdio.h>

int main(void)
{
    int m, n, k;
    int r = 0;
    printf("Input three numbers, \n"
           "the first should be smaller \n"
           "than the last, and the 3rd should \n"
           "be more than 1:\n>");
    scanf("%d %d %d", &m, &n, &k);
    for(m ;m<=n;++m ){
        if (m%k==0){
            r=r+m;
        }
    }
    printf("%d",r);
    return 0;
}
