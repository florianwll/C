#include <stdio.h>

unsigned long ggT(unsigned long a, unsigned long b){
    if(b>0){
        return ggT(b, a%b);
    }
    else{
        return a;
    }
}