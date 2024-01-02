#include <stdlib.h>
#include <time.h>
#include <stdio.h>

typedef enum {Lakseruller, Tyrefedt, Rejecocktail} Forret;
typedef enum {Lasagne, Pizza, Steak} Hovedret;
typedef enum {Bananasplit, Is, Pandekager} Dessert;

int RandForret();
int RandHovedret();
int RandDessert();

int PrintForret(int f);
int PrintHovedret(int h);
int PrintDessert(int d);

int main(void)
{
    srand(time(NULL));
    for(int i = 0; i < 25; ++i){
        PrintForret(RandForret());
        PrintHovedret(RandHovedret());
        PrintDessert(RandDessert());
        printf("\n");
    }
    printf("Bone apple tea!");
    return 0;
}

int RandForret(){
    int iForret = rand() % 3;
    return iForret;
};

int RandHovedret(){
    int iDessert = rand() % 3;
    return iDessert;
};

int RandDessert(){
    int iDessert = rand() % 3;
    return iDessert;
};

int PrintForret(int f){
    switch(f){
        case Lakseruller:
            printf("Lakseruller, ");
            break;
        case Tyrefedt:
            printf("Tyrefedt, ");
            break;
        case Rejecocktail:
            printf("Rejecocktail, ");
            break;
    }
};

int PrintHovedret(int h){
    switch(h){
        case Lasagne:
            printf("Lasagne og ");
            break;
        case Pizza:
            printf("Pizza og ");
            break;
        case Steak:
            printf("Steak og ");
            break;
    }
};

int PrintDessert(int d){
    switch(d){
        case Bananasplit:
            printf("Bananasplit");
            break;
        case Is:
            printf("Is");
            break;
        case Pandekager:
            printf("Pandekager");
            break;
    }
};