/*  Declare another array with five (5) values and merge two array
    into one array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {11, 12, 13, 14, 15};
    int size_a = 10, size_b = 5, i, j, size;
    int *p, *q;

    p = &a[0];
    q = &b[0];

    for(i=0; i<size_a; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size_b; i++)
        printf("%d ",*(q+i));

    size = size_a + size_b;

    for(i=size_a, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    return 0;
}
