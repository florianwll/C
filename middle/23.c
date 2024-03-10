#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* string_filter(const char* text){
    char txt[strlen(text)+1];
    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] >= 'a' && text[i] <= 'z' || text[i] >= 'A' && text[i] <= 'Z'){
            txt[count] = text[i];
            count++;
        }
    }
    txt[count] = '\0';
    return txt;
}