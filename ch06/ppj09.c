/*
 * p123, programming project 9
 * p35, Ppj 08, Calculates the remainig balance on a loan after 1st, 2nd and 3rd mounlty payment 
 * => modifiy user enter month.
 */

#include <stdio.h>

int main(void)
{
    int numberPayment;
    float loan, interestRate, montlyPayment;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &montlyPayment);
    printf("Enter number of payment: ");
    scanf("%d", &numberPayment);
    printf("\n");    //just add line

    interestRate = 1 + (interestRate * 0.01f) / 12;   // 1(amount of loan) + monthly interest rate
    // float balance =  (loan * interestRate) - montlyPayment;
    
    for (int i = 1; i <= numberPayment; i++) {
        loan *= interestRate;
        loan -= montlyPayment;
        printf("Balance remaining after %2d payment:  $%.2f\n", i, loan);
        // balance = balance;      //without this, balance will be same. I don't know why.
        //balance = (balance * interestRate) - montlyPayment; 
    }
    
    return 0;
}