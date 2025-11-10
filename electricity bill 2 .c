#include <stdio.h>

int main() {
    int units;
    float bill,tax,total;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    tax=bill*0.1;
total=tax +bill;
    printf("Total Bill = Rs. %.2f\n and tax is %f", bill,tax);
    printf("\n THE TOTAL BILL PLUS TAX IS  %f ",total);
    return 0;
}
