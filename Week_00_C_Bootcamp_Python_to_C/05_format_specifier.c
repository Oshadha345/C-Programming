#include <stdio.h>

int main() {

    printf("\n");
    printf("form of format specifier:\n");
    printf("------------------------------------------------ \n");
    printf("| %[flags][width][.precision][length]specifier | \n");
    printf("------------------------------------------------ \n");
    printf("\n");

    // Width Formatting
    printf("1. Width Formatting\n");
    printf(" \n");
    printf("%2s\n", "Help");
    printf("%4s\n", "Help");
    printf("%6s\n", "Help");
    printf("%8s\n", "Help");
    printf("%s%s\n", "Help", "Help");

    

    // Precision Formatting
    printf("2. Precision Formatting\n");
    printf(" \n");
    printf("%.4s\n", "Help");
    printf("%.3s\n", "Help");
    printf("%.2s\n", "Help");
    printf("%6.2s\n", "Help"); // width of 6, precision of 2
    printf("%-6.2s\n", "Help"); // width of 6, precision of 2, left aligned

    printf(" \n");

    printf("%.2f\n", 3.14159); // 3.14
    printf("%10.2f\n", 3.14159); // '      3.14'  10 spaces, 2 decimal places
    printf("%-10.2f\n", 3.14159); // '3.14      '  10 spaces, 2 decimal places, left aligned
    printf("%10s\n", "Help"); // '      Help'  10 spaces, right aligned
    printf("%-10s\n", "Help"); // 'Help      '  10 spaces, left aligned

    printf(" \n");

    // Flags
    printf("%+10d\n", 123456); // '+': show sign for positive numbers, '10': width of 10
    printf("%+10d\n", -123456); // '+': show sign for negative numbers, '10': width of 10 --> displays the data with its numeric sign
    printf("%-10d\n", 123456); // '-': left align the output, '10': width of 10
    printf("%010d\n", 123456); // '0': pad with zeros, '10': width of 10
    printf("%-010d\n", 123456); // '-': left align the output

    return 0;
}