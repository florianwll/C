#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char word1[15];
    char word2[15];
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        word1[i] = c;
        i++;
        if(i == 16){
            printf("Fehler");
            return 0;
        }
    }
    word1[i] = '\0';
    i = 0;
    while ((c = getchar()) != '\n'){
        word2[i] = c;
        i++;
                if(i == 16){
            printf("Fehler");
            return 0;
        }
    }
    word2[i] = '\0';

    printf("%s%s", word2,word1);
    return 0;
}