#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch(n%4){
        case 0:
            printf("ROT\n");
            break;
        case 1:
            printf("ROT/GELB\n");
            break;
        case 2:
            printf("GRÜN\n");
            break;
        case 3:
            printf("GELB\n");
            break;
    }
    return 0;
}