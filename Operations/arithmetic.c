#include <stdio.h> 


int main() {
    int a, b, add, sub, mul, mod, div;

    a = 4, b = 3;
    add = a + b; 
    sub = a - b; 
    mul = a * b; 
   div = a / b; 
    mod = a % b;

    printf("Addition is = %d\n", add); 
    printf("Subtraction is = %d\n", sub); 
    printf("Multiplication is = %d\n", mul); 
    printf("Division is = %ld\n", div); 
    printf("Remainder is = %d\n", mod);
    return 0;
}