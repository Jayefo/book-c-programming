/* 
 * p95, Programming projects 04
 * Beaufort scale
 */

#include <stdio.h>

int main(void)
{
   int speed;
   
   printf("Enter a wind spped(in knots): ");
   scanf("%d", &speed);
   
   printf("Estimate wind force is: ");
   if (speed < 1)
     printf("Calm\n");
   else if (speed <= 3)
     printf("Light air\n");
   else if (speed <= 27)
     printf("Breeze\n");
   else if (speed <= 47)
     printf("Gale\n");
   else if (speed <= 63)
     printf("Storm\n");
   else
     printf("Hurricane\n");

    return 0;
}