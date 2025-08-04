#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int val) {
    if(top == SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = val;
}

void pop() {
    if(top == -1) {
        printf("Stack underflow!\n");
        return;
    }
    top--;
}

void display() {
    printf("Stack: ");
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, val;

    do {
        printf("\n1. Push  2. Pop  3. Display  0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter signal value (0-1023): ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    } while(choice != 0);

    return 0;
}
