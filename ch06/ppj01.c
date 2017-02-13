/*
 * p122, programming project 01
 * input numbers, output largest number
 * exit condition : numbers <= 0,
 * number is float
 */

#include <stdio.h>

int main(void)
{
    float number, largestNum;

    printf("Enter a number: ");
    scanf("%f", &number);

    for (largestNum = number; number > 0;){   // exit condition
        if (number > largestNum)
            largestNum = number;     // if input number is greater than current largest number, asign new largest number
        printf("Enter a number: ");
        scanf("%f", &number);
    }   
    printf("\nThe largest nubmer entered was %.2f\n", largestNum);

    return 0;
}