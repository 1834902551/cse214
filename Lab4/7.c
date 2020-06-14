/* Split an Array at Kth (take input K from user) index into two different Arrays */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[100];
    int c[100];
    int size_a = 10, size_b, size_c;
    int i, j=0, K;

    scanf("%d",&K);

    for(i=0; i<size_a; i++)
        printf("%d ",a[i]);

    for(i=0; i<size_a; i++)
    {
        if(i<K)
        {
            b[i] = a[i];
            size_b++;
        }
        else
        {
            c[j++] = a[i];
            size_c++;
        }
    }

    printf("\n");
    for(i=0; i<size_b; i++)
        printf("%d ",b[i]);

    printf("\n");

    for(i=0; i<size_b; i++)
        printf("%d ",c[i]);

    return 0;
}
