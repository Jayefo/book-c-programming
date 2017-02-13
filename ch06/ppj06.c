/*
 * p123, programming project 06
 * input int, out all even squares
 */

#include <stdio.h>

int main(void)
{
    int i, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }
    return 0;
}