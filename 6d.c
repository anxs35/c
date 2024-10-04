#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of terms: ");
    scanf("%d", &N);

    int factorial = 1;
    long long sum = 0;
    
    for (int i = 1; i <= N; i++) {
        factorial *= i;
        sum += factorial;
    }
    
    printf("Sum of the series: %lld\n", sum);
    
    return 0;
}
