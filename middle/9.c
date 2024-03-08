#include <stdio.h>

int main(){
    int anzahl;
    scanf("%d", &anzahl);
    int list[anzahl];
    for(int i = 0; i < anzahl; i++){
        scanf("%d", &list[i]);
    }
    for(int i = 0; i < anzahl; i++){
        printf("%d ", list[i]);
    }
        printf("\n");

    int i, j, minIndex, temp;
    for (i = 0; i < anzahl - 1; i++) {
        // Finden des kleinsten Elements im unsortierten Teil des Arrays
        minIndex = i;
        for (j = i + 1; j < anzahl; j++) {
            if (list[j] < list[minIndex]) {
                minIndex = j;
            }
        }
        // Vertauschen des gefundenen kleinsten Elements mit dem ersten Element
        temp = list[minIndex];
        list[minIndex] = list[i];
        list[i] = temp;
    }

    for(int i = 0; i < anzahl; i++){
        printf("%d ", list[i]);
    }
        printf("\n");

}