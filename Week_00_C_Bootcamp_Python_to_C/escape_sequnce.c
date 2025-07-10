#include <stdio.h>

int main() {

    printf(" \n");
    printf("--------------------------------------- \n");
    printf("\t Escape Sequences in C\n");
    printf("--------------------------------------- \n");
    printf(" \n");

    // Newline
    printf("1. Newline\n");
    printf("Hello,\nWorld!\n");

    printf(" \n");

    // Tab
    printf("2. Tab\n");
    printf("Hello, World!\n");
    printf("Hello,\tWorld!\n");

    printf(" \n");

    // Backslash
    printf("3. Backslash\n");
    printf("This is a backslash: \\\n");

    printf(" \n");

    // Single Quote
    printf("4. Single Quote\n");
    printf("This is a single quote: \' \n");

    printf(" \n");

    // Double Quote
    printf("5. Double Quote\n");
    printf("This is a double quote: \" \n");

    printf(" \n");

    // Carriage Return
    printf("6. Carriage Return\n");
    printf("Hello, World!\rGoodbye!\n"); // this will overwrite the "Hello, World!" with "Goodbye!", doesnt erase the whole text, just overwrites it

    printf(" \n");

    // Form Feed
    printf("7. Form Feed\n");
    printf("Hello, World!\fGoodbye!\n"); // this will move the cursor to the next page, but in most terminals it may not have a visible effect

    printf(" \n");

    // Backspace
    printf("8. Backspace\n");
    printf("Hello, World!\b\bGoodbye!\n"); // this will remove the last 2 characters of "Hello, World!" and replace them with "Goodbye!"

    printf(" \n");
    
    return 0;
}