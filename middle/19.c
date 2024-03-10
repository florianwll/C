#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    int counter = 0;
    char c;
    int i = 0;
    int laenge;
    char word[20];

    scanf("%s", word);
    scanf("%d", &laenge);
    for(int j = 0; j < laenge/2; j++){
        // printf("%c %c\n", word[j], word[laenge - 1 - j]);

        if(toupper(word[j]) != toupper(word[laenge - 1 - j])){
            printf("kein palindrom\n");
            return 0;
        }
    }
    printf("palindrom\n");
    return 0;
}