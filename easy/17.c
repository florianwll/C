// #include <stdio.h>

// int f(int s, int n);
// int g(int n);
// int h(int n);

// int main(){
//     printf("%d\n", f(1, 8));
//     printf("%d\n", g(2));
//     printf("%d\n", h(3));

//     return 0;
// }

int f(int s, int n){
    for(int i = 1; i <= n; i++){
        s += 2;
    }
    return s;
}

int g(int n){
    int start = 1;
    if(n < 1){
        return 0;
    }
    for(int i = 1; i <= n; i++){
        start *= 2;
    }
    return start-1;
}

int h(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i*i;
    }
    return sum;
}