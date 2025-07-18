#include <stdio.h>

int main() {

    // initialize variables
    int signal = 1;            // start with HIGH
    int low_count = 0;         // track consecutive LOWs
    int high_time = 0;         // total HIGH time
    int step;

    // Print header
    printf("=========================================================\n");
    printf("||            PWM Monitoring with Emergency!            ||\n");
    printf("=========================================================\n\n");


    // loop for 100 time steps
    for (step = 1; step <= 100; step++) {

        // toggle signal every 10th step
        if (step % 10 == 0) {
            signal = !signal;  // toggle 1 to 0 or 0 ot 1
        }

        // print current state
        printf("Step %3d: Signal = %s\n", step, signal ? "HIGH" : "LOW");


        // track HIGH/LOW durations
        if (signal == 1) {
            high_time++;
            low_count = 0;  // reset LOW streak
        } else {
            low_count++;
        }

        // break if 5 consecutive LOWs
        if (low_count >= 5) {
            printf("Warning: 5 consecutive LOW signals detected. Terminating...\n");
            break;
        }

        // balculate duty cycle (so far)
        float duty_cycle = (high_time * 100.0) / step;

        // Goto emergency if duty cycle drops below 20%
        if (duty_cycle < 20.0) {
            goto emergency;
        }
    }

    printf("----------------------------------\n");
    printf("Monitoring completed safely.\n");
    return 0;

emergency:
    printf("----------------------------------\n");
    printf("!!!!Emergency: Duty cycle dropped below 20%% (%.2f%%). Shutdown initiated.\n", (high_time * 100.0) / step);
    return 1;
}
