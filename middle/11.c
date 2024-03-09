#include <stdlib.h>
#include <stdio.h>

int *bucket_sort( int values[], int length, int max ){
    if (max < 0) {
        return NULL; // Fehler: max ist negativ
    }

    // Prüfen, ob values und max zulässige Werte haben
    for (int i = 0; i < length; i++) {
        if (values[i] < 0 || values[i] > max) {
            return NULL; // Fehler: Wert außerhalb des zulässigen Bereichs
        }
    }
    int* bucket = (int*) calloc(max+1, sizeof(int));

    for(int i = 0; i < length;i++){
        *(bucket + values[i]) += 1;
    }
        int index = 0;
    for (int i = 0; i <= max; i++) {
        for (int j = 0; j < bucket[i]; j++) {
            values[index++] = i;
        }
    }

    // Speicher für das Bucket-Feld auf dem Heap freigeben
    free(bucket);

    // Rückgabe des sortierten Arrays
    return values;
}