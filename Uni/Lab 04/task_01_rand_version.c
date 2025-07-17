// signal threshold detector

#include <stdio.h>
#include <stdlib.h> // for rand()
#include <time.h>

int main() {

    // this use to generate random numbers based on time, unless it repeats the same sequence
    srand(time(0));

    //initialize variables
    int sensor_value; 
    int count = 0;

    // infinite loop to continuously check sensor values
    while(1) {

        // generate a random sensor value
        sensor_value = rand() % 101; // generates a random number between 0 and 100 to simulate sensor value
        printf("Sensor value: %d\n", sensor_value); // print the sensor value

        if (sensor_value < 10){
            continue; // skip the loop if sensor value is below 10
        }else if (sensor_value >= 95){
            break; //exit the loop if sensor value is 95 or above
        }else{
            count++; // increment count for sensor values between 10 and 94
        }
    }

    // print the count of sensor values between 10 and 94
    printf("Count of sensor values between 10 and 94: %d\n", count);

}