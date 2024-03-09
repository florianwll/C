#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int frequency(const char string[], char ch){
    int counter = 0;
    char c;
    int i = 0;
    if(string == NULL){
        return 0;
    }
    while ((c = string[i]) != '\0'){
        if(toupper(c) == toupper(ch)){
            counter++;
        }
        i++;
    }
    return counter;
}

// int main() {
//     const char string[] = "Hello World";
//     char ch = 'o';
//     int freq = frequency(string, ch);

//     printf("Frequency of '%c' in '%s' is %d\n", ch, string, freq);

//     return 0;
// }
