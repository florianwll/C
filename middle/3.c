#include <stdio.h>

int main(){
    int array[9];
    int b, zeiger = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &b);
        array[i] = b;
    }

    for(int a = 1; a <= 9; a++){
        zeiger = 0;
        while(zeiger < 9){
            if(array[zeiger] == a)
                break;
            zeiger ++;
        }
        if(array[zeiger] != a){
            printf("keine gültige Permutation\n");
            return 0;
        }
    }
    printf("1 2 3 4 5 6 7 8 9\n");
    for(int a = 0; a < 9; a++)
        printf("%d ", array[a]);
        printf("\n");
    return 0;
}