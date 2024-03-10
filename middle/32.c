#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *middle_square(int seed){
    int *feld = (int*) malloc(100 * sizeof(int));
    feld[0] = seed;
    for(int i = 1; i < 100; i++){
        int quad = seed*seed;
        int seed = (quad % 1000) / 10;
    }

    return feld;
}