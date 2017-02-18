/* 
 * p158 programming project 06
 * modify p50 programing project 05
 * modify addfrac.c, input fractions -> output sperated by a plus sign
 */

 #include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;

    printf("Enter two fractions seprated by a sign (+, -, *, /): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);

    switch (sign) {
        case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
        break;

        case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The subtraction is %d/%d\n", result_num, result_denom);
        break;

        case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The multiplication is %d/%d\n", result_num, result_denom);
        break;

        case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The division is %d/%d\n", result_num, result_denom);
        break;

        default:  printf("Illegal number or form\n");  break;
    }

    return 0;
}
