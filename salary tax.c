#include <stdio.h>

int main() {
    float salary, taxRate, taxAmount, salaryAfterTax;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter tax rate (in percent): ");
    scanf("%f", &taxRate);

    taxAmount = (salary * taxRate) / 100;
    salaryAfterTax = salary - taxAmount;

    printf("\nTax to pay: %.2f\n", taxAmount);
    printf("Salary after tax: %f\n", salaryAfterTax);

    return 0;
}

