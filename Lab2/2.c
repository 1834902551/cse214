/* Insert a value “X” (take input X from user) in
   the array at the end of currently stored elements */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, size = 10, X;

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nValue= ");

    scanf("%d",&X);
    a[9] = X;

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
