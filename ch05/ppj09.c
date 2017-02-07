/* 
 * p97, Programming projects 09
 * input two of mm/dd/yy, output earlier one the calander
 */

#include <stdio.h>

int main(void)
{
    int yy1, mm1, dd1, total_1, yy2, mm2, dd2, total_2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &mm1, &dd1, &yy1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &mm2, &dd2, &yy2);

    total_1 = (yy1 * 365 * 12 * 30) + (mm1 * 30) + dd1;     // expressed in days
    total_2 = (yy2 * 365 * 12 * 30) + (mm2 * 30) + dd2;     // expressed in days

    if (total_1 < total_2) 
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    else if (total_1 > total_2)
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
    else
      printf("Same date\n");
      
    return 0;
}