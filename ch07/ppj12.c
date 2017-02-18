/* 
 * p158 programming project 12
 * expression left to right
 */

#include <stdio.h>
//#include <ctype.h>

int main(void)
{
    float n1, n2, n3, sum;
    char op1, op2;

    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &n1, &op1, &n2, &op2, &n3);

    switch (op1) {      // first left and middle
        case '+': sum = n1 + n2;  break;
        case '-': sum = n1 - n2;  break;
        case '*': sum = n1 * n2;  break;
        case '/': sum = n1 / n2;  break;
    }
    
    switch (op2) {      // first left and middle
        case '+': sum += n3;  break;
        case '-': sum -= n3;  break;
        case '*': sum *= n3;  break;
        case '/': sum /= n3;  break;
    }

    printf("Value of expression: %.1f\n", sum);

    return 0;
}
