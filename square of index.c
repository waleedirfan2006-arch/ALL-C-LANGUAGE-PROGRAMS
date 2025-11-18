#include <stdio.h>

int main() {
    int a[10];  // Array of 10 integers

    // Fill array with square of its index using array syntax
    for (int i = 0; i < 10; i++) {
        a[i] = i * i;  // Using array syntax
    }

    // Print array using pointer syntax
    printf("Array elements (index squared):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(a + i)); // Using pointer syntax
    }
    printf("\n");

    return 0;
}
