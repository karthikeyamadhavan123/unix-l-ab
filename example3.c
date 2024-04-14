#include <stdio.h>
#include <stdlib.h>

void access_unallocated_memory() {
    int *ptr;
    *ptr = 10; // Attempting to access unallocated memory
}

void do_some_work(int n) {
    // Simulating some work with a loop
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    printf("Sum: %d\n", sum);
}

int main() {
    printf("Starting program...\n");

    // Simulating some operations
    for (int i = 0; i < 3; i++) {
        printf("Iteration %d\n", i);
        do_some_work(i * 1000);
    }

    // Attempt: Accessing unallocated memory
    printf("Attempting to access unallocated memory...\n");
    access_unallocated_memory(); // This will cause a segmentation fault

    // More operations after the segmentation fault
    printf("Program continues after the segmentation fault.\n");

    return 0;
}
