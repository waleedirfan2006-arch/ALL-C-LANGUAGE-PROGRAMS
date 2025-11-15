#include <stdio.h>

int main() {
    int hours;
    float d1, d2, d3, d4, d5, totalDistance, averageSpeed;

    printf("Enter number of hours traveled (1 to 5): ");
    scanf("%d", &hours);

    if (hours < 1 || hours > 5) {
        printf("Error: Hours must be between 1 and 5.\n");
        return 0;
    }

    totalDistance = 0;

    if (hours >= 1) {
        printf("Enter distance covered in hour 1: ");
        scanf("%f", &d1);
        totalDistance += d1;
    }
    if (hours >= 2) {
        printf("Enter distance covered in hour 2: ");
        scanf("%f", &d2);
        totalDistance += d2;
    }
    if (hours >= 3) {
        printf("Enter distance covered in hour 3: ");
        scanf("%f", &d3);
        totalDistance += d3;
    }
    if (hours >= 4) {
        printf("Enter distance covered in hour 4: ");
        scanf("%f", &d4);
        totalDistance += d4;
    }
    if (hours == 5) {
        printf("Enter distance covered in hour 5: ");
        scanf("%f", &d5);
        totalDistance += d5;
    }

    if (totalDistance < 0) {
        printf("Error: Distance cannot be negative.\n");
        return 0;
    }

    averageSpeed = totalDistance / hours;
    printf("\nAverage speed of the car: %.2f miles/hour\n", averageSpeed);

    return 0;
}

