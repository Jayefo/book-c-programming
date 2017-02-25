#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) { 
        digit = n % 10;

        if (digit_seen[digit])  // if [digit] is true, break;
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}