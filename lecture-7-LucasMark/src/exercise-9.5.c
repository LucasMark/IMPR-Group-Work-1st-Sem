#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int elementCompare(const void *p1, const void *p2);

int main()
{

    // This pointer will hold the
    // base address of the block created
    double* ptr;
    int i;
    srand(time(NULL));

    // Dynamically allocate memory using malloc()
    ptr = (double*)malloc(MAX * sizeof(double));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < MAX; ++i) {
            ptr[i] = rand()%100;
        }
        qsort(ptr, MAX, sizeof(double),elementCompare);
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < MAX; ++i) {
            printf("%.2lf \n", ptr[i]);
        }
    }
    free (ptr);
    return 0;
}

int elementCompare(const void *p1, const void *p2){
    int result;
    double *ip1, *ip2;
    ip1 =(double *)p1;
    ip2 =(double *)p2;

    if (*ip1 > *ip2 ){
        result = 1;
    }
    else if(*ip1 < *ip2){
        result = -1;
    }
    else{
        result = 0;
    }
    return result;
}