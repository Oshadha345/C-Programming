#include <stdio.h>

void fun(int n){
    int i = 0;
    if (n>1){
        fun(n-1);
    }
    for (i = 0; i < n; i++){
        printf("* ");
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fun(n);
    printf("\n");
    return 0;
}