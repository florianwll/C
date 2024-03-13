#include <stdlib.h>
#include <stdio.h>
#include "a04-testing.h"


int main(int argc, char *argv[]){
    if(argc < 2){
        printf("%d\n", recSort(NULL, NULL, 1));
    }
    int *speicher = (int*) malloc(argc-1 * sizeof(int));
    if(speicher == NULL){
        printf("Speicher gleich NULL\n");
        return -1;
    }

    for(int i = 1; i < argc; i++){
        speicher[i-1] = atoi(argv[i]);
        printf("%d ", speicher[i-1]);
    }
    printf("\n");
    printf("%d \n",recSort(speicher, (speicher+(argc-1)), 1));
    for(int i = 0; i < argc-1; i++){
        printf("%d ", speicher[i]);
    }
    printf("\n");

    free(speicher);
    return 0;

}

