#include <stdio.h>

int main() {
    int min, max;

    int a[] = {23,45,6,98};

    min, max  = a[0];
    

    int *ptr = &a[0];

    for (int i = 1; i<4; i++){
        if ( max < (*(ptr + i)) ){
            max = *(ptr + i);
        }
        if ( min > (*(ptr + i)) ){
            min = *(ptr + i);
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}