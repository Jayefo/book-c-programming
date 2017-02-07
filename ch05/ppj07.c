/* 
 * p96, Programming projects 07
 * compare number -> output largest and smallest
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, nLarge, nSmall;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    if (n1 >= n2) {
        nLarge = n1;
        nSmall = n2;
    } else {
        nLarge = n2;
        nSmall = n1;
    }

    if (n3 >= nLarge)
        nLarge = n3;
    else if (n3 <= nSmall)
        nSmall = n3;

    if (n4 >= nLarge)
        nLarge = n4;
    else if (n4 <= nSmall)
        nSmall = n4;
    
    printf("Largest: %d\n", nLarge);
    printf("Smallest: %d\n", nSmall);

    return 0;
}