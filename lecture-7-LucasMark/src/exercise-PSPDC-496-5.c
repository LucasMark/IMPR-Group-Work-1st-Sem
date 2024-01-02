#include <stdio.h>
#include <stdlib.h>

int sum(int barcodeA[]);

int verification(int sumVeri, int codeLast);

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    printf("Enter 12 digit code, seperated with spaces: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    int barcode[12] = {n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12};
    int veriDig = sum(barcode);
    printf("%d \n", veriDig);
    verification(veriDig,barcode[11]);
}

int sum(int barcodeA[]){
    int sum = 0;
    for(int i = 0; i < 12; i = i + 2){
        sum = sum + barcodeA[i];
    }
    return sum;
}

int verification(int sumVeri, int codeLast){
    if (sumVeri %10 == codeLast){
        printf("Verified");
        return 1;
    }
    else{
        printf("Error in barcode!");
        return 0;
    }
}