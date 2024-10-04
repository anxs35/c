#include <stdio.h>

int main() {
    printf("Prime numbers between 1 and 100:\n");

    for (int num = 2; num <= 100; num++) {
        int isPrime = 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
