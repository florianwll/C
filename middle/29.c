#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int exchange(char* s, char a, char b){
    int count = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == a){
            s[i] = b;
            count++;
        }
    }
    return count;
}