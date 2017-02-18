/* 
 * p158 programming project 10
 * counts the number of vowels
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
int n = 0;
char ch;
    
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {      // looping until meets a enter
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                n++;  break;
            default: break;
        }
    }
    printf("Your sentence contains %d vowels\n", n);
    
    return 0;
}