#include <stdio.h>

int main(){
    int n, sum;
    scanf("%d", &n);
    while(sum>10 || sum <= 0){
        sum = 0;
        while(n>0){
            sum += n%10;
            n/= 10;
        }
        n = sum;
    }
    printf("%d\n", sum);
    return 0;
}