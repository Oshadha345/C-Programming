#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr = malloc(sizeof(int));
    *ptr = 42;
    printf("Value at ptr: %d\n", *ptr);
    free(ptr); // Freeing the allocated memory in the heap
    printf("Value at ptr after free: %d\n", *ptr); // This line will cause a segmentation fault
    return 0;
}