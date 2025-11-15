#include <stdio.h>

int main() {
    char choice;
    int quantity, price = 0, total = 0;

    printf("Menu\n");
    printf("B. Burger       (Rs. 200)\n");
    printf("P. Pizza        (Rs. 500)\n");
    printf("F. French Fries (Rs. 50)\n");
    printf("S. Sandwiches   (Rs. 150)\n");

    printf("Enter your order (B/P/F/S): ");
    scanf(" %c", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(choice) {
        case 'B':
        case 'b':
            price = 200;
            break;
        case 'P':
        case 'p':
            price = 500;
            break;
        case 'F':
        case 'f':
            price = 50;
            break;
        case 'S':
        case 's':
            price = 150;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    
    total = price * quantity;
    printf("\nYou ordered %d item(s). Total bill = Rs. %d\n", quantity, total);

    return 0;
}
