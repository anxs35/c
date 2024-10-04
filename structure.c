#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks[4];  // Array to store marks of 4 subjects
    float total;
    float percentage;
};

int main() {
    struct Student students[5];
    int i, j;
    float totalMarks = 400.0;  // Total marks for 4 subjects (assuming each subject is out of 100)

    // Input details for 10 students
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Enter Name: ");
        scanf(" %[^\n]%*c", students[i].name);  // This format string handles spaces in the name
        
        students[i].total = 0;  // Initialize total to 0

        for (j = 0; j < 4; j++) {
            printf("Enter marks for subject %d (out of 100): ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];  // Calculate total marks
        }

        // Calculate percentage based on total marks
        students[i].percentage = (students[i].total / totalMarks) * 100;

        printf("\n");
    }

    // Print details of students who scored more than 75%
    printf("Details of students with percentage more than 75%%:\n\n");
    for (i = 0; i < 5; i++) {
        if (students[i].percentage > 75.0) {
            printf("Student %d:\n", i + 1);
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Total Marks: %.2f\n", students[i].total);
            printf("Percentage: %.2f%%\n", students[i].percentage);
            printf("\n");
        }
    }

    return 0;
}
