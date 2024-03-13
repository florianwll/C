#include <stdio.h>



bruch_t sub_rational(bruch_t *x, bruch_t *y);

bruch_t* max_rational(bruch_t list[], int length) {
    if (list == NULL || length < 1) {
        return NULL;
    }
    
    bruch_t* max = &list[0]; // Initialize max with the first element

    for (int i = 1; i < length; i++) {
        if ((float)sub_rational(&list[i], max).zaehler / (float)sub_rational(&list[i], max).nenner> 0) {
            max = &list[i];
        }
    }
    return max;
}
