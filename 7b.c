#include <stdio.h>
 
int main()
{
    int base, exponent;
    float power = 1;
 
    /* Take base and exponent as input*/
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;
 
    //to calculate the power of negative exponents
    while (expo < 0)
    {
        power = power/base;
        expo++;
    }
 
    //To calculate the power of positive exponents
    while(expo>0)
    {
        power = power * base;
        expo--;
    }
 printf("%d ^ %d = %f", base, exponent, power);
 
    return 0;
}