/* 
 * p158 programming project 09
 * 12 hour convert to 24hour
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
int hh, mm;
char ch;
    
    printf("Enter a 12-hour time (hh:mm pm or am): ");        // input curretn time 12 hours format
    scanf("%2d :%2d %c", &hh, &mm, &ch);

    if ((ch = toupper(ch)) == 'P')
        hh = (12 + hh);    // if pm, + 12 hours
    
    printf("Equivalent 24-hour time: %2d:%2d\n", hh, mm);
    
    return 0;
}