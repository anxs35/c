#include <stdio.h>

void main() {
   int a, b, temp;

   printf("Enter value of a: ");
   scanf("%d", &a);

   printf("Enter value of b: ");
   scanf("%d", &b);

   // Swapping with third variable
   temp = a;
   a = b;
   b = temp;

   printf("After swapping, value of a: %d\n", a);
   printf("After swapping, value of b: %d\n", b);

}

