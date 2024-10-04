#include <stdio.h>

// Function to calculate the power of a number using recursion
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d raised to the power %d is: %d\n", base, exponent, result);

    return 0;
}
