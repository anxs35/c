#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 100

void bubbleSort(char names[][MAX_LENGTH], int n);

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Input names
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sort the names
    bubbleSort(names, n);

    // Print the sorted names
    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

void bubbleSort(char names[][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent names and swap if necessary
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}
