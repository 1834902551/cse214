/* Reverse the given array within the same array */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, i, j, temp=0;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=size-1, j=0; j<i; i--, j++){
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}


