#include <stdio.h>
#include <string.h>

int lex_sorted(const char* array[]) {
    int i = 0;
    while (array[i + 1] != NULL) { // Corrected condition to stop at the last valid index
        if (strcmp(array[i], array[i + 1]) > 0) {
            return 0;
        }
        i++; // Increment loop variable
    }
    return 1;
}
