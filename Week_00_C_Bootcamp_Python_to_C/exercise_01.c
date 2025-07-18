#include <stdio.h>

int main() {

    int num = 42;
    float pi = 3.14159;
    char letter = 'A';
    char *word = "C-Lang";

    printf("int           : %d\n", num);
    printf("float         : %.3f\n", pi);
    printf("char          : %c\n", letter);
    printf("string        : %s\n", word);
    printf("hex           : %x\n", num);
    printf("address of num: %p\n", (void*)&num);

}