/*
 * p71 programming projects 02
 * scanf %3d -> printf reverse
 */

 #include <stdio.h>

 int main(void)
 {
     int num;

     printf("Enter a tree-digit number: ");
     scanf("%3d", &num);

     int restDivBy100 = num % 100;

     printf("The reversal is: %d%d%d\n", restDivBy100 % 10, restDivBy100 / 10, num / 100);

     return 0;
 }