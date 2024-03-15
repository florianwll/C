#include <stdio.h>
#include <stdlib.h>

int is_perm(int *eingabe);

int main(){
    int *sorted = (int*) malloc(9 * sizeof(int));
    if(sorted == NULL){
        return -1;
    }
    for(int i = 0; i < 9; i++){
        *(sorted + i) = i+1;
    }
    int *eingabe = (int*) malloc(9 * sizeof(int));
    for(int i = *eingabe; i < 9; i++){
        scanf("%d", &eingabe[i]);

    }
    if(eingabe == NULL){
        free(sorted);
        return -1;
    }
    int sort = is_perm(eingabe);
    if(sort){
        for(int i = 0; i < 9; i++){
            printf("%d ", sorted[i]);
        }
        printf("\n");
        for(int i = 0; i < 9; i++){
            printf("%d ", eingabe[i]);
        }
        printf("\n");    
    }
    else{
        printf("keine gültige Permutation\n");
    }
    free(eingabe);
    free(sorted);
    return 0;
}

int is_perm(int *eingabe){
    int counter[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    for(int i = 0; i < 9; i++){
        if(eingabe[i] < 1 || eingabe[i] > 9){ 
            return 0;
        }
        counter[eingabe[i]-1]++;
    }

    for(int i = 0; i < 9; i++){
        if(counter[i] != 1){
            return 0; 
        }
    }
    return 1; 
}