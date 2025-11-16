// 1. As a programmer, you are required to create a program that takes the first and last name from
// a user. The program then combines both the inputs taken and prints the string backwards.

#include <stdio.h>

int main() {
    char first[50], last[50], full[100];
    int i = 0, j = 0, length = 0;


    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);


    while (first[i] != '\0') {    
        full[length] = first[i];
        i++;
        length++;
    }

    full[length] = ' ';          
    length++;

    while (last[j] != '\0') {     
        full[length] = last[j];
        j++;
        length++;
    }

    full[length] = '\0';        

    printf("\nReversed full name: ");
    for (i = length ; i >= 0; i--) {
        printf("%c", full[i]);
    }

    return 0;
}

