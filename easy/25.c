// #include <stdio.h>
// #include <math.h>
// #include <limits.h>

// int josephus(int n);

// int main(){
//     printf("%d", josephus(12));
//     return 0;
// }

int josephus(int n){
    if(n == 1){
        return 1;
    }
    else{
        if(n%2 == 0){
            return 2 * josephus(n/2) -1;
        }
        else{
            return 2 * josephus((n-1)/2) +1;
        }
    }
}