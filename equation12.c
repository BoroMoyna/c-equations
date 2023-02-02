#include <stdio.h>
int main()
{
    float a, b, area;
    printf ("Enter any number:");
        scanf ("%f %f", &a, &b);
        area = b/4 * sqrt (4 * (a*a - b*b));
    printf ("%f", area);
    return 0;
}