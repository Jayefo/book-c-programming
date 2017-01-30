#include <stdio.h>

int main(void)
{
  printf("|%6d|, |%4d|\n", 86, 1040);
  printf("|%12.5e|\n", 30.253);
  printf("|%.4f|\n", 83.162);
  printf("|%-6.2g|\n", 0.0000009979);   // |1e-06 |
  printf("|%-6.2e|\n", 0.0000009979);   // 9.98e-07 
  printf("|%-6.3g|\n", 0.0000009979);   // 
  return 0;
}