/* Find Second Maximum from the Array */
#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int size=10, i, min, min2;

    for(i=0; i<size; i++)
        printf("%d ",a[i]);

    printf("\n");

    min = a[0];

    for(i=0; i<size; i++)
    {
        if(a[i]>min)
        {
            min2 = min;
            min = a[i];
        }
        else if(a[i]>min2 && a[i]<min)
            min2 = a[i];
    }

    printf("Second Minimum = %d\n",min2);

    return 0;
}
