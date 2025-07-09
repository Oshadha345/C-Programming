#include <stdio.h>

//arithmetic operations
int main(){
    int num1,num2 ;

    printf("Enter a number(intger): ");
    scanf("%d", &num1);
    printf("Enter a number(intger): ");
    scanf("%d", &num2);

    printf("%d \n", num1+num2);
    printf("%d \n", num1-num2);
    printf("%d \n", num1*num2);
    printf("%d \n", num1/num2);
    printf("%d \n", num1%num2);
    printf(num1>=num2 ? "First number is greater than or equal to second number" : "First number is less than second number");

    return 0;
}



