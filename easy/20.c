// #include <stdio.h>
// #include <math.h>

// long iteA(unsigned int n);

// int main(){
//     printf("%ld\n", iteA(5));
//     return 0;
// }

long iteA(unsigned int n) {
    long first = 0, second = 1, sum = 0;
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    
    else{
        for(int i = 1; i < n; i++){
            sum = -2*second + 3*first;
            first = second;
            second = sum;
        }
    }
    return sum;
}