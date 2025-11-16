// 3. Students are grouped in two to complete a lab task.
//  Each student is required to enter a string of their 
//  own choice as an input to the program. The program 
// will then display as a result whether both the
// strings are equal. If the strings are not equal,
// the program will display whichof the string is greater.
// Test cases:
// Enter two strings that are same.
// Enter two different strings.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;


    printf("Student 1, enter your string: ");
    gets(str1);
    printf("Student 2, enter your string: ");
    gets(str2);

        while (str1[i] != '\0' && str2[i] != '\0')
         {
        if (str1[i] != str2[i])
         {
            flag = 1; 
            break;
        }
        i++;
    }

    
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("\nBoth strings are equal.");
    } 
    else {
    
        if (str1[i] > str2[i])
            printf("\nFirst string is greater.");
        else
            printf("\nSecond string is greater.");
    }

    return 0;
}

