#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int suche(int *array, int len, int value) {

    while(len > 0){
        len = len/2;
        if(*(array+len) == value){
            return 1;
        }
        else if(*(array+len) > value){
            array+= len +1;
        }
        }
        return 0;
    }

