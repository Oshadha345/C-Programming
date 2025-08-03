#include <stdio.h>
#define MAX 50

int main() {

    //take size of the matrix a 
    int a[MAX][MAX];
    int arows,acolumns;
    printf("Enter the rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    //take size of the matrix b
    int b[MAX][MAX];
    int brows,bcolumns;
    printf("\nEnter the rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolumns);


    //check if the matrices can be multiplied
    if (acolumns != brows) {
        printf("Matrix multiplication not possible with these dimensions.\n");
        return 1;
    }

    //take input for matrix a
    printf("\nEnter the elements of matrix a:\n");
    for (int i = 0; i < arows; i++) {
        for (int j = 0; j < acolumns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    //take input for matrix b
    printf("Enter the elements of matrix b:\n");
    for (int i = 0; i < brows; i++) {
        for (int j = 0; j < bcolumns; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n");


    int result[MAX][MAX] = {0};

    //matrix multiplication
    for (int i = 0; i < arows; i++) {
        for (int j = 0; j < bcolumns; j++) {
            for (int k = 0 ; k < acolumns ; k++) {
                result[i][j] += a[i][k] * b[k][j];
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