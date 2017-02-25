#include <stdio.h>
//#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{
    int a[10];    // 10 element x 4 byte = 40 byte
    
    printf("sizeof a %lu \n", sizeof(a));       // total array size = 40 byte (int)
    printf("sizeof a[n] %lu \n", sizeof(a[0]));        // each element size = 4byte, this is not element number, index number
    
    printf("sizeof(a) / sizeof(a[0)]) %lu\n", sizeof(a) / sizeof(a[0]));     //  40 / 4 = 10 element.
    
    return 0;
}
