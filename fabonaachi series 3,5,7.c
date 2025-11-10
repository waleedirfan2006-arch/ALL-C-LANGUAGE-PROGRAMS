#include <stdio.h>

int main() {
    int a = 0, b = 1, next;
    int sum = 0;

    printf("Fibonacci series up to 1000:\n");

    while (a <= 1000) {
        printf("%d ", a);

        // Check divisibility by 3, 5, or 7
        if (a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
            sum += a;

        next = a + b;
        a = b;
        b = next;
    }

    printf("\n\nSum of Fibonacci numbers divisible by 3, 5, or 7 = %d\n", sum);
    return 0;
}
