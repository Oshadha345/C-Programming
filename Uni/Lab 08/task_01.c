// RMS voltage calculator

#include <stdio.h>
#include <math.h>

float compute_rms(float arr[], int n){
    float sqaure_sum = 0.0;

    //taking the summation of square sum
    for (int i=0; i<n;i++){
        sqaure_sum += arr[i] * arr[i];
    }

    return sqrt(sqaure_sum / n);
}

int main() {

    int n;

    //taking number of inputs
    printf("Enter number of sample: ");
    scanf("%d",&n);


    //declaring v array
    float v[n];

    //taking voltage samples
    for (int i=0;i<n;i++){
        printf("Enter voltage sample %d: ",i+1);
        scanf("%f",&v[i]);
    }

    //calculating RMS voltage
    float rms = compute_rms(v, n);

    //printing RMS voltage
    printf("RMS voltage = %.3f\n",rms);

    return 0;

}