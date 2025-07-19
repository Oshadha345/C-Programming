#include <stdio.h>


int main(){

    int a = 10;
    int b = 10;

    //post-increment
    int c = a++;

    // pre-increment
    int d = ++b;
    
    printf("post-increment: %d & a=%d\n", c,a);
    printf("pre-increment: %d & b=%d\n", d,b);

    return 0;

}