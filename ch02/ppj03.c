#include <stdio.h>

#define PI 3.141562654f
#define FRACTION 4.0f/3.0f

int main(void)
{
    float v, radius;
    
    printf ("Enter radius of a shere : ");
    scanf ("%f", &radius);
    
    v = FRACTION * PI * (radius * radius * radius);

    printf ("volume of a sphere is : %.1f cubic metres\n", v);

    return 0;
}