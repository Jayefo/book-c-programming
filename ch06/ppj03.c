/*
 * p123, programming project 
 * input fraction, output lowest term
 */

#include <stdio.h>

int main(void)
{
    int m, n, numerator, denominator, remainder;
    
    printf("Enter two fraction: ");
    scanf("%d/%d", &m, &n);
    numerator = m;
    denominator = n;

    while (n !=0 ) {
        remainder = m % n;
        m = n;
        n = remainder;
    }    

    if (denominator / m != 1)
        printf("In lowest  terms: %d/%d\n", numerator / m,  denominator / m);
    else
        printf("In lowest  terms: %d\n", numerator / m);

    return 0;
}