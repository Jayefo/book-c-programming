#include <stdio.h>
#include <stdint.h>

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void)
{
    printf("Size of int8: %zu byte\n", sizeof(Int8));
    printf("Size of int16: %zu byte\n", sizeof(Int16));
    printf("Size of int32: %zu byte\n", sizeof(Int32));

    return 0;    
}