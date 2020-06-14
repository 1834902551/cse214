/*  Print entire array each element separated by space.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, i, *p;

    p = &a[0];

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));

    return 0;
}
