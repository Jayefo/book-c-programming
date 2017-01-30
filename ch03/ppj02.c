/* 
 * p50 programing project 02
 * input data -> output table form
 */

#include <stdio.h>

int main(void)
{
    int itemNo, mm, dd, yyyy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNo);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d / %d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%d\n", itemNo, price, mm, dd, yyyy);

    return 0;
}