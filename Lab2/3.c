/* Insert a value “X” (take input X from user) in the array at
   third (3rd) index and shift all other value to right.
   And print the whole array */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X, index = 3, size = 10;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\nValue= ");

    scanf("%d", &X);

    for (i=size; i>=index; i--)
        a[i] = a[i-1];

    size=size+1;

    a[index] = X;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
