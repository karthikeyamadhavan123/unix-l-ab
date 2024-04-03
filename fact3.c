#include <stdio.h>

int main() {
    int *ptr = NULL;
    
    // First segmentation fault: Dereferencing a null pointer
    *ptr = 10;

    // Second segmentation fault: Accessing memory beyond the allocated space
    int arr[5];
    arr[10] = 20;

    // Third segmentation fault: Writing to a read-only memory
    char *str = "Segmentation fault";
    str[0] = 's';

    // Fourth segmentation fault: Stack overflow
    main();

    return 0;
}

