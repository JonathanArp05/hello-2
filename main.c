#include <stdio.h>

int main(void) {
    int motors;                     // number of motors (integer)
    double packageWeight;           // total package weight in kg (floating‑point)
    const double capacityPerMotor = 5.6;   // kg each motor can handle

    // Prompt for the number of motors
    printf("How many motors are carrying the packages?\n");
    if (scanf("%d", &motors) != 1 || motors <= 0) {
        printf("Invalid number of motors.\n");
        return 1;
    }

    // Prompt for the total weight of the packages
    printf("How many kg of packages do we expect?\n");
    if (scanf("%lf", &packageWeight) != 1 || packageWeight < 0) {
        printf("Invalid package weight.\n");
        return 1;
    }

    // Compute load per motor
    double loadPerMotor = packageWeight / motors;

    // Decision & output
    if (loadPerMotor <= capacityPerMotor) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }

    return 0;
}