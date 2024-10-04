#include <stdio.h>

void main() {
   int num, digit1, digit2, digit3, reverse;

   printf("Enter a three-digit number: ");
   scanf("%d", &num);

   digit1 = num / 100;     //Extract the hundreds digit
   digit2 = (num / 10) % 10; //Extract the tens digit
   digit3 = num % 10;      //Extract the units digit

   reverse = digit3 * 100 + digit2 * 10 + digit1; //Calculate the reverse number

   printf("The reverse of %d is %d", num, reverse);
}
