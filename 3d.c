#include <stdio.h>
void main() {
    float marks[5], total = 0, per;
    int i;

    // Accepting marks
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculating percentage and division
    per = total / 5;
    if (per >= 60) {
        printf("Division: 1st\n");
    } else if (per >= 45) {
        printf("Division: 2nd\n");
    } else if (per >= 33) {
        printf("Division: 3rd\n");
    } else {
        printf("Division: Fail\n");
    }
    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f\n", per);

}