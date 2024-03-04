#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n%2 == 0){
        printf("gerade\n");
    }
    else{
        printf("ungerade\n");
    }

    return 0;
}