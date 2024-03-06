#include <stdio.h>

int main(){
    int troll;
    scanf("%d", &troll);

    int anzahl = troll/4;

    if(troll == 0){
        return 0;
    }

    for(int i = 0; i < anzahl-1; i++){
        printf("viele-");
    }

    int erg = troll%4;

    if(anzahl >= 1 && erg != 0){
        printf("viele-");
    }
    else if(anzahl >= 1 && erg == 0){
        printf("viele");
    }

    if(erg > 0){
        printf("%d\n", erg);
    }
    else if (erg == 0) {
        printf("\n");
    }
}