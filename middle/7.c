#include <stdio.h>
#include <stdlib.h>

int main(){
    int anzahl = 1000;
    int *a = (int*) calloc (anzahl, sizeof(int));
    for(int i = 0; i < anzahl-2; i++){
        *(a+i) = i+2;
    }
    for(int i = 0; i < anzahl-2; i++){
        printf("%d ", *(a+i));
    }    
    return 0;
}