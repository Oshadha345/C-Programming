#include <stdio.h>

int main() {
    int num=1;

    loop: while (num <=10) {
        if (num==5){
            num++;
            goto loop;
        }
        
        printf("%d\n", num);
        num++;
    }

    return 0;
}