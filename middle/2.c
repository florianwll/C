#include <stdio.h>
#define length 10
int main(){ 
    int arry[length];
    for(int i = 0; i< length; i++){
        if(i%2 == 0){
            arry[i] = 1;
        }
        else{
            arry[i] = 0;
        }
    }
    for(int i = 0; i < length; i++){
        printf("%d ", arry[i]);
    }
    printf("\n");
    return 0;
}
