#include<stdio.h>
void main()
{
    int n,reverse=0,rem;
    printf("Enter an number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("reversed number = %d",reverse);

}