#include <stdio.h>

// int schaltjahr(int jahr);

// int main(){
//     int n, m;
//     scanf("%d", &n);
//     m = schaltjahr(n);
//     printf("%d\n", m);
//     return 0;
// }

int schaltjahr(int jahr){
    if(jahr % 4 == 0){
        if(jahr % 100 == 0){
            if(jahr % 400 == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else {
        return 0;
    }
}