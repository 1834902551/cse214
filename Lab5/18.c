/* Merge the Elements of two Sorted Array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int a[10] = {8, 2, 7, 1, 4};
    int b[10] = {10, 5, 3, 6, 9};
    int size_a = 5, size_b = 5, i, j, size, temp;
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
    {
        size_a++;
        *(p+i)=*(q+j);
    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    return 0;
}
