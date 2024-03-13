#include <stdio.h>
#include <limits.h>


int sequence(int x, int n){
    if(n < 0){
        return 0;
    }
    else if(n == 0){
        return x;
    }
    else{
        for(int i = 1; i <= n; i++){
            if(x % 2 == 1){
                if(x >= INT_MAX){
                    return -1;
                }
                x = 3 * x + 1;
            }
            else{
                x /= 2;
            }
        }
    }
    return x;
}