#include <stdio.h>

int main(){

    printf(" \n");
    printf("--------------------------------------- \n");
    printf("Using printf with different format specifiers:\n");
    printf("--------------------------------------- \n");
    printf(" \n");


    int a = 5;


    printf("1.As int: %d\n", a);      // 5
    printf("2.As char: %c\n", a);     // ASCII value of 5 is not printable
    printf("3.As float: %f\n", a);    // 5.000000
    printf("4.As double: %lf\n", a);  // 5.000000
    printf("5.As string: %s\n", a);   // Undefined behavior, as 'a' is not a string 

    return 0;
}