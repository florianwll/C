#include <stdio.h>
#include <math.h>
#include <float.h>

int main(){
    double start;
    scanf("%lf", &start);

    switch((int)start % 4) {
        case 1:
            start = pow(start,(int)start % 4);;
            break;
        case 2:
            start = pow(start,(int)start % 4) + 1;
            break;
        default:
            start = 0.5*start;
            break;
    }
    printf("%f\n", start);
    return 0;
}