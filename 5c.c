#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("The number = ");
    scanf("%d",&num);
    while (num!=0)
    {
        sum += num%10;
        num = num/10;
    }
    printf("sum : %d", sum);
}