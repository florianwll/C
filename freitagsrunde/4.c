#include <stdio.h>

int main(){
    int fib1 = 0, fib2 = 1, sum = 0;
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("0\n");
        return 0;
    }
    else if (n == 1) {
        printf("1\n");
        return 0;
    }

    else {
        for(int i = 2; i <= n; i++){
            sum = fib2 + fib1;
            fib1 = fib2;
            fib2 = sum;
        }
    }
    printf("%d\n", sum);
    return 0;
}