// 4. Write a program that finds the second highest number in a float type array of 20 elements
// using pointer.
#include <stdio.h>

int main() {
    float arr[20];
    float *ptr = arr;   // Pointer to the array
    float max1, max2;

    printf("Enter 20 float numbers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%f", ptr + i);   // Using pointer to input values
    }

    // Initialize the highest and second highest
    if (*ptr > *(ptr + 1)) {
        max1 = *ptr;
        max2 = *(ptr + 1);
    } else {
        max1 = *(ptr + 1);
        max2 = *ptr;
    }

    // Loop to find the second highest
    for (int i = 2; i < 20; i++) {
        if (*(ptr + i) > max1) {
            max2 = max1;          // Update second highest
            max1 = *(ptr + i);    // Update highest
        } else if (*(ptr + i) > max2 && *(ptr + i) != max1) {
            max2 = *(ptr + i);    // Update second highest
        }
    }

    printf("The second highest number is: %.2f\n", max2);

    return 0;
}
