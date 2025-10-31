#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {

    for (int i = 1; i <= 30; i++) {
        if (isPrime(i)) {
            
            printf("%d\t%d\t%d\n", i, i * i, i * i * i);
        }
    }

    return 0;
}
