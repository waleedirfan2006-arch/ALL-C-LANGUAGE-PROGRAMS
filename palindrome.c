#include <stdio.h>

int main() {
    int n, temp, sum = 0, d, rev = 0, i, prime = 1;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        d = temp % 10;
        sum += d;
        rev = rev * 10 + d;
        temp /= 10;
    }

    if (sum % 2 == 0) {  
        for (i = 2; i <= n / 2; i++)
            if (n % i == 0) { prime = 0; break; }
        printf("%d is %sprime\n", n, prime ? "" : "not ");
    } 
    else {              
        printf("%d is %sa palindrome\n", n, (n == rev) ? "" : "not ");
    }
    return 0;
}

