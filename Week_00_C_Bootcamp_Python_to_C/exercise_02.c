#include <stdio.h>


int main() {

    printf("--------------------------------\n");
    printf("| %-7s | %3s | %5s |\n","Name","Age","GPA");
    printf("| %-7s | %3d | %5.2f |\n","Alice", 20, 3.56);
    printf("| %-7s | %3d | %5.2f |\n","Bob", 22, 3.78);
    printf("--------------------------------");


    return 0;
}