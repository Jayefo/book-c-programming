/*
 * p178 ppj02
 * Modiify repdigit.c again
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //bool digit_seen[10] = {false};
    int result[10] = {0};
    int digit, n;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) { 
        digit = n % 10;
        result[digit]++;
        n /= 10;

     /*   if (digit_seen[digit]) { 
            result[digit]++;       
        }
        digit_seen[digit] = true;
        if (result[digit] == 0)
            result[digit] = 1;    
        n /= 10;        */
    }

    printf("Digit:\t    ");
    for (digit = 0; digit < 10; digit++) {
        printf("%3d", digit);
    }

    printf("\nOccurrences:");
    for (digit = 0; digit < 10; digit++) {
        printf("%3d", result[digit]);
    }
    putchar('\n');

    return 0;
}