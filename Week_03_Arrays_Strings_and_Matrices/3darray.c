#include <stdio.h>

int main() {
 
    int arr[2][3][2] = {
        {{2, 3}, {4, 5}, {6, 7}},
        {{12, 13}, {14, 15}, {16, 17}}
    };

       for (int i = 0; i < 2; i++) {
        printf("Array %d:\n", i + 1);

            //printing each layer of 3D array
           for (int j = 0; j < 3; j++) {
               for (int k = 0; k < 2; k++) {
                   printf("%d ", arr[i][j][k]);
               }
               printf("\n");
           }

        printf("\n\n");
       }

       return 0;    

}