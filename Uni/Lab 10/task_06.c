#include <stdio.h>

int main() {
    float caps[3][3];
    float total = 0, max = 0;
    int row = 0, col = 0;

    printf("Enter 3x3 capacitor values in uF:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%f", &caps[i][j]);
            total += caps[i][j];
            if(caps[i][j] > max) {
                max = caps[i][j];
                row = i;
                col = j;
            }
        }
    }

    float avg = total / 9.0;
    printf("Total capacitance = %.2f uF\n", total);
    printf("Average capacitance = %.2f uF\n", avg);
    printf("Max value = %.2f uF at position (%d, %d)\n", max, row, col);
    return 0;
}
