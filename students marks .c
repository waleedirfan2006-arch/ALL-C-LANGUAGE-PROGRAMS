#include <stdio.h>

int main() {
    int mark;
    int passCount = 0, failCount = 0;
    int failInRow = 0;

    printf("Enter marks of students (enter -1 to stop):\n\n");

    while (1) {
        printf("Enter mark: ");
        scanf("%d", &mark);
        if (mark == -1) {
            break;
        }

    
        if (mark >= 50) {
            passCount++;
            failInRow = 0; 
        } else {
            failCount++;
            failInRow++;
        }
        if (failInRow > 3) {
            printf("\nMore than 3 fails entered in a row !\n");
            break;
        }
    }

    printf("Total Passing Students: %d\n", passCount);
    printf("Total Failing Students: %d\n", failCount);

    return 0;
}
