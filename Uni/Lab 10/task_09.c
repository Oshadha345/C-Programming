#include <stdio.h>

#define SIZE 5

float queue[SIZE];
int front = 0, rear = -1, count = 0;

void enqueue(float val) {
    if(count == SIZE) {
        printf("Queue full! Cannot enqueue.\n");
        return;
    }
    rear++;
    queue[rear] = val;
    count++;
}

void dequeue() {
    if(count == 0) {
        printf("Queue empty! Cannot dequeue.\n");
        return;
    }
    front++;
    count--;
}

void display() {
    printf("Queue: ");
    for(int i = front; i <= rear; i++) {
        printf("%.2f ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    float val;

    do {
        printf("\n1. Enqueue  2. Dequeue  3. Display  0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter voltage: ");
                scanf("%f", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    } while(choice != 0);

    return 0;
}
