//Switching Delay Analysis

#include <stdio.h>

// function to calculate delay based on time
float delay(float time) {
        return 0.1 * time; 
    }

int main() {

    // topic and header area
    printf("=========================================================\n");
    printf("||            Switching Delay Analysis!                 ||\n");
    printf("=========================================================\n\n");

    // initialize variables
    float Delay = 0.0;
    int time;


    // loop from t=1 to t=50
    for (time=1; time<=50; time++) {

        //calculate delay
        Delay = delay(time);

        //if delya is <1.0s continue
        if (Delay < 1.0) {
            continue; // skip printing this step
        }

        // break if delay exceeds 3 seconds
        if (Delay > 3.0) {
            printf("Warning: Delay exceeds 3 seconds at time %d. Terminating...\n", time);
            break;
        }

        // jump to warning ig t is multiple of 13
        if (time % 13 ==0) {
            goto warning;
        }

        // print the current time and delay
        printf("Time: %d | Delay: %3.2f seconds \n", time, Delay);

    }

    printf("----------------------------------\n");
    printf("Monitoring completed safely.\n");
    return 0;

    warning:
        printf("Warning: Time is multiple of  13  at time %d. Terminating...\n", time);
        return 1;
}