#include <stdio.h>

int a = 6;
int b = 9;
int c = 14;
int flag = 1;
int main(void) {
    if(c == a + b || !flag){
        printf("True 1");
    }
    if(a != 7 && flag || c >= 6){
        printf("True 2");
    }
    if(!(b <= 12) && a % 2 == 0){
        printf("True 3");
    }
    if(!(a > 5 || c < a + b)){
        printf("True 4");
    }
    return 0;
}