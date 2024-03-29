#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void sort(int *array, int low, int high){
    if (low < high) {
        int pivot_index = (high+low)/2;
        int pivot = array[pivot_index];
        int number;

        number = array[pivot_index];
        array[pivot_index] = array[high];
        array[high] = number;

        int j = low;
        for(int i = low; i < high; i++){
            if(array[i] < pivot){
                number = array[i];
                array[i] = array[j];
                array[j] = number;
                j++;
            }
        }

        number = array[j];
        array[j] = array[high];
        array[high] = number;

        sort(array, low, j-1);
        sort(array, j+1, high);
    }
}
    