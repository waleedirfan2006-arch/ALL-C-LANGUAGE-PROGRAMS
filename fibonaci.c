#include <stdio.h>

int main() {
    int marks;
    int pass = 0, fail = 0;
    int failCount = 0;

    printf("Enter marks (-1 to stop):\n");

    while (1) {
        scanf("%d", &marks);

        if (marks == -1)
            break;  

        if (marks >= 50) {
            pass++;
            failCount = 0;  
        } else {
            fail++;
            failCount++;
        }

       
    }

    printf("Passed: %d\n", pass);
    printf("Failed: %d\n", fail);

    return 0;
}


