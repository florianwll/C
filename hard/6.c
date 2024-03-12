#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_perm( const int perm[], int length){
    if (perm == NULL || length <= 0) {
        return NULL;
    }
    for(int i = 1; i <= length; i++){
        for(int j = 0; j < length; j++){
            if(perm[j] <= 0 || perm[j] >length)
                return 0;
            if(perm[j] == i){
                break;
            }
            if(j == length-1)
                return 0; 
        }
    }

    return 1;
}

int sudokucheck(const int** s){
    for(int i = 0; i < 9; i++){
        if(is_perm(s[i],9) == 0){
            return 0;
        }
    }
    int* problem = (int*)malloc(sizeof(int) * 9);
    if (problem == NULL) { 
        return NULL;
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            problem[j] = s[j][i];
        }
        if(is_perm(problem,9) == 0){
            free(problem);
            return 0;
        }
    }
    int counter = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int x = 0; x < 3; x++){
                for(int y = 0; y < 3; y++){
                    problem[counter] = s[x + 3 * i][y + 3 * j];
                    counter++;
                }
            }
            if(is_perm(problem, 9) == 0){
                free(problem);
                return 0;
            }
            counter = 0;
        }
    }
    free(problem);
    return 1;

}