#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("int: %zu bytes, max = %d\n", sizeof(int), INT_MAX);
    printf("float: %zu bytes, max = %e\n", sizeof(float), FLT_MAX);
    printf("double: %zu bytes, max = %e\n", sizeof(double), DBL_MAX);
    printf("char: %zu bytes, max = %d\n", sizeof(char), CHAR_MAX);
    return 0;
}
