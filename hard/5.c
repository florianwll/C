#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int min(int a, int b, int c) {
    int minimum = a;
    if (b < minimum) {
        minimum = b;
    }
    if (c < minimum) {
        minimum = c;
    }
    return minimum;
}


int levenshtein(char* wort1, char* wort2){
    if(wort1 == NULL && wort2 == NULL){
        return NULL; // Return an error code if either input is NULL
    }
    
    int len1 = strlen(wort1);
    int len2 = strlen(wort2);
    
    int **matrix = (int **)malloc((len1 + 1) * sizeof(int *));
    if (matrix == NULL) {
        return NULL; // Memory allocation failed
    }

    // Allocate memory for each row
    for (int i = 0; i < len1 + 1; i++) {
        matrix[i] = (int *)malloc((len2 + 1) * sizeof(int));
        if (matrix[i] == NULL) {
            return NULL; // Memory allocation failed
        }
    }

    // Initialize the first row and column
    for (int i = 0; i <= len1; i++) {
        matrix[i][0] = i;
    }
    for (int j = 0; j <= len2; j++) {
        matrix[0][j] = j;
    }

    // Fill the matrix using dynamic programming
    for(int i = 1; i <= len1; i++){
        for(int j = 1; j <= len2; j++){
            if(wort1[i-1] == wort2[j-1]){
                matrix[i][j] = matrix[i-1][j-1];
            }
            else {
                matrix[i][j] = 1 + min(matrix[i-1][j-1], matrix[i][j-1], matrix[i-1][j]);
            }
        }
    }

    int distance = matrix[len1][len2];

    // Free dynamically allocated memory
    for (int i = 0; i < len1 + 1; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return distance;
}

