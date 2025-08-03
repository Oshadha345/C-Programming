#include <stdio.h>

int main() {
    char str[] = "Hello";

    // here when we give the pointer to any of the character in the string
    // it will print the string from that character to the end of the string until
    // it finds the null character
    printf("%s\n", str);  // prints "Hello"
    printf("%s\n", &str[0] );
    printf("%s\n", &str[1] );  // prints "ello"
    printf("%s\n", &str[2] );  // prints "llo"
    printf("%s\n", &str[3] );  // prints "lo"
    printf("%s\n", &str[4] );  // prints "o"
    printf("%s\n", &str[5] );  // prints "" (empty string)
    printf("%c\n", "Hello"[0]);
    printf("%c\n", "Hello"[1]);  // prints 'e'
    printf("%c\n", "Hello"[2]);  // prints 'l'
    printf("%c\n", "Hello"[3]);  // prints 'l'
    printf("%c\n", "Hello"[4]);  // prints 'o'
    printf("%c\n", "Hello"[5]);  // prints '' (empty character)
     

    return 0;
}