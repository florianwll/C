#include <stdio.h>
#include <stdlib.h>


int main(){
    int *speicher = (int*) malloc (10 * sizeof(int));
    if(speicher == NULL){
        return -1;
    }
    for(int *i = speicher; i < (speicher+10); i++){
        *i = ((speicher - i) % 2) ? 0 : 1;
        printf("%d ", *i); 
    }
    printf("\n");
    free(speicher);
    return 0;
}