#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int string_to_int(char * s){
    int i = 0;
    int calc = 1;
    if(s[0] == '-'){
        i = 1;
        calc = -1;
    }
    else{
        i = 0;
    }
    int number = 0;
    while(s[i] != '\0'){
        number = number * 10 + (s[i] - '0');
        i++;
    }
    return number * calc;
}