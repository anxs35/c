#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 0;

    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * pow(10, i);
        i++;
    }

    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        i++;
    }

    return decimal;
}

int main() {
    int choice, decimal;
    long long binary;

    do {
        printf("Menu:\n");
        printf("1. Convert Decimal to Binary\n");
        printf("2. Convert Binary to Decimal\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                binary = decimalToBinary(decimal);
                printf("Binary: %lld\n", binary);
                break;

            case 2:
                printf("Enter a binary number: ");
                scanf("%lld", &binary);
                decimal = binaryToDecimal(binary);
                printf("Decimal: %d\n", decimal);
                break;

            case 3:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("\n");
    } while (choice != 3);

    return 0;
}
