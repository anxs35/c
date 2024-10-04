#include <stdio.h>

#define SIZE 10

// Function to sort an array in ascending order using pointers
void sortArray(int* arr, int size) {
    int i, j, temp;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[SIZE];
    int i;

    printf("Enter 10 integers:\n");

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    sortArray(arr, SIZE);

    printf("Elements of array in ascending order:\n");

    // Print the elements of the sorted array
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}
