/* Copy the given array into another array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];
    int size = 10, i, temp=0;
    int *p, *q;

    p = &a[0];
    q = &b[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        temp = *(p+i);
        *(q+i) = temp;
    }

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    return 0;
}
