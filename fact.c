#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

void initializeArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
}

void processArray(int *arr, int size) {
    for (int i = 0; i <= size; i++) { // Intentional mistake: accessing one element beyond the array size
        arr[i] *= 2;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr = (int *)malloc(ARRAY_SIZE * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    initializeArray(arr, ARRAY_SIZE);
    processArray(arr, ARRAY_SIZE);
    printArray(arr, ARRAY_SIZE);

    free(arr);
    return 0;
}

