#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *b = malloc(sizeof(int));
    *b = 20;

    char name[] = "Gamma";

    printf("a: %d (%p)\n", a, (void*)&a);
    printf("*b: %d (%p)\n", *b, (void*)b);
    printf("name: %s (%p)\n", name, (void*)name);

    free(b);
}


/*
[Stack]
- a
- name[]
- b (pointer)

[Heap]
- *b (holds value 20)

*/