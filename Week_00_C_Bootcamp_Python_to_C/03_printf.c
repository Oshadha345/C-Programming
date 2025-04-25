#include <stdio.h>

int main(){
    printf(" \n");
    printf("--------------------------------------- \n");
    printf("Intro to printf\n");
    printf("--------------------------------------- \n");
    printf(" \n");

    // Basic printf usage
    printf("1. Basic printf usage\n");
    printf(" \n");

    printf("Hello, World!\n"); // Output a string
    printf("Hello, %s\n", "World"); // Output a formatted string 
    
    
    printf(" \n");

    // Format Specifiers
    printf("2. Format Specifiers\n");
    printf(" \n");

    char name[] = "Gamma";
    int age = 19;

    printf("Hello %s, you are %d years old. \n", name, age);

    printf(" \n");


    // Width and Precision Formatting
    printf("3. width and Precision Formatting\n");
    printf(" \n");

    float pi = 3.14159;
    printf("%.2f\n",pi);   // 3.14
    printf("%10.2f\n", pi); // '       3.14'  10 spaces, 2 decimal places
    printf("%-10.2f\n", pi); // '3.14      '  10 spaces, 2 decimal places


    printf(" \n");


    //Padding and Alignment
    printf("4. Padding and Alignment\n");
    printf(" \n");



    printf("%05d\n", 42); // 00042
    printf("%-10s\n", "Hi"); // "Hi        "
    printf("%10s\n", "Hi");  // "        Hi"
    printf("%-10d\n", 42);   // "42        "
    printf("%10d\n", 42);    // "        42"   


    printf(" \n");


    //Hex Dumps
    printf("5. Hex Dumps\n");
    printf(" \n");

    int x= 255;
    printf("Hex: 0x%X\n",x);

    printf(" \n");

    //Print Pointers
    printf("6. Print Pointers\n"); 
    printf(" \n");

    int a= 43;
    printf("Address of a: %p\n",(void*)&a); // %p for pointer address
    printf(" \n");

    return 0;

}