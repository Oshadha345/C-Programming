#include <stdio.h>

int main(){
    int a[4] = {11,12,13,14};

    printf("Array %d \n", a);
    printf("element 1: %d\n", *a);
    printf("element 2: %d\n", *(a+1));
    printf("element 3: %d\n", *(a+2));
    printf("element 4: %d\n", *(a+3));

    return 0;
}