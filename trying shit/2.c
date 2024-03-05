#include <stdio.h>

int main(){
    double first, second;
    double option;
    scanf("%lf%lf%lf", &first,&second,&option);

    switch ((int)option % 4) {
        case 0:
            printf("%lf\n", first*second);
            break;
        case 1:
            printf("%lf\n", first + second);
            break;
        case 2:
            printf("%lf\n", first-second);
            break;
        case 3:
            printf("%lf\n", first / second);
            break;
    }
    return 0;
}