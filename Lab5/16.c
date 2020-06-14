/*  Declare another array with ten (10) values and compare both
    arrays whether they are same or not. Access the array using pointer */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, i;
    int *p, *q;
    int same = 0;

    p = &a[0];
    q = &b[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            same++;

    if(same==size)
        printf("\nTwo array are same\n");
    else
        printf("\nTwo array are not same\n");

    return 0;
}
