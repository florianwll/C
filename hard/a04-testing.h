#include <stdio.h>

int rec_contains(int **pos, int *start, int *end, int x) {
    if (start >= end) {
        *pos = NULL;
        return 0; 
    }
    if (start == end - 1) {
        *pos = (*start == x) ? start : NULL;
        return (*start == x);
         
    }
    int *mid = start + (end - start) / 2;
    if (*mid == x) {
        *pos = mid;
        return 1; 
    } else if (x < *mid) {
        return rec_contains(pos, start, mid, x);
    } else {
        return rec_contains(pos, mid + 1, end, x);
    }
}