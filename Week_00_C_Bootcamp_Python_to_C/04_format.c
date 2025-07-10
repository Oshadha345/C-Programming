#include <stdio.h>

int main(){

    printf(" \n");
    printf("--------------------------------------- \n");
    printf("Using printf with different format specifiers:\n");
    printf("--------------------------------------- \n");
    printf(" \n");


    int a = 75;


    printf("1.As int: %d\n", a);      // 75
    printf("2.As char: %c\n", a);     // ASCII value of 75 is 'K'
    printf("3.As float: %f\n", (float)a);    // 5.000000
    printf("4.As double: %lf\n", (double)a);  // 5.000000
    printf("5.As string: %s\n", a);   // Undefined behavior, as 'a' is not a string

    return 0;
}