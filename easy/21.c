// // #include <stdio.h>
// // #include <math.h>
// #include <limits.h>
// int sequence(int x, int n);

// int main(int argc, char *argv[]) {
  
//   int x = 3;
//   int min = -2, max = 8;

//   for (int n = min; n <= max; n++)
//     printf("sequence(%d, %d) == %d\n", x, n, sequence(x,n));

//   return 0;
// }


int sequence(int x, int n){
    int first = x;
    if(n < 0){
        return 0;
    }
    else if(n == 0){
        return x;
    }
    else{
        for(int i = 1; i <= n; i++){
            if(first%2 == 1){
                if(first > INT_MAX/3){
                    return -1;
                }
                first = 3*first +1;
            }
            else{
                first = first/2;
            }
        }

    }
    return first;
}