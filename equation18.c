#include <stdio.h>
 int main()
 {
    float F, K;
    printf ("Enter any number:");
    scanf ("%f", &F);
    K = 5/9 * (F-32)+273;
    printf ("%f", K);

    return 0;
 }