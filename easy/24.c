#include <stdio.h>
#include <limits.h>

int main(){
    int first, sum;
    scanf("%d", &first);
    for(int i = 1; i < INT_MAX; i++){
        if(sum < 0){
            printf("Leider keine Aussage möglich!\n");
                return 0;
        }
        if(sum == 1){
            printf("bestätigt!\n");
            return 0;
        }
        if(first % 2 == 0){
            sum = first/2;
            first = sum;
        }
        else{
            if(first * 3 + 1 < 0){
                printf("Leider keine Aussage möglich!\n");
                return 0;
            }
            sum = 3 * first + 1;
            first = sum;
        }


    }
    printf("Leider keine Aussage möglich!\n");
    return 0;
}