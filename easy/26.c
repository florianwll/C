#include <stdio.h>

int main(){
    int count;
    float sum, number;
    while(scanf("%f", &number) != EOF){
        sum += number;
        count++;
    }

    printf("%f", sum/count);
    return 0;
}