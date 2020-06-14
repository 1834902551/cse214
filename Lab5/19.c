/*  Split an Array after Kth (take input K from user) elements
    into two different Arrays. Access the array using pointer */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[100];
    int c[100];
    int size_a = 10, size_b = 0, size_c = 0;
    int i, K, j = 0, *p, *q, *r;

    p = &a[0];
    q = &b[0];
    r = &c[0];

    scanf("%d",&K);

    for(i=0; i<size_a; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size_a; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size_b++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size_c++;
        }
    }

    printf("\n");

    for(i=0; i<size_b; i++)
        printf("%d ",*(q+i));

    printf("\n");

    for(i=0; i<size_c; i++)
        printf("%d ", *(r+i));

    return 0;
}
