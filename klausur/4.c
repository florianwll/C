#include <stdio.h>

typedef struct {
    long low;   // untere Intervallgrenze
    long up;    // obere Intervallgrenze
} interval_t;

int is_empty_intersection(const interval_t *a, const interval_t *b) {
    if (a == NULL || b == NULL) {
        return 1; 
    }

    long max_low = (a->low > b->low) ? a->low : b->low; 
    long min_up = (a->up < b->up) ? a->up : b->up;      

    if (max_low > min_up) {
        return 1; 
    } else {
        return 0; 
    }
}
