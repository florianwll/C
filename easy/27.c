// #include <stdio.h>
// #include <math.h>
// #include <limits.h>

// int eimer(double l, double leak);

// int main(){
//     printf("e = %d", eimer(7,25));
// }

int eimer(double l, double leak){
    l = l * 1000;
    int counter = 0;
    while(l > 10){
        l -= (leak/100) * l;
        counter++;
    }
    return counter;
}