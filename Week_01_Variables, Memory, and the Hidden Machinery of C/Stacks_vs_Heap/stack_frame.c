#include <stdio.h>
#include <stdlib.h>

void inner() {
    int z = 3;
    printf("Inner z address: %p\n", (void*)&z);
}

void outer() {
    int y = 2;
    printf("Outer y address: %p\n", (void*)&y);
    inner();
}

int main() {
    int x = 1;
    printf("Main x address: %p\n", (void*)&x);
    outer();
    return 0;
}
