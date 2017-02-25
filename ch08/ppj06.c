/*
 * p179 ppj06
 * 
 */

#include <stdio.h>
#include <ctype.h>

#define N 25

int main(void)
{
    int i = 0;
    char filter[N], msg;

    printf("Enter message: ");
    while ((msg = getchar()) != '\n') {
        filter[i] = toupper(msg);
        i++;
    }
    
    printf("In B1FF-speak: ");
    for (i = 0; i < N; i++) {
        switch (filter[i]) {
            case 'A': filter[i] = '4'; break;
            case 'B': filter[i] = '8'; break;
            case 'E': filter[i] = '3'; break;
            case 'I': filter[i] = '1'; break;
            case 'S': filter[i] = '5'; break;
            default: ;break;
        }
        putchar(filter[i]);
    }

    for (i = 0; i < 10; i++) {
        putchar('!');
    }
    putchar('\n');

    return 0;
}
