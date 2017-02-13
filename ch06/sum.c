#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("This program sums a series of integers. \n");
    printf("enter integers (0 ot terminate): ");

    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sume is: %d\n", sum);

    return 0;
}