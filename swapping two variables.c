#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter swapping:\n");
    printf("First integer = %d\n", a);
    printf("Second integer = %d\n", b);

    return 0;
}

