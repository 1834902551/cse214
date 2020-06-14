/* Cyclically permute the elements of an array */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, i;

    for (i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    a[size] = a[0];

    for (i=0; i<size; i++)
        a[i] = a[i+1];

    for (i = 0; i<size; i++)
        printf ("%d ", a[i]);

    return 0;
}
