#include <stdio.h>

#define pi 3.14159265;

// double kreisflaeche(double n);
// double kreisumfang(double n);

// int main(){
//     printf("%lf\n",kreisflaeche(1));
//     printf("%lf\n",kreisumfang(100));
// }

double kreisflaeche(double n){
    return ((n/2)*(n/2)) * pi;
}

double kreisumfang(double n){
    return 2 * n/2 * pi;
}