/* Find Second Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int a[100] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    int size = 10,*min, i, min2;

    min = &a[0];

    for(i=0; i<size; i++)
        printf("%d ",*(min+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
            min2 = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min2 && *(min+i)!=*min)
            min2 = *(min+i);
    }

    printf("%d\n", min2);

    return 0;
}

