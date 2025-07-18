// Voltage matrix analysis

#include <stdio.h>

//function to print voltage matrix
int matrix_print(int matrix[3][3]) {
    printf("Voltage matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//function to take input for voltage matrix
int take_matrix(int v_matrix[3][3]) {
    printf("Enter Voltage matrix (3x3): \n");

    for (int i =0; i<3; i++) {
        for (int j =0; j<3; j++) {
            printf("V%d%d: ", i+1, j+1);
            scanf("%d", &v_matrix[i][j]);
        }
    }
}


int main() {

    //initialize variables
    int V_matrix[3][3];
    int safe_count=0;
    int unsafe_count=0;
    int i_,j_,V;

    i_ =0, j_=0; // loop counters
    V = 0; // voltage value


    // input voltage matrix
    take_matrix(V_matrix);

    // print the voltage matrix
    matrix_print(V_matrix);

    // analyze the voltage matrix
    for (int i=0 ; i < 3; i++) {
        for (int j=0 ; j < 3; j++) {

            V = V_matrix[i][j];

            // analyse voltage values 

            if (V == 0) {
                continue; // skip if voltage is 0
            } 

            if (V < 0 || V > 250) {
                goto warning; 
            }
        
            if (V<90 || V>240) {
                unsafe_count++; // increment unsafe count

                if (unsafe_count > 3) {
                    printf("Warning: More than 3 unsafe voltage values detected.\n");
                    break; // exit if more than 3 unsafe values
                }
            } 
            else {
                safe_count++; // increment safe count
        }
        j_++; // increment column index
            }

        if (unsafe_count > 3) {
            break; // exit if more than 3 unsafe values
        }
        
        i_++; // increment row index
        }

    // print the counts
    printf("Unsafe count: %d\n", unsafe_count);
    printf("Safe count: %d\n", safe_count);
    
    return 0;

// jumping out of the loop at the first moment it detected s V< 0 or V> 250
warning:
    printf("Warning: Unsafe voltage detected at V%d%d = %d\n", i_+1, j_+1, V);
    return 1; // exit with error code

}


