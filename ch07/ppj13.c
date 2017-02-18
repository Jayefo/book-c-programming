/* 
 * p158 programming project 13
 * expression left to right
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int chars = 0, words = 0;
    char ch;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n'){      // loop until meets '\n'
        chars++;    // count indiviail chars
        
        if (ch == ' ') {     // condition check until meet ' '
            chars--;       // substraction space chars count from total chars count
            words++;       // count words 
        }
    }
    words++;  // include count end of the word
    printf("average word length: %.1f\n", (float) chars / (float) words);

    return 0;
}
