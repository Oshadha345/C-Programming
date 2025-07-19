#include <stdio.h>
#include <stdlib.h>

void compare_memory() {
    int stack_var = 10;
    int *heap_var = malloc(sizeof(int));
    *heap_var = 20;

    printf("Stack variable address: %p\n", (void*)&stack_var);
    printf("Heap variable address:  %p\n", (void*)heap_var);
    
    free(heap_var);
}

int main() {
    compare_memory();
    return 0;
}
