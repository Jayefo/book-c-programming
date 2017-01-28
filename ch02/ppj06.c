/*
 * p34 programing project 06
 * scanf %d of value for x -> printf %d value of polynomial : ((((3x+2)x-5)x-1)x+7)x-6 = ?
 * value shoulde be same as '3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6'
 */
#include <stdio.h>

int main(void)
{
    int x, value;

    printf("((((3x+2)x-5)x-1)x+7)x-6 = ?\n");
    printf("Enter a value for X : "); // user input for value of X
    scanf("%d", &x);     // integer input

    value = ((((3 * x + 2)* x - 5) * x - 1) * x + 7) * x - 6;  // formular

    printf("value of above polynomial is : %d\n", value);

    return 0;
}