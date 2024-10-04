#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

// Function to perform binary search (requires a sorted array)
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index where the key is found
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Key is in the right half
        }
        else {
            high = mid - 1; // Key is in the left half
        }
    }

    return -1; // Return -1 if the key is not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform linear search
    int linearIndex = linearSearch(arr, size, key);
    if (linearIndex != -1) {
        printf("Linear Search: Element found at index %d\n", linearIndex);
    }
    else {
        printf("Linear Search: Element not found\n");
    }

    // Perform binary search
    int binaryIndex = binarySearch(arr, size, key);
    if (binaryIndex != -1) {
        printf("Binary Search: Element found at index %d\n", binaryIndex);
    }
    else {
        printf("Binary Search: Element not found\n");
    }

    return 0;
}
