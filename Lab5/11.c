/* Find Second Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    int size = 10, i, max2;
    int *max;
    max = &a[0];

    for(i=0; i<size; i++)
        printf("%d ",*(max+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
            max2 = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max2 && *(max+i)<*max)
            max2 = *(max+i);
    }

    printf("Second Maxium: %d\n", max2);

    return 0;
}
