/*
 * p122, programming project 02
 * input two int, output output greatest common divisor(GDC)
 */

#include <stdio.h>

int main(void)
{
    int m, n, remainder;
    
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    /*  while is better choice, because you don't know how many times loop will turns   */
    //  for(; n != 0; remainder = m % n, m = n, n = remainder);
    
    while (n !=0 ) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    printf("Greatest common divsor: %d\n", m);

    return 0;
}