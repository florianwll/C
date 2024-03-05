#include <stdio.h>

int main(int argc, char **argv) {
    int a, b, c;
    for(a=0; a<998; a++) {
        for(b=a+1; b<999; b++) {
            for(c=b+1; c<1000; c++) {
                if(a*a+b*b==c*c && a+b+c==1000) {
                    printf("Found: %d %d %d\n", a, b, c);
                    return 0;
                }
            }
        }
    }
    return 1;
}