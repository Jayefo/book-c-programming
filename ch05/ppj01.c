/* 
 * p95, Programming projects 01
 * calculates digits number contains
 */

 #include <stdio.h>

 int main(void) {

    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number < 9)
      printf("The number %d has 1 digits\n", number);
    else if (number >= 10 && number < 99)
      printf("The number %d has 2 digits\n", number);
    else if (number >= 100 && number < 999)
      printf("The number %d has 3 digits\n", number);
    else 
      printf("The number %d has more than 3 digits\n", number);

    return 0;
 }