#include <stdio.h>
#include <stdlib.h>



struct interval_s {
  long low;  // lower bound 
  long up;   // upper bound
};


int is_empty_intersection(const struct interval_s *a, const struct interval_s *b){
    if(a == NULL || b == NULL || a->low > a->up || b->low > b->up){
        return 1;
    }
    long low_max = (a->low > b->low) ? a->low : b->low;
    long up_min = (a->up < b->up) ? a->up : b->up;

    return (low_max > up_min) ? 1:0;
    // if(low_max > up_min){
    //     return 1;
    // }
    // else{
    //     return 0;
    // }
}