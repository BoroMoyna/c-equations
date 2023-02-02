#include<stdio.h>
int main()
{
    float base, height, area;
    printf ("Enter any number:");
    scanf ("%f %f", &base, &height);
    area = (base * height)/ 2;
    printf ("%f", area);

    return 0;
}