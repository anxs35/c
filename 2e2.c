#include <stdio.h>

void main() {
   int a, b;

   printf("Enter value of a: ");
   scanf("%d", &a);

   printf("Enter value of b: ");
   scanf("%d", &b);

   // Swapping without third variable
   a = a + b;
   b = a - b;
   a = a - b;

   printf("After swapping, value of a: %d\n", a);
   printf("After swapping, value of b: %d\n", b);

}
