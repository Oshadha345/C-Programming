#include <stdio.h>

int recursive_function(int n) {
    if (n==1){
        return 1; //  base case
    }
    else{
        return 1 + recursive_function(n-1); // recursive case
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = recursive_function(n);

    printf("The result of the recursive function for %d is: %d\n", n, result);
    return 0;
}