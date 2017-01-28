/*
 * p35, Programming Projects 8
 * Calculates the remainig balance on a loan after 1st, 2nd and 3rd mounlty payment 
 */

#include <stdio.h>

int main(void)
{
    float amountOfLoan, interestRate, montlyPayment;
    
    printf("Enter amount of loan: ");
    scanf("%f", &amountOfLoan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &montlyPayment);
    printf("\n");    //just add line

    interestRate = 1 + (interestRate * 0.01f) / 12;   // 1(amount of loan) + monthly interest rate
    
    float balance1 =  amountOfLoan * interestRate - montlyPayment; // balance after first payment
    float balance2 =  balance1 * interestRate - montlyPayment;    // balance after second payment
    float balance3 =  balance2 * interestRate - montlyPayment;    // balance after third payment

    printf("Balance remaining after first payment:  $%.2f\n", balance1);
    printf("Balance remaining after second payment: $%.2f\n", balance2);
    printf("Balance remaining after third payment:  $%.2f\n", balance3);
    
    return 0;
}