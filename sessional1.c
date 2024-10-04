#include<stdio.h>
void main()
{
    int n,reverse=0,newn=n,rem,t;
    printf("Enter a number");
    scanf("%d",&n);
    while(t!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        t=t/10;
    }
    if(n=reverse)
    printf("Palindrome");
    else
    printf("Not palindrome");
    
}