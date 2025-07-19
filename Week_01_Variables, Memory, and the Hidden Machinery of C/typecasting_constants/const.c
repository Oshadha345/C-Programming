#include <stdio.h>

#define MAX 10

int print(){
    const int const_value = 6;
    printf("Constant value in function: %d\n", const_value);
}

int main() {
    const int const_value = 5;

    print(); // Call to function that prints constant value
    printf("Constant value: %d\n", const_value);
    printf("Size of constant: %zu bytes\n", sizeof(const_value));
    printf("Max value: %f\n", MAX);
    printf("Size of MAX: %zu bytes\n", sizeof(MAX));

    return 0;
}