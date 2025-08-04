#include <stdio.h>

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float r1, r2;
    printf("Enter two resistor values:\n");
    scanf("%f %f", &r1, &r2);

    printf("Before swap: r1 = %.2f, r2 = %.2f\n", r1, r2);
    swap(&r1, &r2);
    printf("After swap:  r1 = %.2f, r2 = %.2f\n", r1, r2);
    return 0;
}
