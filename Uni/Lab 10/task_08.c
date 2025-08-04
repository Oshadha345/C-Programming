#include <stdio.h>

struct Sensor {
    char name[50];
    float voltage;
    float current;
};

int main() {
    struct Sensor sensors[3];
    printf("Enter data for 3 sensors (name voltage current):\n");

    for(int i = 0; i < 3; i++) {
        scanf("%s %f %f", sensors[i].name, &sensors[i].voltage, &sensors[i].current);
    }

    printf("\nSensor\tPower (W)\n");
    for(int i = 0; i < 3; i++) {
        float power = sensors[i].voltage * sensors[i].current;
        printf("%s\t%.2f\n", sensors[i].name, power);
    }

    return 0;
}
