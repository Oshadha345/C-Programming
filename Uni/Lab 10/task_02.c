#include <stdio.h>
#include <math.h>

void print_above(float *arr, int n, float threshold){
    for (int i=0; i<n; i++){
        if (*(arr+i) > threshold){
            printf("Temperature %.2f C is above threshold\n", *(arr+i));
        }
    }
}

int main(){
    float temps[10];
    for (int i=0; i<10; i++){
        printf("Temperature %d: ", i+1);
        scanf("%f", temps+i);
    }
    float threshold;
    printf("Enter threshold: ");
    scanf("%f", &threshold);
    print_above(temps, 10, threshold);
    return 0;
}
