/* Find Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    int size = 10, i;
    int *max;

    max = &a[0];

    for(i=0; i<size; i++)
        printf("%d ", *(max+i));

    printf("\n");

    for(i=1; i<size; i++)
        if(*(max+i)>*max)
            *max = *(max+i);

    printf("Maximum: %d\n",*max);

    return 0;
}
