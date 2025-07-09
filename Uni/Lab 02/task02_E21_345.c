#include <stdio.h>

int main() {

    // declare three integr variables
    int num1, num2, num3;

    // taking inputs from user
    printf("Enter a integer: ");
    scanf("%d", &num1);
    printf("Enter a integer: ");
    scanf("%d", &num2);
    printf("Enter a integer: ");
    scanf("%d", &num3);

    // task

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal\n");
    }if (num1==0 || num2==0 || num3==0){
        printf("At least one number is zero\n");
    }if ((num1<0 && num2>=0 && num3>=0) || (num1>=0 && num2<0 && num3>=0) || (num1>=0 && num2>=0 && num3<0)){
        printf("Exactly one number is negative");
    }
    return 0;
    
}