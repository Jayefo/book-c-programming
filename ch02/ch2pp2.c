#include <stdio.h>

int main(void)
{
    float v, pi = 3.141562654f, r = 10;

    v = 4.0f / 3.0f * pi * (r * r *r);  // volume = 4/3 * pi * r^3
    //v = 4 / 3 * pi * (r * r *r);
    
    printf ("volume of a sphere with 10 meter raduis : %.1f m^3\n", v);

    return 0;
}