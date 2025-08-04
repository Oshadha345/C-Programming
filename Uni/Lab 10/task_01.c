#include <stdio.h>
#include <math.h>

float compute_rms(float arr[], int n) {
    float sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += arr[i] * arr[i];
    }
    return sqrt(sum / n);
}

int main() {
    float voltages[100];
    int n;
    printf("Enter number of voltage samples: ");
    scanf("%d", &n);

    printf("Enter %d voltage values:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &voltages[i]);
    }

    float rms = compute_rms(voltages, n);
    printf("RMS Voltage = %.2f V\n", rms);
    return 0;
}
