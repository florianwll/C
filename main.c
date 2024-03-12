//1. Malloc, Calloc in stdlib

#include <stdlib.h>
#include <stdio.h>

int* create_int(int size);
char* create_string(int size);

int main() {
    int* array = create_int(10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    } printf("\n");
    //aquivalent
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(array+i));
    } printf("\n");

    char* string = create_string(100);
    printf("%s\n", string);

    string[50] = '\0';
    printf("%s\n", string);

    free(string);
    free(array); //free your pointer
    return 0;
}

//2. Malloc example

int* create_int(int size) {
    int *pointer = (int*)malloc(sizeof(int)*size);

    //1. assume no storage -> pointer = NULL
    if (pointer == NULL) {
        return NULL;
    }

    return pointer;
}

//3. String example
char* create_string(int size) {
    char* string = (char*)malloc(sizeof(char) * size+1);

    if (string == NULL) { 
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        string[i] = 70;
    }
    string[size] = '\0';
    return string;
}
