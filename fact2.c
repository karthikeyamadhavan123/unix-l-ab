#include <stdio.h>

int main() {
    int *ptr = NULL;
    *ptr = 10; // Causes segmentation fault, as it's trying to dereference a null pointer
    return 0;
}

