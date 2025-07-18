// sensor grid fault locator

#include <stdio.h>

// function to print the sensor grid
int grid_print(int grid[4][4]) {
    printf("Sensor grid:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// function to take input for sensor grid status
int grid_input(int grid[4][4]) {
    printf("Enter the sensor grid status (4x4): \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("S%d%d: ", i + 1, j + 1);
            scanf("%d", &grid[i][j]);
        }
    }
}


int main() {

    //initialize variables

    //sensor grid matrix initialization
    int sensor_matrix[4][4];

    // fault detection variables
    int sensor_fault_row = 0; // count of sensor faults in a row
    int two_fault= 0; // flag for two faults in a row
    int total_fault = 0; // total number of faults detected

    // OK status count
    int OK_status = 0; // count of sensors with OK status

    // Unused sensor count
    int Unused_count = 0; // count of unused sensors

    // flags for sensor status
    int Fault = 0; // flag for fault detection
    int OK = 1; // flag for OK status
    int Unused = -1; // flag for unused sensors
    

    // input sensor grid status
    grid_input(sensor_matrix);

    printf("\n-------****------\n\n");

    // print the sensor grid
    grid_print(sensor_matrix);
    printf("\n-------****------\n");

    // analyze the sensor grid
    for (int i = 0; i < 4; i++) {
        sensor_fault_row = 0; // reset fault count for each row
        int unused_row = 0; // reset unused sensor count for each row

        for (int j = 0; j < 4; j++) {

            int status = sensor_matrix[i][j];

            // check if the sesor is unused 
            if (status == Unused){
                Unused_count++; // increment unused sensor count
                unused_row++; // increment unused sensor count for the row
                
                if (unused_row == 4) {
                    goto skip_row;
                }
                continue; // skip unused sensors
            }

            // check for sensor fault
            if (status == Fault){
                sensor_fault_row++; 
                if (sensor_fault_row >=2){
                    two_fault++; // increment two_fault if more than one fault detected in the same row
                    break; // exit if more than 2 faults detected in the same row
                }
            }

            // check for OK status
            if (status == OK) {
                OK_status++; // increment OK status count
            } 
        }
        

        total_fault += sensor_fault_row; // total faults detected

        if (total_fault >=5) {
            printf("Warning: More than 5 faults detected in the sensor grid.\n");
            break; // exit if more than 5 faults detected
        }

        skip_row: ; // skip to the next row if all sensors are unused
    }

    printf("\n-------**Analysis Results**------\n");
    // print the OK count
    printf("\n[1.] OK status count           : %d\n", OK_status);

    // print the total faults detected
    printf("\n[2.] Total faults detected     : %d\n", total_fault);

    // print the total rows with two faults
    printf("\n[3.] Total rows with two faults: %d\n", two_fault);

    // print the unused sensors count
    printf("\n[4.] Unused sensors count       : %d\n", Unused_count);

    return 0; // exit successfully

}