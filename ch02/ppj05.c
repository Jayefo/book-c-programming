/*
 * p34 programing project 05
 * scanf %d of value for x -> printf %d value of polynomial : '3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6'
 */
#include <stdio.h>

#define X_CUBED x * x * x
#define X_SQURED x * x

int main(void)
{
    int x, value;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = ?\n");
    printf("Enter a value for X : "); // user input for value of X
    scanf("%d", &x);     // integer input

    value = (3 * (X_CUBED * X_SQURED)) + (2 * (X_SQURED * X_SQURED)) - (5 * (X_SQURED * x)) - X_SQURED + (7 * x) - 6;  // formular

    printf("value of above polynomial is : %d\n", value);

    return 0;
}