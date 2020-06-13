/* Delete a value from Kth index (take input K from user) from
    the array shift all other value to left. And print the whole array */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K, size = 10, tag = 0;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\nIndex: ");
    scanf("%d", &K);

    for (i=K; i<size; i++)
        a[i] = a[i+1];

    size--;

    for (i=0; i<size; i++)
        printf("%d ",a[i]);

    return 0;
}
