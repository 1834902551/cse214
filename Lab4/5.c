  /* Declare another array with five (5) values and
    merge two array into one array */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5};
    int b[10] = {6, 7, 8, 9, 10};
    int size1 = 5, size2 = 5, size, i, j;

    for(i=0; i<size1; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",b[i]);

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
        a[i]=b[j];

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    return 0;
}
