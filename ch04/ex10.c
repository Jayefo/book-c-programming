/* p70 Exercises 10
 * operators
 */

 #include <stdio.h>

 int main(void)
 {
     int i = 6, j;
     j = i += i;
     printf("%d %d\n", i, j);  // 12 12

     i = 5;
     j = (i -= 2) + 1;
     printf("%d %d\n", i, j);  // 10 11

     i = 7;
     j = 6 + (i = 2.5);
     printf("%d %d\n", i, j);  // Can't operate

     i = 2, j = 8;
     j = (i = 6) + (j = 3);
     printf("%d %d\n", i, j);  // Can't operate

     return 0;
 }