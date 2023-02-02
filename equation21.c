#include <stdio.h>
 int main()
 {
    float u, t, a, s;
        printf ("Enter any number;");
            scanf ("%f %f %f", &u ,&t, &a);
            s = u*t + (a*t*t)/2;
         printf ("%f", s);   
    return 0;
 }