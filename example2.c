#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int *array = NULL;

    // Allocate memory for an array of integers
    array = (int *)malloc(SIZE * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Initialize the array with some values
    for (int i = 0; i < SIZE; i++) {
        array[i] = i * 2;
    }

    // Access elements of the array
    for (int i = 0; i < SIZE; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Free the allocated memory
    free(array);

    // Attempt to access the array after freeing it (causing segmentation fault)
    printf("Trying to access the array after freeing it:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
