#include <stdio.h>

int main() {

    int a = 10;
    float b= 10.5;

    //implicit typecasting
    int j = b;
    printf("Implicit typecasting: %d\n", j);

    //explicit typecasting
    float c = (float) a;
    printf("\nExplicit typecasting: %f\n", c);

    //constant typecasting
    const int d = 20;
    const float e = (float) d;
    printf("\nConstant typecasting: %f\n", e);

    //typecasting with pointers
    int f = 30;
    float *ptr = (float*)&f; // typecasting int pointer to float pointer
    printf("\nTypecasting with pointers: %f\n", *ptr);

    //typecasting with arrays
    int arr[] = {1, 2, 3, 4};
    float *arr_ptr = (float*)arr; // typecasting int array to float array
    printf("\nTypecasting with arrays:\n");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("Element %d: %f\n", i, *(arr_ptr + i));
    }

    return 0;
}