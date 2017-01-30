/* 
 * p50 programing project 05
 * input any number -> output in a 4 by 4 arrangement and sums
 */

#include <stdio.h>

int main(void)
{
    int row1_1, row1_2, row1_3, row1_4, row2_1, row2_2, row2_3, row2_4, row3_1, row3_2, row3_3, row3_4, row4_1, row4_2, row4_3, row4_4,rowSum_1, rowSum_2, rowSum_3, rowSum_4, columnSum_1,  columnSum_2, columnSum_3, columnSum_4, diagonalSum_1, diagonalSum_2;
    
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &row1_1, &row1_2, &row1_3, &row1_4, &row2_1, &row2_2, &row2_3, &row2_4, &row3_1, &row3_2, &row3_3, &row3_4, &row4_1, &row4_2, &row4_3, &row4_4);

    rowSum_1 = row1_1 + row1_2 + row1_3 + row1_4;
    rowSum_2 = row2_1 + row2_2 + row2_3 + row2_4;
    rowSum_3 = row3_1 + row3_2 + row3_3 + row3_4;
    rowSum_4 = row4_1 + row4_2 + row4_3 + row4_4;

    columnSum_1 = row1_1 + row2_1 + row3_1 + row4_1;
    columnSum_2 = row1_2 + row2_2 + row3_2 + row4_2;
    columnSum_3 = row1_3 + row2_3 + row3_3 + row4_3;
    columnSum_4 = row1_4 + row2_4 + row3_4 + row4_4;

    diagonalSum_1 = row1_1 + row2_2 + row3_3 + row4_4;
    diagonalSum_2 = row1_4 + row2_3 + row3_2 + row4_1;

    printf("%2d %2d %2d %2d\n", row1_1, row1_2, row1_3, row1_4);
    printf("%2d %2d %2d %2d\n", row2_1, row2_2, row2_3, row2_4);
    printf("%2d %2d %2d %2d\n", row3_1, row3_2, row3_3, row3_4);
    printf("%2d %2d %2d %2d\n", row4_1, row4_2, row4_3, row4_4);

    printf("\nRow sums: %d %d %d %d\n", rowSum_1, rowSum_2, rowSum_3, rowSum_4);
    printf("Column sums: %d %d %d %d\n", columnSum_1, columnSum_2, columnSum_3, columnSum_4);
    printf("Diagonal sums: %d %d\n", diagonalSum_1, diagonalSum_2);

    return 0;
}