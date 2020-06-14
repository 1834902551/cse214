/* Merge the Elements of two Sorted Array */

#include <stdio.h>
int main()
{
    int a[10] = {8, 2, 7, 1, 4};
    int b[10] = {10, 5, 3, 6, 9};
    int size_a = 5, size_b = 5, i, j, size, temp;

    for(i=0; i<size_a; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0; i<size_b; i++)
        printf("%d ",b[i]);

    size = size_a + size_b;

    for(i=size_a, j=0; i<=size; i++,j++)
    {
        size_a++;
        a[i]=b[j];

    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0; i<size; i++)
    {
     for(j=i+1; j<size; j++)
        {
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    return 0;
}
