/*
 * p178 ppj01
 * Modiify repdigit.c
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int result[10] = {0};
    int digit;
    int n, i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {   

    while (n > 0) { 
        digit = n % 10;

        if (digit_seen[digit]) {    
            result[digit] = digit;
            i++;
        }
        digit_seen[digit] = true;
        n /= 10;
        
    }

    if (i > 0) {
        printf("Repeated digit: ");
        for (i = 9; i >= 0; i--) {
            if (result[i] != 0) {
                printf("%d ", result[i]);
            }
        }
        putchar('\n');
    } else
        printf("No repeated digit\n");
    
    printf("Enter a number: ");
    scanf("%d", &n);
    }
    return 0;
}