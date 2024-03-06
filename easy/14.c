#include <stdio.h>
#include <math.h>


int main(){
    int sum, start, counter;

    scanf("%d", &start);
    while(start > 0){
        if(counter % 2 == 0){
            sum += start %10;
            start /= 10;
            counter++;
        }
        else {
            sum -= start % 10;
            start /= 10;
            counter++;
        }    
    }
    printf("%d\n", sum);
    return 0;
}