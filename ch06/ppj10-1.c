/*
 * p123, programming project 10
 * modifiy p97, Programming projects 09, input two of mm/dd/yy, output earlier one the calander
 * any number of dates, terminate enter code 0/0/0
 */

#include <stdio.h>

int main(void)
{
    int yy1, mm1, dd1, total_1, yy2, mm2, dd2, total_2;
    
/* while loop, same as for loop below */
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    total_1 = (yy1 * 365 * 12 * 30) + (mm1 * 30) + dd1;     // expressed in days

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);
    while (mm2 != 0 && dd2 != 0 && yy2 != 0) {

        total_2 = (yy2 * 365 * 12 * 30) + (mm2 * 30) + dd2;

            if (total_2 < total_1) {
                total_1 = total_2;
                mm1 = mm2;
                dd1 = dd2;
                yy1 = yy2;
            }   
        printf("Enter first date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm2, &dd2, &yy2);
    }
    
/*
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    total_1 = (yy1 * 365 * 12 * 30) + (mm1 * 30) + dd1;     // expressed in days

    for (;;) {
        printf("Enter first date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm2, &dd2, &yy2);
        if (mm2 == 0 && dd2 == 0 && yy2 == 0) {
            break;
        }
        
        total_2 = (yy2 * 365 * 12 * 30) + (mm2 * 30) + dd2;
        if (total_2 < total_1) {
            total_1 = total_2;
            mm1 = mm2;
            dd1 = dd2;
            yy1 = yy2;
        }        
    }
*/
    printf("%d/%d/%.2d is earliest date\n", mm1, dd1, yy1);
          
    return 0;
}