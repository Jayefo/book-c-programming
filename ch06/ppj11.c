/*
 * p123, programming project 11
 * infinite series
 */

#include <stdio.h>

int main(void)
{
    int n;
    float e, factorial;

    printf("e = 1 + 1/1! + 1/2! + ... + 1/n!\n");
    printf("Enter n: ");
    scanf("%d", &n);

    e = 1.0f, factorial = 1;

    for(int i = 1; i <= n; i++) {
        factorial *= i;
        e += (1.0f / factorial);
    }

    }
    printf("e = %.2f\n", e);

    return 0;
}