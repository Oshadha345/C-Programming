#include <stdio.h>

int main() {
    int a = 10;
    int b;
    
    printf("Enter a Value: ");
    scanf("%d",&b);

    char *str = (a>=b) ? "Your value is lesssss,boooo!!!!" : "Hail the king!, You're greater!!!";
    printf("%s\n", str);

    return 0;
}