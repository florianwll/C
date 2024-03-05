#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    if(n<0){
        printf("keine negative Zahlen wie %d.\n", n);
        return 0;
    }
    while(sum>9 || sum <= 0){
        sum = 0;
        while(n>0){
            sum += n%10;
            n/= 10;
        }
        n = sum;
        if( sum == 0){
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}