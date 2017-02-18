#include <stdio.h>

int main(void)
{
    long n, sum = 0;

    printf("This program sums a series of integers. \n");
    printf("enter integers (0 ot terminate): ");

    scanf("%ld", &n);
    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sume is: %ld\n", sum);

    return 0;
}