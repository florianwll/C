#include <stdio.h>

int main(){
    int i;
    while(scanf("%d", &i) != EOF){
        printf("OKT: %o, HEX: %x\n", i,i);
    }
    return 0;
}