// capacitor charging simulation

#include <stdio.h>

int main() {

    // Constants for the simulation
    #define V_max 5.0 // maximum voltage
    #define R 0.1 // resistance in ohms
    #define V_initial 0.0 // initial voltage

    // Variables for the simulation
    float V_t_1 = V_initial; // voltage at time t-1
    int time_steps = 20; // number of time steps


    // function to calculate the change in voltage
    float delta_V(float V_t_1){

        return (V_max - V_t_1) * R;
    }

    // function to calculate the voltage at time t
    float V_t(float delta_V, float V_t_1) {
        return V_t_1 + delta_V;
    }

    // topic and header area
    printf("=========================================================\n");
    printf("||            Capacitor Charging Simulation!            ||\n");
    printf("=========================================================\n\n");


   for (int step =1 ; step <= time_steps; step++) {

        // calculate the change in voltage
        float change_in_voltage = delta_V(V_t_1);

        // calculate the voltage at time t
        float V_t_current = V_t(change_in_voltage, V_t_1);

        // update voltage for next step
        V_t_1 = V_t_current;


        // break if the voltage reaches or exceeds V_max or if the step exceeds time_steps
        if (V_t_current >= V_max ) {
            break;
        }

        // skip printing if change in valotge is less than 0.05
        if (change_in_voltage < 0.05){
             // update voltage for next step
            continue; // skip printing this step
        } 

        // print the current step and voltage
        printf("Step %2d: Voltage = %.2f V\n", step, V_t_current);
    }

    printf("=========================================================\n");
    printf("Simulation completed successfully.\n");
    return 0;

}  

