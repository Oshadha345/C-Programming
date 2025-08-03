#include <stdio.h>

int main() {

    int arr_a[3][3] = {
        {1,2,3},
        {1,2,1},
        {3,1,2}
    };

    int n_a = sizeof(arr_a) / sizeof(arr_a[0]);

    int arr_b[3][3] = {
        {1,2,3},
        {1,2,1},
        {3,1,2}
    };

    int n_b = sizeof(arr_b) / sizeof(arr_b[0]);

    int result[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0 ; k < 3; k++) {
                result[i][j] += arr_a[i][k] * arr_b[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;

}