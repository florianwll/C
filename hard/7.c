#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int **getMatrix(int rows, int cols, int scan) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        return NULL; // Fehler beim Speichern der Zeiger auf die Zeilen
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    if(scan){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    }

    return matrix;
}


int main(){
    int n,m,o,p, sum = 0;

    scanf("%d%d",&n,&m);
    int **first = getMatrix(m,n,1);

    scanf("%d%d",&o,&p);
    int **second = getMatrix(p,o,1);

    int **result = getMatrix(p,o,0);

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < o; j++) {
            result[i][j] = 0;
        }
    }
    for(int i = 0; i < p; i++){
        for(int j = 0; j < o; j++){
            for(int x = 0; x < p; x++){
                result[i][j]+= first[i][x] * second[x][j];
            }
            printf("%d ", result[i][j]);
            sum = 0;
        }
        printf("\n");
    }


    for (int i = 0; i < m; i++) {
        free(first[i]);
    }
    free(first);

    for (int i = 0; i < p; i++) {
        free(second[i]);
    }
    free(second);

    for (int i = 0; i < p; i++) {
        free(result[i]);
    }
    free(result);
    return 0;

    }