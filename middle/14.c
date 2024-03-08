#include <stdio.h>

int main(){
    char name[30];
    char nachricht[500];
    int counter = 0;
        while (counter < 29 && scanf("%c", &n) == 1 && n != '\n') {
        name[counter] = n;
        counter++;
    }
    for(int i = 0; i < 30; i++){
        if(name[i] == 0){
            printf("\n");
            break;
        }
        else{
            printf("%c", name[i]);
        }
    }
}