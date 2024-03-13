#include <stdlib.h>
#include "a04-testing.h"

void change(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int recSort(int* start, int* end, int reverse){
    if(start == NULL || end == NULL){
        return -1;
    }
    if(start >= end){
        return 0;
    }
    int swap = 0;
    for(int *i= start; i < end; i++){
        if(!reverse && *i < *(i+1)){
            change(i,i+1);
            swap++;
        }
        else if(reverse && *(start+(end-i)) > *(start+(end-i-1))){
            change(start+(end-i),start+(end-i-1));
            swap++;
        }
    }

    int *newStart = (reverse) ? start + 1 : start; // Update new start based on reverse
    int *newEnd = (reverse) ? end : end - 1; // Update new end based on reverse
    return swap + recSort(newStart, newEnd, !reverse); // Recursively call with updated parameters

    
}