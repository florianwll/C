// #include <stdio.h>
// #include <math.h>

// long iteA(unsigned int n);

// int main(){
//     printf("%ld\n", iteA(5));
//     return 0;
// }

long iteA(unsigned int n) {
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (-2 * iteA(n-1)) + (3 * iteA(n-2));
    }
}