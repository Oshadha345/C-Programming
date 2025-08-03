#include <stdio.h>

int main() {
    int x = 4;
    int *Px = &x; // Pointer to x
    int **PPx = &Px; // Pointer to pointer Px
    int ***PPPx = &PPx; // Pointer to pointer to pointer Px

    // Print the value of x using different levels of indirection
    printf("Value of x: %p\n", (void *)&x);
    printf("Value of x using Px: %p\n", (void *)Px);
    printf("Value of x using PPx: %p\n", (void *)PPx);
    printf("Value of x using PPPx: %p\n", (void ***)PPPx);
}