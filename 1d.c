#include<stdio.h>
void main()
{
    float perimeter , area , radius;
    const float PI = 3.14;
    printf("Enter radius: ");
    scanf("%f",&radius);
    
    perimeter = 2*PI*radius;
    area = PI*radius*radius;
    printf("\nPerimeter = %f", perimeter);
    printf("\nArea = %f", area);
    }
