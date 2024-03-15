#include <stdio.h>
#include <stdlib.h>

int is_perm(int *eingabe , int laenge);

int permtest( const unsigned int* p, int laenge){
    if(p == NULL || laenge < 0){
        return NULL;
    }
    if(is_perm(p, laenge)){
        return 1;
    }
    else{
        return 0;
    }


}

int is_perm(int *eingabe , int laenge){
    int counter[laenge];
    for(int i = 0; i < laenge; i++){
        counter[i] = 0;
    } 
    for(int i = 0; i < laenge; i++){
        if(eingabe[i] < 1 || eingabe[i] > laenge){ 
            return 0;
        }
        counter[eingabe[i]-1]++;
    }

    for(int i = 0; i < laenge; i++){
        if(counter[i] != 1){
            return 0; 
        }
    }
    return 1; 
}