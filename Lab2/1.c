/* Insert any value at tenth (10th) index of the array.
    And print the whole array */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, size = 10;

    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nValue=11\n");

    a[9] = 11;

    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
