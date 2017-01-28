/* 
 * P34 Programming project 04
 * scanf %f-> printf %.2f that 5% of tax
*/

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: $");
    scanf("%f", &amount); // User input, amount of money
    printf("                 -------\n");

    printf("With tax added:  $%.2f\n", amount * 1.05f); // output with plus 5% of tax

    return 0;
}