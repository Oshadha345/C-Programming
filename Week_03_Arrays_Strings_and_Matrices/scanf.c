#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "Python";
    char str2[10] = "Hi";

    strncpy(str1, str2, 2);  // Copy first 5 characters from str2 to str1
    printf("str1 after strncpy: %s\n", str1);  // Output: Hello
    return 0;
} 