#include <stdio.h>

int main() {
    int N;
    int seen[10]= {0};
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    while (N>0) {
        int digit = N % 10;
        N = N / 10;
        if (seen[digit]==1){
            break;
        }else{
            seen[digit]++;
        }
    }

    // Check if all digits are unique
    if (N==0){
        printf("All digits are unique.\n");
    }else{
        printf("Digits are not unique.\n");
    }

return 0;
    }
