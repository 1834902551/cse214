/* Update Kth (take input K from user) index with the value
    �X� (take input X from user). And print the whole array */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K, X;
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\nIndex: ");

    scanf("%d", &K);

    printf("\nValue= ");
    scanf("%d", &X);

    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[K] = X;

    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
