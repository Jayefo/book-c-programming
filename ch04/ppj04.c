/*
 * p71 programming projects 04
 * scanf integer%5d -> printf it in octal (base 8)
 */

 #include <stdio.h>

 int main(void)
 {
     int num, n1, n2, n3, n4, n5;

     printf("Enter a number between 0 and 32767: ");
     scanf("%5d", &num);    // max five digits

     n1 = num / 8;
     n2 = n1 / 8;
     n3 = n2 / 8;
     n4 = n3 / 8;

     printf("In octal, your number is : %.1d%.1d%.1d%.1d%.1d\n", n4 % 8, n3 % 8, n2 % 8, n1 % 8, num % 8);

     return 0;
 }