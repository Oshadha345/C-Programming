#include <stdio.h>

void led_countdown(int n) {
    if(n == 0) {
        printf("All LEDs are OFF. System shutdown.\n");
        return;
    }

    printf("Turning OFF LED %d\n", n);
    for(int i = 0; i < 10000000; i++); // Dummy delay
    led_countdown(n - 1);
}

int main() {
    int n;
    printf("Enter number of LEDs (1-10): ");
    scanf("%d", &n);

    if(n >= 1 && n <= 10)
        led_countdown(n);
    else
        printf("Invalid number.\n");

    return 0;
}
