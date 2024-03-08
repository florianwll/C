#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int number;
    scanf("%u", &number);
    printf("%u: ", number);
    for(int i = 2; i <= number; i++){
        while(number % i == 0){
            printf("%u ", i);
            number /= i;
        }
    }
    return 0;
}