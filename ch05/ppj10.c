/* 
 * p97, Programming projects 10
 * Using switch statment, convert a numerical grade in to letter
 */

#include <stdio.h>

int main(void)
{
    int nGrade;
    
    printf("Enter numerical grade: ");
    scanf("%d", &nGrade);

    if (nGrade < 0 || nGrade > 100) {
      printf("Illegal number\n");
      return 0;
    }

    printf("Letter grade: ");
    switch (nGrade / 10) {
        case 10: case 9:  printf("A\n");  break;
        case 8:  printf("B\n");  break;
        case 7:  printf("C\n");  break;
        case 6:  printf("D\n");  break;
        case 5: case 4: case 3: case 2: case 1: case 0:  printf("F\n");  break;
    }
      
    return 0;
}