#include <stdio.h>

int main() {
    float principle, rate, time, interest;
    printf("Enter Principle amount (100 - 1000000): ");
    scanf("%f", &principle);

    if (principle < 100 || principle > 1000000) {
        printf("Error: Principle must be between 100 and 1,000,000 Rs.\n");
        return 0;
    }

    printf("Enter Rate of interest (5 - 10): ");
    scanf("%f", &rate);

    if (rate < 5 || rate > 10) {
        printf("Error: Rate must be between 5%% and 10%%.\n");
        return 0;
    }

    printf("Enter Time period in years (1 - 10): ");
    scanf("%f", &time);

    if (time < 1 || time > 10) {
        printf("Error: Time must be between 1 and 10 years.\n");
        return 0;
    }
    interest = (principle * rate * time) / 100;


    printf("\nSimple Interest = %.2f Rs.\n", interest);
    printf("Total Amount = %.2f Rs.\n", principle + interest);

    return 0;
}

