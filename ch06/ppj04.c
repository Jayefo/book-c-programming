/*
 * p123, programming project 03
 * changing broker.c 
 * add loop, exit condition is input '0'
 */

#include <stdio.h>

int main(void)
{
    float commission, value;

        printf("*** Enter 0 is exit ***\n");
        printf("Enter value of trade: $");
        scanf("%f", &value);

    while (value != 0) {  
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
        
        printf("Commission: $%.2f\n\n", commission);
        printf("*** Enter 0 is exit ***\n");
        printf("Enter value of trade: $");
        scanf("%f", &value);
    }
    return 0;
}