#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* fahrgaeste(int einaus[][2], int n){
    int *number = (int*) malloc(n * sizeof(int));
    if(number == NULL){
        free(number);
        return NULL;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += einaus[i][0];
        sum -= einaus[i][1];
        number[i] = sum;
    }
    return number;
}