/*
 * p71 programming projects 01
 * scanf %d -> printf  n/10 and %(R)
 */

 #include <stdio.h>

 int main(void)
 {
     int num;

     printf("Enter a two-digit number: ");
     scanf("%2d", &num);

     printf("The reversal is: %d%d\n", num % 10, num / 10);
     return 0;
 }