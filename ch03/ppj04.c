/* 
 * p50 programing project 04 
 * input Phone number -> output different form
 */

#include <stdio.h>

int main(void)
{
    int localNo, phoneNoF, phoneNoB;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &localNo, &phoneNoF, &phoneNoB);

    printf("You entered %.3d.%.3d.%.4d\n", localNo, phoneNoF, phoneNoB);

    return 0;
}