#include <stdio.h>

int main(){
    char name[30];
    char nachricht[500];
    scanf("%s", name);

    printf("Empfänger: %s\nNachricht:", name);

    char c;
    int i = 0;
    while ((c = getchar()) != EOF){
        nachricht[i] = c;
        i++;
    }
    nachricht[i] = '\0';
    for(int j = 0; j < i; j++){
        printf("%c", nachricht[j]);
    }
    return 0;
}