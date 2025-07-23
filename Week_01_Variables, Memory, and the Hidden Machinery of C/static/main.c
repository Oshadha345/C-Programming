#include <stdio.h>
#include <stdlib.h>

#include "add.h"


int main() {

    int value;

    value = increment();
    value = increment();
    value = increment();

    printf("Final value: %d\n", value);

    return 0;

}