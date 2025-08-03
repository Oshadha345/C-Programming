#include <stdio.h>

int main() {
    int a = 42;
    int *ptr = &a;

    printf("Value : %d\n", *ptr); // Dereferencing pointer to get value
    printf("Address of a: %p\n",(void*)&a); // Address of variable a
    printf("Address stored in ptr: %p\n", ptr); // Address stored in pointer ptr
    printf("Address of ptr: %p\n", &ptr); // Address of pointer ptr

    *ptr = 100;

    printf("New value of a: %d\n", *ptr); // Dereferencing pointer to get new value
    printf("New address of a: %p\n", (void*)&a);
}