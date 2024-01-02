#include "stdlib.h"
#include "stdio.h"

#define MAX_NAME_LGT 50
typedef struct {
    char fornavn[MAX_NAME_LGT];
    char efternavn[MAX_NAME_LGT];
    char vejnavn[MAX_NAME_LGT];
    int vejnummer;
    int postnummer;
    char bynavn[MAX_NAME_LGT];
}person;

person readFileFolk(FILE *folk);
void writeFileFolk(FILE *output_folk, person folk);

int main(void)
{
    person byOgEfternavn[11];
    FILE *folk = fopen("folk.txt", "r");
    if(folk == NULL){
        printf("RAAAAARGH");
        exit(EXIT_FAILURE);
    }
    rewind(folk);
    FILE *output_folk = fopen("output_folk.txt", "w");
    for (int i = 0; i < 11; i++){
        person result = readFileFolk(folk);
        writeFileFolk(output_folk, result);
    }

    // consider implementing the functions in a library
    // and add tests to check that yours function works correctly
}

person readFileFolk(FILE *folk){
    person p;
    int i;
    //rewind(folk);
    fscanf(folk, " %[A-Za-z] %[A-Za-z], %[A-Za-z ] %d, %d %[^.].",p.fornavn, p.efternavn, p.vejnavn, &p.vejnummer, &p.postnummer, p.bynavn);
    printf("%s: %s \n",p.bynavn, p.efternavn);
    return p;
}


void writeFileFolk(FILE *output_folk, person folk){
    fprintf(output_folk,"%s: %s \n",folk.bynavn, folk.efternavn);
}