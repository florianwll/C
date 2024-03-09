#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* static_str(char* string) {
    char* wort = (char*)malloc(150 * sizeof(char));
    strcpy(wort, string);
    return wort;
}

char* malloc_str(char string[], int len) {
    char* wort = (char*)malloc(len+1 * sizeof(char));
    for (int i = 0; i <= len; i++) {
        wort[i] = string[i];
    }
    return wort;
}