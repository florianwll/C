#include <stdio.h>

int doquer(int n, int sum);

int main(){
    int n, sum;
    scanf("%d", &n);
    sum = doquer(n, 0);
    printf("%d\n", sum);
    return 0;
}

int doquer(int n, int sum){
    sum += n%10;
    n /= 10;
    if(n > 0){
        return(doquer(n, sum));
    }
    else{
        return sum;
    }
}