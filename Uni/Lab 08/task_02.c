// Temperature logger
#include <stdio.h>


void print_above(float *arr, int n, float threshold) {

    printf("Temperatures above %.f:\n", threshold);

    int found =0;

    for (int i=0; i<n; i++) {
        if (*(arr+i)>threshold) {
            printf("Temperature[%d]=%.1f \n",i+1, *(arr+i));
            found=1;
        }
    }

    if (found!=1){
        printf("No temperatures above %.f\n", threshold);
    }
}

int main() {

    float temp[10];
    float threshold;

    printf("-----------------------------------------\n");

    printf("Enter the threshold temperature: ");
    //taking threshold temperature
    scanf("%f", &threshold);

    printf("-----------------------------------------\n");


    printf("\n-----------------------------------------\n");
    //taking 10 temperature samples
    for (int i=0; i<10;i++){
        printf("Enter temperature %d: ",i+1);
        scanf("%f", &temp[i]);
    }
    printf("-----------------------------------------\n");

    printf("\n");
    //calling the print_above function
    print_above(temp, 10, threshold);

    return 0;
}