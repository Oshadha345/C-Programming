// signal threshold detector

#include <stdio.h>


int main() {

    //initialize variables
    int sensor_value; 
    int count = 0;

    // infinite loop to continuously check sensor values
    while(1) {

        // get a  sensor value
        printf("Enter sensor value (0-100, -1 to exit): ");
        scanf("%d",&sensor_value);

        if (sensor_value == -1) {
            break; // exit the loop if user inputs -1
        }
        else if (sensor_value < 10){
            continue; // skip the loop if sensor value is below 10
        }
        else if (sensor_value >= 95){
            break; //exit the loop if sensor value is 95 or above
        }
        else{
            count++; // increment count for sensor values between 10 and 94
        }
    }

    // print the count of sensor values between 10 and 94
    printf("Count of sensor values between 10 and 94: %d\n", count);

}