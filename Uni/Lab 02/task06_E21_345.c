#include <stdio.h>

int main() {

    // declare variable
    int mark;

    // taking user input
    printf("Enter the mark (0-100): ");
    scanf("%d", &mark);

    // checking if the mark is within the valid range
    if (mark < 0 || mark > 100) {
        printf("Invalid mark. Please enter a value between 0 and 100.\n");
        return 1; // indicate an error
    }

    // task
    printf("The grade is: ");
    if (mark >= 75) {
        printf("A\n");
    } else if (mark >= 65) {
        printf("B\n");
    } else if (mark >= 55) {
        printf("C\n");
    } else if (mark >= 35) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}