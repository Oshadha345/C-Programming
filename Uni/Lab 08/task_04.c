//Resistor Sorter
#include <stdio.h>

void sort(float arr[], int n){

    for (int j=1;j<n;j++){
        int swaps =0;
        for (int i=1;i<n;i++){
            float temp = 0;
            if (arr[i]<arr[i-1]){
                swaps =1;
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            }
        if (swaps == 0) {
            break;
        }
        }
    }

    return arr;
}