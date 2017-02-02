/*
 * UPC to EAN(European Article Number) system which is 12-digits to 13-digits system.
 */
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, sumEven, sumOdd, total;

    printf("Enter 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sumEven = n2 + n4 + n6 + n8 + n10 + n12;
    sumOdd = n1 + n3 + n5 + n7 + n9 + n11;
    total = (sumEven * 3) + sumOdd;
    
    printf("Check  digit: %d\n", 9 - ((total -1) % 10));

    return 0;
}