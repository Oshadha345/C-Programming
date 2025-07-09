#include <stdio.h>


int main(){

    // declare an integer variable
    int n;

    // taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);


    // task
    printf("Current A : %d\n",n);
    printf("%d\n",++n);
    printf("Current A : %d\n",n);
    printf("%d\n",--n);
    printf("Current A : %d\n",n);
    printf("%d\n",n--);
    printf("Current A : %d\n",n);
    printf("%d\n",n++);
    printf("Current A : %d\n",n);
    
    return 0;
}
