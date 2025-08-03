#include <stdio.h>

int n =1 ;
void odd();
void even();

void odd(){

    if (n<=10){
        printf("%d ", n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if (n<=10){
        printf("%d ", n-1);
        n++;
        odd();
    }
    return; 
}

int main() {

    odd();

    printf("\n");
    return 0;
}