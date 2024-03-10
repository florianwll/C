#include <stdio.h>
#include <stdlib.h>

int main(){
    int counter = 0;
    char c;
    int i = 0;
    char word[100];

    while ((c = getchar()) != '\n'){
        word[i] = c;
        i++;    
    }
    word[i] = '\0';
    int caesar;
    scanf("%d", &caesar);

    for(int i = 0; i < 100; i++){
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
        // Shift the character by n places to the right
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (word[i] - 'a' + caesar) % 26 + 'a'; // Modulo 26 to wrap around if necessary
        } else if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = (word[i] - 'A' + caesar) % 26 + 'A'; // Modulo 26 to wrap around if necessary
        }
        }
    }
    printf("%s", word);
    return 0;
    }