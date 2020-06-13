/* Find Minimum from the Array */

#include<stdio.h>
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int size=10, i, min= a[0];

    for(i=0;i<size;i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0;i<size;i++)
    {
        if(a[i]<min)
            min = a[i];
    }

    printf("Minimum = %d\n",min);

    return 0;
}
