#include <stdio.h>

int main() {

    // declare three integer variables
    int num1, num2, num3;

    // taking inputs from user
    printf("Enter a integer: ");
    scanf("%d", &num1);
    printf("Enter a integer: ");
    scanf("%d", &num2);
    printf("Enter a integer: ");
    scanf("%d", &num3);

    // task
    int num = ( ((num1 > num2) && (num1 > num3)) ? num1 :
              ((num2 > num1) && (num2 > num3)) ? num2 : num3);
    
    printf("The largest number is: %d\n", num);

    return 0;
}