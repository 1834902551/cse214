/* Calculate first 92 Fibonacci number and store those in an array */
#include<stdio.h>
int main()
{
    double a[10];
    int size = 92, i;

    a[0] = 0;
    a[1] = 1;

    for(i=2; i<size; i++)
        a[i] = a[i-1] + a[i-2];

    for (i = 0; i<size; i++)
        printf("%d. %.0lf \n", i+1, a[i]);

    return 0;
}
