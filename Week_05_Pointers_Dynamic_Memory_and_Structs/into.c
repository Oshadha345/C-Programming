#include <stdio.h>

int main() {
    int x = 1;
    int *p = &x;

    int *q;

    q = p;
    *q = 5;

    printf("Value of x: %d\n", x); 



    return 0;
}   