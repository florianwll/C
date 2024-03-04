#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch(n%4){
        case 2:
            printf("Winterspiele\n");
            break;
        case 0:
            printf("Sommerspiele\n");
            break;
        default:
            printf("keine Spiele\n");
            break;
    }
    return 0;
}