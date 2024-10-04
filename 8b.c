#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int i;
    int sum = 0;
    int min, max;
    float average;

    printf("Enter 10 integer numbers:\n");

    // Read the numbers from the user
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        
        if (i == 0) {
            // Initialize min and max with the first number
            min = max = numbers[i];
        } else {
            // Update min and max if necessary
            if (numbers[i] < min)
                min = numbers[i];
            if (numbers[i] > max)
                max = numbers[i];
        }
    }

    average = (float)sum / SIZE;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
