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
        
        if (ch == ' ') {     // if ch meets ' '
            words++;       // count words 
            continue;       // then go to while, skip to char count (chars++) down below
        }

        chars++;    // count indiviail chars
    }
    words++;  // include count end of the word
    printf("average word length: %.1f\n", (float) chars / (float) words);

    return 0;
}