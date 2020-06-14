/* Copy the given array into another array */

#include<stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];
    int size = 10, i;

    printf("a= ");

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    for(i=0; i<size; i++)
    {
        b[i] = a[i];
    }
    printf("\nb= ");
    for(i=0; i<size; i++)
        printf("%d ",b[i]);

    return 0;
}
