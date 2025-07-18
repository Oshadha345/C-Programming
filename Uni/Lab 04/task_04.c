// LED Matrix Pattern Generator

#include <stdio.h>

int main() {
    // topic and header area
    printf("=========================================================\n");
    printf("||            LED Matrix Pattern Generator!             ||\n");
    printf("=========================================================\n\n");

    //initilize variables
    int number_LED_ON;
    char Pattern[5][5] = {' '}; // 5x5 matrix for LED pattern
    char ON = '1'; // character to represent ON LED
    char OFF = '0'; // character to represent OFF LED
    int ON_count = 0; // count of ON LEDs

    // matrix print function
    void print_matrix(char matrix[5][5]) {
        printf("LED Matrix Pattern:\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    // input number of LEDs to be turned ON
    printf("Enter the number of LEDs to be turned ON (0-23): ");
    scanf("%d",&number_LED_ON);

    // creating the pattern
    for (int i=0 ; i<5; i++){
        for (int j=0 ; j<5; j++){

            // skip the middle led in even rows
            if ((i+1)%2 == 0 && j==2){
                Pattern[i][j] = OFF; // middle LED in even rows is OFF
                continue;
            }
            else {
                if (ON_count < number_LED_ON) {
                    Pattern[i][j] = ON; // LED ON
                    ON_count++;
                } 
                else {
                    break; // exit if the count of ON LEDs reaches the input number
                }
            }     
        }
        if (ON_count >= number_LED_ON) {
            break; // exit if the count of ON LEDs reaches the input number
        }
    }
    
    // print the pattern
    print_matrix(Pattern);

}