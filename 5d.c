#include <stdio.h>

int main() {
    int N, num, sum = 0, max = 0;
    int count;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (count = 1; count <= N; count++) {
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        sum += num;

        if (num > max) {
            max = num;
        }
    }

    printf("Sum of the numbers: %d\n", sum);
    printf("Maximum number: %d\n", max);

    return 0;
}
