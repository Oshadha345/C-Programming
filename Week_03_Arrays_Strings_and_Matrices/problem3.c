#include <stdio.h>

#define N 5


int main() {

    int arr[N][N];
    int row[N] = {0};
    int col[N] = {0};

    for (int i = 0; i<N;i++){
        printf("Enter row %d:\n",i+1);
        for (int j=0; j<N;j++){
            scanf("%d",&arr[i][j]);
            row[i] += arr[i][j];
            col[j] += arr[i][j];
        }
        printf("\n");
    }

    printf("Row total:       ");
    for (int i = 0; i<N;i++){
        printf("%d ", row[i]);
    }

    printf("\nColumn total:    ");
    for (int i = 0; i<N;i++){
        printf("%d ", col[i]);
    }

    return 0;
}

    