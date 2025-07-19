#include <stdio.h>

int main() {
    // A signed char cannot hold 200, so it will "overflow" or "wrap around".
    char signed_c = 200; 
    char A = 'A';
    
    // An unsigned char can comfortably hold 200.
    unsigned char unsigned_c = 200;
    unsigned char B = 'B';

    printf("--- Integer Values ---\n");
    // We use %d to see the integer value the compiler interprets.
    printf("Signed char value:   %d\n", signed_c);
    printf("Unsigned char value: %u\n", unsigned_c);

    printf("\n");
    printf("Signed char as int:   %c\n", A);
    printf("Unsigned char as int: %c\n", B);
    printf("Signed char as int:   %d\n", (int)A);
    printf("Unsigned char as int: %u\n", (unsigned int)B);
    printf("Signed char as ASCII: %d\n", A); // ASCII value of 'A' is 65
    printf("Unsigned char as ASCII: %d\n", B); // ASCII value of 'B' is 66




    printf("\n--- Character Representation ---\n");
    // %c is used to print the character representation.
    printf("Signed char as char:   %c\n", signed_c);
    printf("Unsigned char as char: %c\n", unsigned_c);

    printf("\n--- Hexadecimal Representation ---\n");
    // %x is used to print the hexadecimal representation.
    printf("Signed char in hex:   %x\n", signed_c);
    printf("Unsigned char in hex: %x\n", unsigned_c);

    printf("\n--- Memory Size ---\n");
    // %zu is used to print the size of the type in bytes.
    printf("Size of signed char:   %zu byte\n", sizeof(signed_c));
    printf("Size of unsigned char: %zu byte\n", sizeof(unsigned_c));

    printf("\n--- Memory Address ---\n");
    // %p is used to print the memory address.
    printf("Address of signed char:   %p\n", (void*)&signed_c);
    printf("Address of unsigned char: %p\n", (void*)&unsigned_c);

    printf("\n--- Type Sizes ---\n");
    // %zu is used to print the size of the type in bytes.
    printf("Size of char         :   %zu byte\n", sizeof(char));
    printf("Size of signed char  :   %zu byte\n", sizeof(signed char));
    printf("Size of unsigned char:   %zu byte\n", sizeof(unsigned char));
   


    return 0;
}