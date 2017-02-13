/*
 * Generalize p71 ch04 ppj 01
 * scanf %d -> printf  n/10 and %(R)
 * number can be more than two digits
 */

 #include <stdio.h>

 int main(void)
 {
     int num;

     printf("Enter number: ");
     scanf("%d", &num);

     printf("The reseral is: ");
     do {
        printf("%d", num % 10);
        num /= 10;
     } while (num != 0);
     printf("\n");

     return 0;
 }