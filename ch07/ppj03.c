/*
 * p157 programming project 03
 * modify double
 */

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0f;

    printf("This program sums a series of integers. \n");
    printf("enter integers (0 ot terminate): ");

    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sume is: %lf\n", sum);

    return 0;
}