#include <stdio.h>

int main() {
    int a = 1, b = 1, next;
    int sum = 0;

    printf("Fibonacci series up to 1000:\n");
    printf("%d %d ", a, b);

    for (next = a + b; next <= 1000; next = a + b) {
        printf("%d ", next);

        
        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0)
            sum += next;

        a = b;
        b = next;
    }

    printf("\n\nSum of Fibonacci numbers divisible by 3, 5 or 7 = %d\n", sum);
    return 0;
}
//for loop is more efficient and cleaner for this task
