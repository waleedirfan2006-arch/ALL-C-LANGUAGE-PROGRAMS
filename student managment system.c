#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

void inputStudents(struct Student s[], int n);
void displayStudents(struct Student s[], int n);
void highestMarks(struct Student s[], int n);

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    inputStudents(s, n);
    displayStudents(s, n);
    highestMarks(s, n);

    return 0;
}

void inputStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter data for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // read string with spaces
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n) {
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Marks: %.2f\n\n", s[i].marks);
    }
}

void highestMarks(struct Student s[], int n) {
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[pos].marks)
            pos = i;
    }
    printf("Top Student:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s[pos].name, s[pos].rollNo, s[pos].marks);
}
