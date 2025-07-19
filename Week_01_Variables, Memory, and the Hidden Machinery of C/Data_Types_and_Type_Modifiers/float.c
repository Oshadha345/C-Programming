#include <stdio.h>

int main() {
    
    printf("=================================================\n");
    printf("float data type\n");

    printf("\nSize of float        :   %zu bytes\n", sizeof(float));


    printf("=================================================\n");
    printf("short data type\n");
    printf("Size of short        :   %zu bytes\n", sizeof(short));


    printf("=================================================\n");
    printf("double data type\n");
    printf("Size of double       :   %zu bytes\n", sizeof(double));
    printf("Size of long double  :   %zu bytes\n", sizeof(long double));

    printf("=================================================\n");
    printf("void data type\n");
    printf("Size of void         :   %zu bytes\n", sizeof(void*)); // Size of a pointer to void


    printf("=================================================\n");
    printf("other data types\n");
    printf("Size of wchar_t      :   %zu bytes\n", sizeof(wchar_t)); // Wide character type
    printf("Size of size_t       :   %zu bytes\n", sizeof(size_t)); // Unsigned integer type for sizes
    printf("Size of ptrdiff_t    :   %zu bytes\n", sizeof(ptrdiff_t)); // Signed integer type for pointer differences

    return 0;
}

float.exe