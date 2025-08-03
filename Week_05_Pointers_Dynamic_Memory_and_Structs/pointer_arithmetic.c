#include <stdio.h>

int main(){

    int x=4, y=2, *p1, *p2, sum, sub, mul, div, mode;

    p1 = &x;
    p2 = &y;

    sum = *p1 + *p2;
    sub = *p1 - *p2;
    mul = *p1 * *p2;
    div = *p1 / *p2;
    mode = *p1 % *p2;

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mode);

    printf("Address of x: %p\n", (void*)&x);
    printf("Address of y: %p\n", (void*)&y);

    return 0;
}