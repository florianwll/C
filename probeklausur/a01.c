#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int strclean(char *t){
    if(t == NULL){
        return -1;
    }
    char *newArray = (char*) malloc(strlen(t) * sizeof(char));
    if(newArray == NULL){
        return -1;
    }
    
    int counter = 0;
    for(int i = 0; i < strlen(t); i++){
        if(!isgraph(t[i])){
            counter++;
        }
        else{
            newArray[i-counter] = t[i];
        }
    }

    newArray[strlen(t) - counter] = '\0';

    free(newArray);

    return counter;
}