/*
 * p179 ppj05, modify interest.c
 * interest annually -> monthly
 */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00f

int main(void)
{
    int i, low_rate, num_years, year;
    float value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%9d%%", low_rate + i);    // print rate %
        value[i] = INITIAL_BALANCE;    // put 100.00 into value[0] ~ value[]
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);    // print year then next for loop
        for (i = 0; i < NUM_RATES; i++) {    // 20byte / 4byte = 5 elements
            for (int month = 1; month <= 12; month++)    // monthly compound
                value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%10.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
