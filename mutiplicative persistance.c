#include <stdio.h>

int main() {
    long n, temp, product;
    int digit, persistence = 0;

    printf("Enter a positive integer: ");
    scanf("%ld", &n);

    // Repeat until number becomes a single digit
    while (n >= 10) {
        product = 1;       // Reset product for each step
        temp = n;          // Copy n to temp to extract digits

        // Multiply all digits of temp
        while (temp > 0) {
            digit = temp % 10;    // Get last digit
            product *= digit;     // Multiply with product
            temp /= 10;           // Remove last digit
        }

        n = product;              // Update n to new product
        persistence++;            // Count one step
    }

    printf("Multiplicative Persistence: %d\n", persistence);
    printf("Multiplicative Digital Root: %ld\n", n);

    return 0;
}
