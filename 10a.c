#include <stdio.h>

#define MAX_STUDENTS 100

// Structure declaration
struct Student {
    int rollNo;
    char name[50];
    int age;
    int marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // List students who scored more than 75 marks
    printf("\nStudents who scored more than 75 marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > 75) {
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Marks: %d\n\n", students[i].marks);
        }
    }

    return 0;
}
