// #include <stdio.h>

// long iteP(unsigned int k);

// int main(){
//     printf("%ld\n", iteP(3));
// }


long iteP(unsigned int k){
    long first = 3, second = 0, third = 2, sum = 0;
    if(k == 0){
        return first;
    }
    else if(k == 1){
        return second;
    }
    else if(k == 2){
        return third;
    }
    for(int i = 2; i < k; i++){
        sum = second + first;
        first = second;
        second = third;
        third = sum;
    }
    return sum;
}