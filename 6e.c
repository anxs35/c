#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of terms: ");
    scanf("%d", &N);
    
    int X;
    printf("Enter the value of X: ");
    scanf("%d", &X);

    int sign = -1;
    double term;
    double sum = 0.0;
    
    for (int i = 1; i <= N; i++) {
        term = (double) (X * X) / (2 * i - 1);
        sum += sign * term;
        sign *= -1;
    }
    
    printf("Sum of the series: %.2lf\n", sum);
    
    return 0;
}
