#include <stdio.h>

void main() {
   int num1, num2, num3, temp;

   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   // swap num1 and num2 if num1 is greater than num2
   if (num1 > num2) {
       temp = num1;
       num1 = num2;
       num2 = temp;
   }

   // swap num2 and num3 if num2 is greater than num3
   if (num2 > num3) {
       temp = num2;
       num2 = num3;
       num3 = temp;
   }

   // swap num1 and num2 again if num1 is greater than num2
   if (num1 > num2) {
       temp = num1;
       num1 = num2;
       num2 = temp;
   }

   printf("Numbers in ascending order: %d %d %d\n", num1, num2, num3);

}
