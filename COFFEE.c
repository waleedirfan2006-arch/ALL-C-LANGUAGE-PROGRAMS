#include <stdio.h>

int main() {
    char type, size;

    printf("Enter Coffee Type (B = Black, W = White): ");
    scanf(" %c", &type);

    printf("Enter Size (S = Small, D = Double): ");
    scanf(" %c", &size);

    int factor = 1;   
    if(size == 'D' || size == 'd') {
        factor = 1.5; 
    }

    printf("\nPreparing Coffee\n");

    switch(type) {
        case 'W':
        case 'w':
            printf("Put Water: %d mins\n", (int)(15 * factor));
            printf("Add Sugar: %d mins\n", (int)(15 * factor));
            printf("Mix Well: %d mins\n", (int)(20 * factor));
            printf("Add Coffee: %d mins\n", (int)(4 * factor));
            printf("Add Milk: %d mins\n", (int)(2 * factor));
            printf("Mix Well: %d mins\n", (int)(20 * factor));
            break;

        case 'B':
        case 'b':
            printf("Put Water: %d mins\n", (int)(20 * factor));
            printf("Add Coffee: %d mins\n", (int)(15 * factor));
            printf("Mix Well: %d mins\n", (int)(25 * factor));
            break;

        default:
            printf("Invalid Coffee Type!\n");
    }

    return 0;
}
