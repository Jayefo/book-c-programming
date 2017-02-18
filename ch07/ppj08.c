/* 
 * p158 programming project 00
 * modify p97, Programming projects 08
 * output cloeset departure flight time
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
int dTime1 = 8 * 60, dTime2 = 9 * 60 + 43, dTime3 = 11 * 60 +19, dTime4 = 12 * 60 + 47, dTime5 = 14 * 60,
  dTime6 = 15 * 60 + 45, dTime7 = 19 * 60, dTime8 = 21 * 60 + 45, hh, mm, cvMM;
char ch;
    
    printf("Enter a 12-hour time (hh:mm pm or am): ");        // input curretn time 12 hours format
    scanf("%2d :%2d %c", &hh, &mm, &ch);

    if ((ch = toupper(ch)) == 'P') {
        cvMM = (12 + hh) * 60 + mm;    // if pm, + 12 hours
    } else {
        cvMM = hh * 60 + mm;    // convert input into a expressed in minuites since midnight
    }
    
    /* compare departure time, expressed in minuites since midnight */
    if (abs(cvMM - dTime1) <= abs(cvMM - dTime2))       // abs() funtion for minus result to plus
        printf("Closest a departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (abs(cvMM - dTime2) <= abs(cvMM - dTime3))  
        printf("Closest a departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (abs(cvMM - dTime3) <= abs(cvMM - dTime4))  
        printf("Closest a departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (abs(cvMM - dTime4) <= abs(cvMM - dTime5))  
        printf("Closest a departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (abs(cvMM - dTime5) <= abs(cvMM - dTime6))  
        printf("Closest a departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (abs(cvMM - dTime6) <= abs(cvMM - dTime7))  
        printf("Closest a departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (abs(cvMM - dTime7) <= abs(cvMM - dTime8)) 
        printf("Closest a departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest a departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    
    return 0;
}