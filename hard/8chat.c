#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int low, int high) {
    if (low < high) {
        int pivot_index = (high + low) / 2;
        int pivot = array[pivot_index];
        int number;

        // Verschiebe das Pivot-Element ans Ende
        number = array[pivot_index];
        array[pivot_index] = array[high];
        array[high] = number;

        int j = low;
        for (int i = low; i < high; i++) {
            if (array[i] < pivot) {
                number = array[i];
                array[i] = array[j];
                array[j] = number;
                j++;
            }
        }

        // Verschiebe das Pivot-Element an seine endgültige Position
        number = array[j];
        array[j] = array[high];
        array[high] = number;

        // Sortiere die linke und rechte Partition
        sort(array, low, j - 1);
        sort(array, j + 1, high);
    }
}