/*
 * p71 programming projects 03
 * scanf %3d -> printf reverse different way
 */

 #include <stdio.h>

 int main(void)
 {
     int n1, n2, n3;

     printf("Enter a tree-digit number: ");
     scanf("%1d%1d%1d", &n1, &n2, &n3);    //must uses %1d, instead of %d

     printf("The reversal is: %d%d%d\n", n3, n2, n1);

     return 0;
 }