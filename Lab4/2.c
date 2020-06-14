/* Reverse the given array and store it in another array */

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];
    int size = 10, i;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0;i<=size;i++)
    {
        b[i-1] = a[size-i];

    }

    for(i=0; i<size; i++)
        printf("%d ",b[i]);

    return 0;
}

