#include <stdio.h>

#define greater(X,Y) if (X>Y) \
    printf("%d is greater than %d\n",X,Y); \
    else \
    printf("%d is lesser than %d\n",X,Y);


#define sum_or_product(X,Y,Z) ((Z=="sum") ? (X+Y): (X*Y))

int main(){
    greater(5,10);
    printf("Date: %s\n",__DATE__);
    printf("Time: %s\n",__TIME__);
    int what = sum_or_product(5,10,"product");
    printf("%d\n", what);
    return 0;
}