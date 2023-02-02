#include <stdio.h>
 int main()
 {
    float u, a, s,v;
    printf ("Enter any number:");
        scanf ("%f %f %f", &u, &a, &s);
        v = sqrt (u * u + 2*a*s);
    printf ("%f", v);

    return 0;
 }