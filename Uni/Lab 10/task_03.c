#include <stdio.h>
#include <string.h>

void extract_label(char *str) {
    char label[100];
    int i = 0;
    while(str[i] != '_' && str[i] != '\0') {
        label[i] = str[i];
        i++;
    }
    label[i] = '\0';
    printf("Label: %s\n", label);
}

int main() {
    char signals[3][100];

    printf("Enter 3 signal strings:\n");
    for(int i = 0; i < 3; i++) {
        scanf("%s", signals[i]);
        extract_label(signals[i]);
    }
    return 0;
}
