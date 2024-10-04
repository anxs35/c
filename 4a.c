#include<stdio.h>
void main()
{
    double a,b,c,d,x1,x2,sqrt=2;
    printf("Enter the coefficients a,b and c: ");
    scanf("%lf,%lf,%lf", &a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The root are real and distinct.\n");
        printf("x1=%2f\n",x1);
        printf("%2f\n", x2);
    }
    else if (d==0)
    {
        x1=x2=-b/(2*a);
        printf("The roots are real and equal.\n");
        printf("x1=x2=%2f\n", x1);
    }
    else{
        printf("The roots are imaginary.\n");
    }
}