#include <stdio.h>

int main() {
    // Demonstrating how to access individual bytes of an integer
    // This is useful for understanding endianness and memory layout.
    
    
    
    // Example integer
    int a = 0x12345678;
    printf("Integer value: %d (0x%x)\n", a, a);
    
    // Accessing each byte
    printf("Accessing individual bytes of an integer:\n");
    
    char *p = (char*)&a;
    for (int i = 0; i < 4; i++) {
        printf("Byte %d = 0x%x\n", i, *(p+i));
    }

}