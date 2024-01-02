#include <stdio.h>
#include <math.h>
#include "planets.h"

void circ(planet p){
    switch(p){
        case Merkur:
            printf("1");
            break;
        case Venus:
            printf("2");
            break;
        case Jorden:
            printf("3");
            break;
        case Mars:
            printf("4");
            break;
        case Jupiter:
            printf("5");
            break;
        case Saturn:
            printf("6");
            break;
        case Uranus:
            printf("7");
            break;
        case Neptun:
            printf("8");
            break;
        default:
            printf("Invalid input!");
            break;
    }
}