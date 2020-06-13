/* Update fifth (5th) index with another value. And print the whole array */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, index = 5, size = 10, value = 11;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");

    for (i=0; i==index; i++)
        a[i] = a[i - 1];

    a[index] = value;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
