// Each student is required to find out the maximum frequency of 
// characters occurring in their name and the courses offered in Fall
// 2021. To find it, the student enters their name, courses offered 
// and the program finds the maximum occurrences of a character in the
// name and course. Course names should be used like Programming 
// Fundamentals, Applied Physics, Pakistan Studies and so on.



#include <stdio.h>

int main() {
    char name[100], course[100];
    int i, j, count, maxName = 0, maxCourse = 0;
    char maxCharName, maxCharCourse;


    printf("Enter your full name: ");
    gets(name); 
    printf("Enter your course name: ");
    gets(course);


    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')  
            continue;

        count = 0;
        for (j = 0; name[j] != '\0'; j++) {
            if (name[i] == name[j])
                count++;
        }

        if (count > maxName) {
            maxName = count;
            maxCharName = name[i];
        }
    }


    for (i = 0; course[i] != '\0'; i++) {
        if (course[i] == ' ')
            continue;

        count = 0;
        for (j = 0; course[j] != '\0'; j++) {
            if (course[i] == course[j])
                count++;
        }

        if (count > maxCourse) {
            maxCourse = count;
            maxCharCourse = course[i];
        }
    }

    printf("\nCharacter '%c' appears most in your NAME (%d times).", maxCharName, maxName);
    printf("\nCharacter '%c' appears most in your COURSE (%d times).", maxCharCourse, maxCourse);

    return 0;
}

