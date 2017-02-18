/*
 * p157 programming project 01
 * find out your machine can store integer bit
 */
#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares. \n");
    printf("Enter nubmer of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%ld^ = %ld\n", i, i * i);

    return 0;
}