/* 
 * p96, Programming projects 05
 * taxable income calculate
 */

#include <stdio.h>

int main(void)
{
   float income, tax;
   
   printf("Enter the income: $");
   scanf("%f", &income);

   printf("Tax due is $");
   if (income < 750)
     printf("%.2f\n", income * 0.01f);
   else if (income <= 2250)
     printf("%.2f\n", income * 0.02f + 7.50f);
   else if (income <= 3750)
     printf("%.2f\n", income * 0.03f + 37.50f);
   else if (income <= 5250)
     printf("%.2f\n", income * 0.04f + 82.50f);
   else if (income <= 7000)
     printf("%.2f\n", income * 0.05f + 142.50f);
   else
     printf("%.2f\n", income * 0.06f + 230.00f);

    return 0;
}