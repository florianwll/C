#include <stdio.h>
#include <stdlib.h>
#include "a04-testing.h"

int rec_contains(int **pos, int *start, int *end, int x);
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("genau zwei Commands");
        return 0;
    }
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);

    if(n < 0){
        printf("%d ", rec_contains(NULL, NULL, NULL, n));
        return 0;
    }
    else{
        int *speicher = (int*) malloc(n * sizeof(int));
        if(speicher == NULL){
            printf("Es konnte kein Speicher bereitgestellt werden!");
            return -1;
        }
        speicher[0] = rand() % n;
        for(int i = 1; i < n; i++){
            int number = rand() % n;
            if(speicher[i-1] + number < 0){
                printf("speicher ist negativ");
                return 0;
            }
            speicher[i] = speicher[i-1] + number;
        }
        for(int i = 0; i < n; i++){
            printf("Speicherstelle %d: Wert: %d\n",i,speicher[i]);
        }
        int *pos;
    if(k < n){
        printf("%d\n", rec_contains(&pos, &speicher[0], &speicher[n-1], speicher[k]));
    }
    else{
        printf("%d\n", rec_contains(&pos, &speicher[0], &speicher[n-1], k));
    }
    printf("%d\n", *pos);
    free(speicher);
    }

    printf("n = %d und k = %d\n", n,k);
    return 0;
}