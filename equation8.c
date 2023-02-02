#include <stdio.h>
 int main()
 {
    float F, C;
    printf ("Enter any number:");
    scanf ("%f", & F);
    C = 5 * (F - 32)/9;
    printf ("%f", C);

    return 0;
 }