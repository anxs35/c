#include <stdio.h>

#define MAX_NUMBERS 100

int main() {
    int numbers[MAX_NUMBERS];
    int count;

    // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &count);

    // Accept the numbers from the user
    printf("Enter the numbers:\n");
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    // Open the file for writing
    FILE* file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Write the numbers into the file
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Open the even file for writing
    FILE* evenFile = fopen("even.txt", "w");
    if (evenFile == NULL) {
        printf("Failed to open the even file.\n");
        fclose(file);
        return 1;
    }

    // Open the odd file for writing
    FILE* oddFile = fopen("odd.txt", "w");
    if (oddFile == NULL) {
        printf("Failed to open the odd file.\n");
        fclose(file);
        fclose(evenFile);
        return 1;
    }

    int number;
    while (fscanf(file, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }

    // Close the files
    fclose(file);
    fclose(evenFile);
    fclose(oddFile);

    printf("Files created successfully.\n");

    return 0;
}
