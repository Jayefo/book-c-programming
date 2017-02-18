/* 
 * p158 programming project 12-1
 * expression left to right
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    float num, sum;
    char ch;
    num = 0.0f, sum = 0.0f;

    printf("Enter an expression: ");
    scanf("%f", &sum);  //

    while ((ch = getchar()) != '\n') {    // loop until meets '\n,'
        switch (ch) {      
            case '+': scanf("%f", &num), sum += num;  break;
            case '-': scanf("%f", &num), sum -= num;  break;
            case '*': scanf("%f", &num), sum *= num;  break;
            case '/': scanf("%f", &num), sum /= num;  break;
            default : break;
        }
    }
    printf("Value of expression: %.1f\n", sum);

    return 0;
}
