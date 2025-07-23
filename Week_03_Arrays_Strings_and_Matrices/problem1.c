#include <stdio.h>

int main(){
    int a[] = {34,56,54,32,67,89,90,32,21};

    int length = sizeof(a)/ sizeof(a[0]);

    for (int i = length -1; i>=0; i--){
        printf("%d ", a[i]);
    }

    return 0;
}