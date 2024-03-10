#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strclean(char *t){
    if(t == NULL) return -1;
    int count = 0;
    int ind = 0;
    for(int i = 0; i < strlen(t); i++){
        if(!isspace(t[i]) && isprint(t[i])){
            t[ind++] = t[i];
        }
        else{
            count++;
        }
    }
    t[ind] = '\0';
    return count;
}