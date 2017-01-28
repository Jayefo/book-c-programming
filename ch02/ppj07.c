/*
 * p34, Programming Projects 7
 * scanf %d a dollar amount then printf %d amount of each bills $20, $10, $5, $1
 */


#include <stdio.h>

int main(void)
{
    int bills, remainder_20, remainder_10, remainder_5;

    printf("Enter a dollar amount: $ ");
    scanf("%d", &bills);
    printf("\n");

    remainder_20 = bills - (20 * (bills / 20));    // remainder after deducted 20 dollar billsinde
    remainder_10 = remainder_20 - (10 * (remainder_20 / 10));  // remainder after deducted 10 dollar bills
    remainder_5 = remainder_10 - (5 * (remainder_10 / 5));    // remainder after deducted 5 dollar bills

    printf("$20 bills: %d\n", bills / 20);
    printf("$10 bills: %d\n", remainder_20 / 10);
    printf(" $5 bills: %d\n", remainder_10 / 5);
    printf(" $1 bills: %d\n", remainder_5);

    return 0;
}