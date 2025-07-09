#include <stdio.h>

int main() {

    //declare variables
    float num1, num2;
    int Num1, Num2;

    //taking inputs from user
    printf("Enter a number(float): ");
    scanf("%f", &num1);
    printf("Enter a number(float): ");
    scanf("%f", &num2);

    //task
    if ((num1!=0) && (num2!=0)) {
        printf("Both numbers are non-zero.\n");
    }if ( num1 > 10.5 || num2 > 10.5) {
        printf("At least one number is greater than 10.5.\n");
    }
    Num1 = (int)num1;
    Num2 = (int)num2;

    if ( num1+num2 != Num1+Num2) {
        printf("The sum of the numbers is not equal to the sum of their integer parts.\n");
    } else {
        printf("The sum of the numbers is equal to the sum of their integer parts.\n");
    }
}