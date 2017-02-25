/*
 * p179 ppj07
 * Enter integers of 5 x 5 array
 * Read 5 x 5 array of integers, print the row sums and the column sum
 */

#include <stdio.h>

int main(void)
{
    int array[5][5], n, row, column, sum;
    
    /* put integers into 5x5 array */
    for (row = 0; row < 5; row++) {
    printf("Enter row %d: ", row + 1);
        for (column = 0; column < 5; column++) {
            scanf("%d", &n);
            array[row][column] = n;
            // printf("array[%d][%d] = %d, ", row, column, array[row][column]);
            }
    }

    /* sums */
    for (row = 0; row < 5; row++) {
        for (column = 0; column < 5; column++) {
        sum += array[row][column];
        }
    }

    /* column sum */
    printf("Row totals: " );
    printf("Column totals: ");
   
    return 0;
}
