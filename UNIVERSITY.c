#include <stdio.h>

int main() {
    float fsc, nts;
    int choice, i;

    printf("Enter your FSc percentage: ");
    scanf("%f", &fsc);
    printf("Enter your NTS percentage: ");
    scanf("%f", &nts);

    printf("\nChoose University:\n1. Oxford\n2. MIT\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Oxford
            printf("\n--- Oxford Eligibility ---\n");
            if(fsc > 70 && nts > 70)
                printf("Eligible for IT\n");
            if(fsc > 70 && nts > 60)
                printf("Eligible for Electronics\n");
            if(fsc > 70 && nts > 50)
                printf("Eligible for Telecommunication\n");
            break;

        case 2: // MIT
            printf("\n--- MIT Eligibility ---\n");
            if(fsc > 60 && fsc <=70 && nts > 50)
                printf("Eligible for IT\n");
            if(fsc >= 50 && fsc <= 59 && nts > 50)
                printf("Eligible for Chemical\n");
            if(fsc > 40 && fsc < 50 && nts > 50)
                printf("Eligible for Computer\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
