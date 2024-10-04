#include <stdio.h>

// Function to swap two integers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers using call by reference
void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Call swapByValue function
    swapByValue(x, y);

    printf("After swap by value:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Call swapByReference function
    swapByReference(&x, &y);

    printf("After swap by reference:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
