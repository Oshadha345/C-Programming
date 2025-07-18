// PWM monitoring with emergency handling
// PWM values generated randomly and every 10th step toggles the signal
// If 5 consecutive low PWM values are detected, an emergency is triggered
// If the duty cycle drops below 20%, an emergency is triggered

#include <stdio.h>
#include <stdlib.h>

int main() {

    // topic and header area
    printf("=========================================================\n");
    printf("||            PWM Monitoring with Emergency!            ||\n");
    printf("=========================================================\n\n");

    // initialize variables

    #define time_steps 100 // number of time steps for PWM monitoring

    int pwm_value =0 ;
    int pwm_array[time_steps]; // array to store PWM values

    int low_count = 0; // count of low PWM values
    int high_time = 0; // time of high PWM values

    int toggle_step = 10; // step to toggle signal
    int step; // loop variable
    float duty_cycle; // variable to store duty cycle
    
    for (int step = 1;step <= time_steps; step++) {


        // generate randmo value either 0 or 1
        pwm_value = rand() % 2;

        // store PWM value in the array
        pwm_array[step-1] = pwm_value;

        // toggle at every 10th step
        if (step % toggle_step == 0) {
            pwm_value = 1 - pwm_value;
        }

        //check for 5 consecutive low PWM values
        if (pwm_value == 0) {
            low_count++;
            if (low_count >=5) {
                printf("Emergency! 5 consecutive low PWM values detected.\n");
                break; // exit the loop on emergency
            }
        }

        else {
            high_time +=1; // increment high time
            low_count = 0; // reset low count
        }

        duty_cycle = (float)high_time / step * 100; // calculate duty cycle

        // goto emergency if duty cycle drops below 20%
        if (duty_cycle < 20.0) {
            goto emergency;
        }

        // print the current step, signal and duty cycle
        printf("Step %3d: Signla = %s, Duty Cycle = %.2f%%\n",step, pwm_value ? "HIGH": "LOW", duty_cycle);
    }
    

    printf("----------------------------------\n");
    printf("Monitoring completed safely.\n");
    return 0; // normal exit


    emergency:
        printf("!!!!Emergency: Duty cycle dropped below 20%% (%.2f%%). Shutdown initiated.\n", duty_cycle);
        return 1; // abnormal exit
    }



