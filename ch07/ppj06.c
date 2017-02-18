/*
 * p158 programming project 06
 * sizeof
 */

#include <stdio.h>

int main(void)
{
  printf("Size of int: %zu\n", sizeof(int));
  printf("Size of short %zu\n", sizeof(short));
  printf("Size of long %d\n", (int) sizeof(long));  // same as %zu\n, sizeof(long)
  printf("Size of float %zu\n", sizeof(float));
  printf("Size of double %zu\n", sizeof(double));
  printf("Size of long double %zu\n", sizeof(long double));

  return 0;
}