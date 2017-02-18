/* 
 * p158 programming project 11
 * output initial from full name
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name, init;

    printf("Enter a frist and last name: ");
    while ((name = getchar()) == ' ');      // skip unitl meets blank
    init = name;        // Last name stored, including whitespace
    
    while ((name = getchar()) != ' ');      // skip until meet first non white space, name still contain 'white space + lastname'

    while ((name = getchar()) != '\n') {    // print each char until meet '\n'
        putchar(name);
    }
    printf(", %c.\n", init);
    
    return 0;
}