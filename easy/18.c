// #include <stdio.h>
// #include <math.h>

// int f(int n);
// int g(int n);
// int h(int a, int b, int n);


// int main(){
//     printf("%d\n", f(4));
//     printf("%d\n", g(2));
//     printf("%d\n", h(3,3,4));
//     return 0;
// }

int f(int n){
    if(n == 0){
        return 1;
    }
    else if (n == 1) {
        return 3;
    }
    else {
        int first = 1, second = 3, sum = 0;
        for(int i = 1; i<n; i++){
            sum = second + 2* first;
            first = second;
            second = sum;
        }
        return sum;
    }
}

int g(int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return 3;
    }
    else {
        return g(n-1) + 2*g(n-2);
    }
}

int h(int a, int b, int n){
    if(n == 0){
        return a;
    }
    else if (n == 1) {
        return b;
    }
    else{
        if(n % 2 == 0){
            return h(a,b,n-1) - h(a,b,n-2);
        }
        else{
            return h(a,b, n-1) + h(a,b,n-2);
        }
    }
}