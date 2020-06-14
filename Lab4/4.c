/* Declare another array with ten (10) values and
   compare both arrays whether they are same or not */

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10,i;
    int same = 0;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",b[i]);

    for(i=0; i<size; i++)
    {


        if(a[i]==b[i]);
            same++;
    }

    if(same==size)
        printf("\n\nThey are same\n");

    else
    {

    printf("\n\nThey are not same\n");

    }
    return 0;
}
