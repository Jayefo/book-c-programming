/* p50 programing project 01
 * input mm/dd/yyyy -> output mmddyyyy
 */

 #include <stdio.h>

 int main(void)
 {
     int mm, dd, yyyy;

     printf("Enter a date (mm/dd/yyyy): ");
     scanf("%d /%d /%d", &mm, &dd, &yyyy);  // user space input allowed
     printf("You enter the date %d%.2d%.2d\n", yyyy, mm, dd);

     return 0;
 }