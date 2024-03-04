#include <stdio.h>
#include <math.h>

// long f(long x);

// int main(){

//     long n, m;
//     scanf("%ld", &n);
//     m = f(n);
//     printf("EIN: %ld, AUS: %ld", n, m);

//     return 0;
// }

long f(long x){
    return 7*pow(x,3) + pow(x,2) + 6*x +2;
}