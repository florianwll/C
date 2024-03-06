#include <stdio.h>
#include <math.h>

int main(){
    int bin, counter = 0, sum = 0;
    scanf("%d", &bin);

    while(bin>0){
        if(bin%10){
            sum += pow(2, counter);
        }
        bin/= 10;
        counter++;
    } 
    printf("%d\n", sum);
    return 0;
}