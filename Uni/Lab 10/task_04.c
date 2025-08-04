#include <stdio.h>

void sort(float arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int count_in_range(float arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 950 && arr[i] <= 1050) {
            count++;
        }
    }
    return count;
}

int main() {
    float resistors[10];
    printf("Enter 10 resistor values in ohms:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &resistors[i]);
    }

    sort(resistors, 10);

    printf("Sorted resistor values:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", resistors[i]);
    }
    printf("\n");

    printf("Resistors in 950–1050 ohm range: %d\n", count_in_range(resistors, 10));
    return 0;
}
