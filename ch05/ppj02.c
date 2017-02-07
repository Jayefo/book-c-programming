/* 
 * p95, Programming projects 02
 * output 24-hour to 12-hour format
 */

 #include <stdio.h>

 int main(void) 
 {
    int hh, mm;
    
    printf("Enter a 24-hour time(hh:mm): "); 
    scanf("%d:%d", &hh, &mm);

    printf("Equivalent 12-hour time: ");
    if (hh > 12)
      printf("%d:%.2d PM\n", hh - 12, mm);
    else if (hh == 12)
      printf("%d:%.2d PM\n", hh, mm);
    else if (hh == 0)
      printf("12:%.2d AM\n", mm);
    else
      printf("%d:%.2d AM\n", hh, mm);

    return 0;
 }