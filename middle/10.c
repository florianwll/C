#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void sort(int *a, int len){
    bool done = false, changes = false;
    int lenCopy = len;
    while(!done){
        for(int i = 0; i < lenCopy-1; i++){
            if(*(a+i) > *(a+i+1)){
                changes = true;
                int n = *(a+i);
                *(a+i)= *(a+i+1);
                *(a+i+1) = n;
            }
        }
        if(!changes){
            done = true;
        }
        else{
            changes = false;
            lenCopy--;
        }
    }
}