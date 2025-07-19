 #include <stdio.h>

 int main() {
    // int 
    printf("int data type\n");

    int signed_int = -30000;
    unsigned int unsigned_int = 60000;

    printf("Signed int: %d\n", signed_int);
    printf("Unsigned int: %u\n", unsigned_int);

    printf("\nSize of signed int: %zu bytes\n", sizeof(signed_int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned_int));

    printf("\nSize of int data type's-->\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));

    printf("\n---------------------------------------\n");

    // short int
    printf("short int data type\n");

    short int signed_short = -100;
    unsigned short int unsigned_short = 250;

    printf("Signed short int: %hd\n", signed_short);
    printf("Unsigned short int: %hu\n", unsigned_short);

    printf("\nSize of signed short int: %zu bytes\n", sizeof(signed_short));
    printf("Size of unsigned short int: %zu bytes\n", sizeof(unsigned_short));

    printf("\nSize of short int data type's-->\n");
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned short int: %zu bytes\n", sizeof(unsigned short int));

    printf("\n---------------------------------------\n");

    // long int
    printf("long int data type\n");

    long int signed_long = -2000000000;
    unsigned long int unsigned_long = 4000000000;

    printf("Signed long int: %ld\n", signed_long);
    printf("Unsigned long int: %lu\n", unsigned_long);

    printf("\nSize of signed long int: %zu bytes\n", sizeof(signed_long));
    printf("Size of unsigned long int: %zu bytes\n", sizeof(unsigned_long));

    printf("\nSize of long int data type's-->\n");
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of unsigned long int: %zu bytes\n", sizeof(unsigned long int));

    return 0;

 }
 
 
 
 
 