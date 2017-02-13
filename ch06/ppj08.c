/*
 * p123, programming project 08
 * print a month calendar
 */

#include <stdio.h>

int main(void)
{
    int i, numDay, startDay, lastDay;
    
    printf("Enter number of days in month: ");
    scanf("%d", &numDay);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);
    
    
    for (i = 1; i < startDay; i++) {
        printf("    ");
    }

    lastDay = 8 - startDay;     // 5 = 8 - 3

    for (i = 1; i <= numDay; i++) {      // print until i is reaching input number
        printf("%4d", i);

        /* same as i % 7 == 0 */
        if (i == lastDay) {     
            lastDay += 7;         // if i is last day of week; prints a new line
            printf("\n");
        }
    }    
    printf("\n");

    return 0;
}