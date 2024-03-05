#include <stdio.h>

int main(){
    for(int i = 1; i< 998; i++){
        for(int j = 1; j < 999; j++){
            for(int k = 1; k < 1000; k++){
                if(!(i < j < k)){
                    continue;
                }
                if(i*i + j*j != k*k){
                    continue;
                }
                if(i+j+k != 1000){
                    continue;
                }
                printf("Found: %d %d %d\n", i, j, k);
                return 0;


            }
        }
        
    }
}