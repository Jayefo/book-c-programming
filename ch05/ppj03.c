/* 
 * p95, Programming projects 03
 * modify broker.c
 */

#include <stdio.h>

int main(void)
{
    int shares;
    float commission, shares, price, value;

    printf("Enter number of share: ");
    scanf("%d", &shares);
    printf("Price per share: $");
    scanf("%f", &price);

    value = shares * price;
    printf("\nStock Value : $%.2f\n\n", value);
    
    if (shares >= 2000)
      commission = (0.02f * shares ) + 33;
    else 
      commission = (0.03f * shares) + 33;

    printf("Commission: $%.2f\n", commission);

    /* Ravls commission */
    if (value >= 2500.00f && value < 6250.00f)
        commission = 56.00f + value * 0.0066;
    else if (value >= 6250.00f && value < 20000.00f)
        commission = 76.00f + value * 0.0034;
    else if (value >= 20000.00f && value < 50000.00f)
        commission = 100.00f + value * 0.0022;
    else if (value >= 50000.00f && value < 500000.00f)
        commission = 155.00f + value * 0.0011;
    else if (value >= 500000.00f)
        commission = 255.00f + value * 0.0009;
    else 
        commission = 30.00f + value * 0.017;
    
    if (commission < 39.00f)
      commission = 39.00f;

    printf("Rival's Commission: $%.2f\n", commission);

    return 0;
}