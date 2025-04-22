#include <stdio.h>

int main(){
    char name[] = "Gamma";
    int age = 19;

    printf("Hello %s, you are %d years old. \n", name, age);

    printf(" \n");


    // Width and Precision Formatting
    printf("width and Precision Formatting\n");

    float pi = 3.14159;
    printf("%.2f\n",pi);   // 3.14
    printf("%10.2f\n", pi); // '       3.14'  10 spaces, 2 decimal places
    printf("%-10.2f\n", pi); // '3.14      '  10 spaces, 2 decimal places


    printf(" \n");


    //Padding and Alignment
    printf("Padding and Alignment\n");


    printf("%05d\n", 42); // 00042
    printf("%-10s\n", "Hi"); // "Hi        "
    printf("%10s\n", "Hi");  // "        Hi"
    printf("%-10d\n", 42);   // "42        "
    printf("%10d\n", 42);    // "        42"   


    printf(" \n");


    //Hex Dumps
    printf("Hex Dumps\n");

    int x= 255;
    printf("Hex: 0x%X\n",x);

    //Print Pointers
    printf("Print Pointers\n"); 

    int a= 43;
    printf("Address of a: %p\n",(void*)&a); // %p for pointer address

    return 0;

}